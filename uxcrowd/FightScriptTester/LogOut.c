
    
LogOut()
{
	
		memset(buffer, 0, sizeof(buffer));
	trans = lr_start_transaction_instance("Logout", 0);
	
	web_custom_request("/api/logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("token",
	    "LB=CSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_url("/api/account/", 
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_url("/",
		"URL=https://{host}/", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=LogOut,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);

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
