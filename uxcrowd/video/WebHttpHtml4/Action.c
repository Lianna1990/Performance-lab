Action()
{
	web_set_max_html_param_len("1024");
	
	web_reg_save_param("Token",
		    "LB=XSRF-TOKEN=",
		    "RB=;", LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t1.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
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

	web_custom_request("profile_3", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	web_submit_data("api/video-upload-app",
		 "Action=https://{host}/api/lk-video-upload-app",
		 "Method=POST",
		 "EncType=multipart/form-data",
		 "RecContentType=text/html",
		 "Snapshot=t18.inf",
		 "Mode=HTML",
		 ITEMDATA,
		     "Name=orderId", "Value={tester_Task_Id}", ENDITEM,
		     "Name=name", "Value=blob.webm", ENDITEM,
		     "Name=file", "Value={video_path}", "ContentType=video/webm;codecs=vp9", "File=yes", ENDITEM,
		 LAST);
	
	return 0;
}
