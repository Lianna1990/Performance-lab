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

UC02_fill_tester_profile()
{
	int age;
	
	lr_start_transaction("Login");
	
	web_reg_save_param("token",
	    "LB=XSRF-TOKEN=", 
	    "RB=;",
	    "Ord=2",
	    LAST);
		
	web_reg_save_param("sessionID",
	    "LB=JSESSIONID=",
	    "RB=;",
		LAST);
	
	web_submit_data("/api/authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"Referer=https://{host}/", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_reg_save_param("user_ID",
	    "LB=\"id\":",
	    "RB=,",
		LAST);

	web_custom_request("/api/v2/tester/profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Login", LR_AUTO);

	lr_start_transaction("fill_profile");
	
	age = (rand()%2+2)*10;
	
	if (age==20){
		lr_save_string("20","age");
	} else {
		lr_save_string("30","age");
	}
	
	lr_save_datetime("%d.%m.%Y", DATE_NOW - ONE_DAY*366*age, "birthday"); 

	lr_save_string(lr_eval_string(generate()), "lastname");
	lr_save_string(lr_eval_string(generate()), "firstname");
	lr_save_string(lr_eval_string(generate()), "patronymic");
	lr_save_string(lr_eval_string(generate()), "country");
	lr_save_string(lr_eval_string(generate()), "city");
	
	lr_save_string(lr_eval_string(
		"{\"id\":{user_ID}," 
		"\"fio\":\"{lastname} {firstname} {patronymic}\"," 
		"\"username\":\"{username}\"," 
		"\"country\":\"{country}\"," 
		"\"paypalEmail\":null," 
		"\"zipcode\":null," 
		"\"city\":\"{city}\"," 
		"\"income\":\"40000\"," 
		"\"familyStatus\":\"NOT_MARRIED\"," 
		"\"kids\":\"NONE\"," 
		"\"emailNotification\":true," 
		"\"gender\":\"MALE\"," 
		"\"birthday\":\"{birthday}\"," 
		"\"education\":\"MIDDLE_FULL\"," 
		"\"socialStatus\":\"UNEMPLOYED\"}"), 
		"request_body");

	
	web_custom_request("fill_profile",
		"URL=https://{host}/api/v2/tester/profile",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t303.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);

	lr_end_transaction("fill_profile",LR_AUTO);

	return 0;
}