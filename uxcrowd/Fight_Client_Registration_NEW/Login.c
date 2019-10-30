Login()
{
	trans = lr_start_transaction_instance("Login", 0);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t7.inf", 
		LAST);

	web_reg_save_param("Token_new",
	    "LB=XSRF-TOKEN=", 
	    "RB=;",
	    "Ord=2",
	    LAST);
	
	web_reg_save_param("remember-me",
	    "LB=remember-me=",
	    "RB=;",
		LAST);
		
	web_reg_save_param("sessionID",
	    "LB=JSESSIONID=",
	    "RB=;",
		LAST);
	
	web_submit_data("authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"Referer=https://{host}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token_new}");
	
	web_reg_save_param("user_ID",
	    "LB=\"id\":",
	    "RB=,",
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
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
