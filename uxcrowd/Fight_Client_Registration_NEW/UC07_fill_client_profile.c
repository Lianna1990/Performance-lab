UC07_fill_client_profile()
{
	trans = lr_start_transaction_instance("UC07_fill_client_profile", 0);
	
	web_custom_request("profile_3", 
		"URL=https://{host}/api/customer/profile?id={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_eval_string("{\"id\":{user_ID},\"fio\":\"{lastname} {firstname} {patronymic}\",\"username\":\"{username}\",\"email\":\"{username}@test.com\",\"phone\":\"77777777777\",\"customerType\":\"FL\",\"inn\":\"{inn1}{inn2}\",\"lawAddress\":\"{country}\",\"kpp\":null,\"ogrn\":null,\"postAddress\":null,\"okpo\":null,\"bank\":null,\"bic\":null,\"account\":null,\"corrAccount\":null,\"document\":null,\"companyName\":\"test\",\"ogrnip\":null,\"snils\":\"{snils1}{snils2}\",\"passSeriesNum\":\"{pasport}\",\"passGet\":\"{city}\",\"emailNotification\":true,\"agree\":true}"), "request_body");

	web_custom_request("fill_profile",
		"URL=https://{host}/api/customer/profile",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);

	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("Logout", 0);
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t16.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t17.inf", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	return 0;
}
