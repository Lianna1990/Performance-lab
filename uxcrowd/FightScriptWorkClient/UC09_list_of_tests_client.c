UC09_list_of_tests_client()
{
	switch(atoi(lr_eval_string("{randomUser}"))) {
	case 1: lr_start_transaction("UC09_list_of_test_client(50)");
		break;
	case 2: lr_start_transaction("UC09_list_of_test_client(5)");
		break;
	case 3: lr_start_transaction("UC09_list_of_test_client(100)");
		break;}
		
	web_url("/api/customer/hist-orders", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/customer/waitingOrders", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param_json(
		"ParamName=id_arr",
		"QueryString=$[*].id",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_reg_save_param_json(
		"ParamName=video_id_arr",
		"QueryString=$[*]..video.id",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_url("/api/customer/orders", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);
	
	switch(atoi(lr_eval_string("{randomUser}"))) {
	case 1:
	    lr_end_transaction("UC09_list_of_test_client(50)",LR_AUTO);
		break;
	case 2:
		lr_end_transaction("UC09_list_of_test_client(5)",LR_AUTO);
		break;
	case 3:
		lr_end_transaction("UC09_list_of_test_client(100)",LR_AUTO);
		break;}
	
	return 0;
}
