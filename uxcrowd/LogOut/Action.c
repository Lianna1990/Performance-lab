Action()
{
	lr_start_transaction("LogOut");
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("token",
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
		"{token}");
	
	web_url("host",
		"URL=https://{host}/", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("LogOut",LR_AUTO);
	
	return 0;
}
