Homepage()
{
	randNumber = rand()%10000 + 1;
	lr_save_datetime("%d.%m.%Y", DATE_NOW - ONE_DAY*randNumber-10000, "randDate"); 

	lr_save_string(lr_eval_string(generate()), "lastname");
	lr_save_string(lr_eval_string(generate()), "firstname");
	lr_save_string(lr_eval_string(generate()), "patronymic");
	lr_save_string(lr_eval_string(generate()), "country");
	lr_save_string(lr_eval_string(generate()), "city");
	
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	web_set_max_html_param_len("2048");
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", 
	    LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t1.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	trans = lr_start_transaction_instance("Homepage", 0);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t2.inf", 
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
