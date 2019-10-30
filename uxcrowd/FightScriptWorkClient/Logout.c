Logout()
{
	lr_start_transaction("Logout");
	
	web_custom_request("/api/logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t501.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("token",
	    "LB=CSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_url("/api/account/", 
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Snapshot=t502.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_url("/",
		"URL=https://{host}/", 
		"Resource=0",  
		"Snapshot=t503.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Logout",LR_AUTO);
	
	return 0;
}
