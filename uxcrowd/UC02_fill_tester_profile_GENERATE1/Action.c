char * generate(){	
	char alfabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char login[10]="";
	int i;
	strcpy(login, "");
	for (i=0; i<5; i++) {		
		login[i]=alfabet[rand()%26];
	}
	return login;
}

Action()
{	
	int age;
//	int randNumber; 
	
//	randNumber = rand()%10000 + 1;
//	lr_save_datetime("%d.%m.%Y", DATE_NOW - ONE_DAY*randNumber-10000, "randDate"); 
	
	age = atoi(lr_eval_string("{age}"));

	if ((age >= 18) && (age <= 25)){
		lr_save_string(lr_eval_string("01.01.1999"), "birthday");
	}// точка с запятой здесь не нужны
	
	else if ((age >= 26) && (age <= 40)){
		lr_save_string(lr_eval_string("01.01.1989"), "birthday");
	}// точка с запятой здесь не нужны
	
	else if ((age >= 41) && (age <= 60)){
		lr_save_string(lr_eval_string("01.01.1969"), "birthday");
	}// точка с запятой здесь не нужны
	
	else if ((age >= 61)){  //не хватало скобки
		lr_save_string(lr_eval_string("01.01.1949"), "birthday");
	};
	
	

	lr_save_string(lr_eval_string(generate()), "lastname");
	lr_save_string(lr_eval_string(generate()), "firstname");
	lr_save_string(lr_eval_string(generate()), "patronymic");
	lr_save_string(lr_eval_string(generate()), "country");
	lr_save_string(lr_eval_string(generate()), "city");
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_url("account", 
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_url("host",
		"URL=https://{host}/", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("Token_new",
	    "LB=XSRF-TOKEN=", 
	    "RB=;",
	    "Ord=2",
	    LAST);
	
	web_reg_save_param("remember-me",
	    "LB=remember-me=",
	    "RB=;",
		LAST);
		
	web_reg_save_param("sessionID",
	    "LB=JSESSIONID=",
	    "RB=;",
		LAST);
	
	web_submit_data("authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"Referer=https://{host}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token_new}");
	
	web_reg_save_param("user_ID",
	    "LB=\"id\":",
	    "RB=,",
		LAST);

	web_custom_request("profile_3", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_eval_string("{\"id\":{user_ID},\"fio\":\"{lastname} {firstname} {patronymic}\",\"username\":\"{username}\",\"country\":\"{country}\",\"paypalEmail\":null,\"zipcode\":null,\"city\":\"{city}\",\"income\":\"0\",\"familyStatus\":\"NOT_MARRIED\",\"kids\":\"NONE\",\"emailNotification\":true,\"gender\":\"MALE\",\"birthday\":\"{birthday}\",\"education\":\"START\",\"socialStatus\":\"UNEMPLOYED\"}"), "request_body");

	web_custom_request("fill_profile",
		"URL=https://{host}/api/v2/tester/profile",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t299.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);

	lr_end_transaction("fill_profile",LR_AUTO);

	return 0;
}