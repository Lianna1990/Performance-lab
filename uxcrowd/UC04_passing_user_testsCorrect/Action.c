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
	
	lr_start_transaction("UC04_passing_user_tests");
	
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
	
	web_reg_save_param("tests_ID",
	    "LB=\"id\":",
	    "RB=,",
	    "Ord=All",
		LAST);
	
	web_custom_request("new-tasks", 
		"URL=https://{host}/api/tester/new-tasks?isMobile=false", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/tester/rating", 
		"URL=https://{host}/api/tester/rating?testerId={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/v2/tester/profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/v2/plugin/getLastVersion", 
		"URL=https://{host}/api/v2/plugin/getLastVersion?pluginType=WEB&environmentType=DO_PROD ", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_save_string(lr_paramarr_random("tests_ID"), "test_ID");
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"screenName\":\"START_PLUGIN\",\"testerId\":{user_ID}}\"}"), "request_body");
	
	web_reg_save_param_regexp("ParamName=ID",
	    "RegExp=(.*)",
        SEARCH_FILTERS,
        "Scope=Body",
        LAST);
	
	web_custom_request("api/stats/create",
		"URL=https://{host}/api/stats/create",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"id\":{ID},\"screenName\":\"SCREEN_CAPTURE\"}"), "request_body_2");
	
	web_custom_request("api/stats/update_3",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_2}",
		LAST);
	
	web_custom_request("api/account_2", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/tester/order-info", 
		"URL=https://{host}/api/tester/order-info?id={test_ID} ", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_eval_string("{\"archName\":\"x86_64\",\"numOfProcessors\":4,\"os\":\"Windows NT 10.0  Win64\",\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\",\"browserVersion\":\"Chrome 77.0.3865.120\",\"screenResolution\":\"1920x1080\",\"geoLocation\":null}"), "request_body_3");
	
	
	web_reg_save_param_json(
        "ParamName=tester_Task_Id",
        "QueryString=$.id",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
	
	web_custom_request("api/tester/create-task",
		"URL=https://{host}/api/tester/create-task?orderId={test_ID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_3}",
		LAST);
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"id\":{ID},\"screenName\":\"FINAL_INSTRUCTION\"}"), "request_body_4");
	
	web_custom_request("api/stats/update_4",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t15.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_4}",
		LAST);
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"id\":{ID},\"screenName\":\"START_PLUGIN\"}"), "request_body_5");
	
	web_custom_request("api/stats/update_5",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_5}",
		LAST);
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"id\":{ID},\"screenName\":\"COMPLETE_TEST\"}"), "request_body_6");
	
	web_custom_request("api/stats/update_6",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t17.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_6}",
		LAST);
	
	web_submit_data("api/video-upload-app",
		 "Action=https://{host}/api/video-upload-app",
		 "Method=POST",
		 "EncType=multipart/form-data",
		 "RecContentType=text/html",
		 "Snapshot=t18.inf",
		 "Mode=HTML",
		 ITEMDATA,
		     "Name=task-id", "Value={tester_Task_Id}", ENDITEM,
		     "Name=tag-dto", "Value={json_path}", "ContentType=application/json", "File=yes", ENDITEM,
		     "Name=name", "Value=blob.webm", ENDITEM,
		     "Name=video-file", "Value={video_path}", "ContentType=video/webm;codecs=vp9", "File=yes", ENDITEM,
		 LAST);
	
	lr_save_string(lr_eval_string("{\"orderId\":\"{test_ID}\",\"id\":{ID},\"screenName\":\"UPLOAD_VIDEO\", \"testerTaskId\":\"{tester_Task_Id}\"}"), "request_body_7");
	
	web_custom_request("api/stats/update_7",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t19.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body_7}",
		LAST);
	
	web_custom_request("api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("new-tasks", 
		"URL=https://{host}/api/tester/new-tasks?isMobile=false", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/tester/rating", 
		"URL=https://{host}/api/tester/rating?testerId={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/v2/tester/profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC04_passing_user_tests", LR_AUTO);//было неверно указано: LAST
	



	
	return 0;
}
