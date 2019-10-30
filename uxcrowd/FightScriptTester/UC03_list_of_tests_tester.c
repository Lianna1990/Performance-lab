UC03_list_of_tests_tester()
{
	if (atoi(lr_eval_string("{age}"))==20){
		
		lr_start_transaction("UC03_list_of_tests_tester (50 tests)");
	} else {
		
		lr_start_transaction("UC03_list_of_tests_tester (100 tests)");
	}
	
	web_url("/api/tester/rating", 
		"URL=https://{host}/api/tester/rating?testerId={user_ID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t401.inf", 
		"Mode=HTML",
		LAST);		

	web_url("/api/v2/tester/profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t402.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("tests_ID",
	    "LB=\"id\":",
	    "RB=,",
	    "Ord=All",
		LAST);
	
	web_url("/api/tester/new-tasks", 
		"URL=https://{host}/api/tester/new-tasks?isMobile=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t403.inf", 
		"Mode=HTML", 
		LAST);
	  
	if (atoi(lr_eval_string("{age}"))==20){
		
		lr_end_transaction("UC03_list_of_tests_tester (50 tests)", LR_AUTO);
	} else {
		
		lr_end_transaction("UC03_list_of_tests_tester (100 tests)", LR_AUTO);
	}
	
	return 0;
}
