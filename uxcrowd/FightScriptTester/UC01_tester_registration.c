UC01_tester_registration()
{
	lr_start_transaction("UC01_tester_registration");
	
	web_custom_request("/api/register", 
		"URL=https://{host}/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"email\":\"test{reg_tester_param}@test.com\",\"role\":\"ROLE_NEW_TESTER\",\"tariffType\":null}", 
		LAST);
                     
	lr_end_transaction("UC01_tester_registration",LR_AUTO);
	
	return 0;
}