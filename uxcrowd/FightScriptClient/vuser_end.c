vuser_end()
{
	
	lr_start_transaction("LogOut");
	
	web_custom_request("logOut", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	
	lr_end_transaction("LogOut",LR_AUTO);
	
	return 0;
}
