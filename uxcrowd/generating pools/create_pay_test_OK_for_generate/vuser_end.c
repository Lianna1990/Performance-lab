vuser_end()
{
	lr_start_transaction("Logout");
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	lr_end_transaction("Logout",LR_AUTO);
}
