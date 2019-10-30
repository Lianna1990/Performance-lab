Homepage()
{
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	trans = lr_start_transaction_instance("Homepage",0);
	
	web_reg_save_param_ex(
		  "ParamName=token",
		  "LB=CSRF-TOKEN=",
		  "RB=;",
		  "Ordinal=1",
		  SEARCH_FILTERS,
		  "Scope=Headers",
		  LAST);
	
	web_custom_request("/api/account/", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t101.inf", 
		LAST);
	
	web_add_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_custom_request("/", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t102.inf", 
		LAST);
	
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Logout_finish,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);

	lr_save_string(buffer,"report");
                     
	lr_end_transaction_instance(trans,LR_AUTO);
	
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
