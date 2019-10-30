UC06_client_registration()
{
	trans = lr_start_transaction_instance("UC06_client_registration", 0);
	
	web_custom_request("register", 
		"URL=https://{host}/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"name\":\"name\",\"company\":\"company\",\"email\":\"client{username_reg}@test.com\",\"telNumber\":\"+7 (999) 999 9999\",\"role\":\"ROLE_CUSTOMER\",\"tariffType\":\"PROJECT\"}",
		LAST);

//  Тут запись в файл, пока убираю.
//	lr_save_string (lr_eval_string ("{username_reg}"), "param_to_log");
//  	lr_log_message ("client%s@test\.com", lr_eval_string ("{username_reg_to_log}"));
//  	
//	FileVarriable = fopen (FileLocation,"a+");
//    fprintf (FileVarriable, "client%s@test\.com\n", lr_eval_string ("{username_reg_to_log}")); 
//    fclose (FileVarriable);
			
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
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t6.inf", 
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
	
	return 0;
}
