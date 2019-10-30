Homepage_and_Login()
{
	int randUser = rand()%10;
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_start_transaction("Homepage");

		web_url("/",
		"URL=https://{host}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("token",
	    "LB=XSRF-TOKEN=",
	    "RB=;",
	    LAST);
	
	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");
	
	lr_end_transaction("Homepage", LR_AUTO);
	
	lr_start_transaction("Login");
	
	if (randUser < 3) {
		lr_save_string(lr_eval_string("{user9}"),"username");
		lr_save_string("1","randUser");
	} else if (randUser < 9) {
		lr_save_string(lr_eval_string("{user29}"),"username");
		lr_save_string("2","randUser");
	} else {
		lr_save_string(lr_eval_string("{user56}"),"username");
		lr_save_string("3","randUser");
	}
	
	web_reg_save_param("token",
    "LB=XSRF-TOKEN=", 
    "RB=;",
    "Ord=2",
    LAST);
	
//	web_reg_save_param("remember-me",
//    "LB=remember-me=",
//    "RB=;",
//	LAST);
		
	web_reg_save_param("sessionID",
    "LB=JSESSIONID=",
    "RB=;",
	LAST);
	
	web_submit_data("/api/authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"Referer=https://{host}/", 
		"Snapshot=t103.inf", 
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

	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/v2/customer/profile", 
		"URL=https://{host}/api/v2/customer/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("Login",LR_AUTO);
	
	return 0;
}
