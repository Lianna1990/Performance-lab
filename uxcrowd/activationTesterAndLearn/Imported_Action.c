Imported_Action()
{
	lr_start_transaction("UC_00_LogOut");
	
	web_custom_request("logout", 
		"URL=https://{LogOut_host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	lr_end_transaction("UC_00_LogOut",LR_AUTO);
	
	return 0;
}
