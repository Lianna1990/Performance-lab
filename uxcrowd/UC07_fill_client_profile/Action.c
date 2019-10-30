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
	int randNumber; 
	
	randNumber = rand()%10000 + 1;
	lr_save_datetime("%d.%m.%Y", DATE_NOW - ONE_DAY*randNumber-10000, "randDate"); 

	lr_save_string(lr_eval_string(generate()), "lastname");
	lr_save_string(lr_eval_string(generate()), "firstname");
	lr_save_string(lr_eval_string(generate()), "patronymic");
	lr_save_string(lr_eval_string(generate()), "country");
	lr_save_string(lr_eval_string(generate()), "city");
	
	web_reg_save_param("Token",
		"LB=XSRF-TOKEN=",
		"RB=;", LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	lr_start_transaction("UC07_fill_client_profile");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
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
	
	web_url("account", 
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("profile_3", 
		"URL=https://{host}/api/customer/profile?id={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_eval_string("{\"id\":{user_ID},\"fio\":\"{lastname} {firstname} {patronymic}\",\"username\":\"{username}\",\"email\":\"{username}@test.com\",\"phone\":\"77777777777\",\"customerType\":\"FL\",\"inn\":\"{inn1}{inn2}\",\"lawAddress\":\"{country}\",\"kpp\":null,\"ogrn\":null,\"postAddress\":null,\"okpo\":null,\"bank\":null,\"bic\":null,\"account\":null,\"corrAccount\":null,\"document\":null,\"companyName\":\"test\",\"ogrnip\":null,\"snils\":\"{snils1}{snils2}\",\"passSeriesNum\":\"{pasport}\",\"passGet\":\"{city}\",\"emailNotification\":true,\"agree\":true}"), "request_body");

	web_custom_request("fill_profile",
		"URL=https://{host}/api/customer/profile",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t9.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);

	lr_end_transaction("UC07_fill_client_profile",LR_AUTO);

	return 0;
}