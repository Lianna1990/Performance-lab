Action()
{
	int randVideo=rand()%10;
	
	lr_start_transaction("UC05_passing_tests_by_reference");
	
	lr_start_transaction("tran_05_01_go_to_link");
	
	web_reg_save_param("current_id_for_link", 
	                   "LB=&_branch_match_id=",
	                   "RB=server",
	                   LAST);

	web_url("https://uxcrowd.test-app.link/do-prod-side-tester-welcome?ac={test_name}", 
		"URL=https://uxcrowd.test-app.link/do-prod-side-tester-welcome?ac={test_name}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("token",
    "LB=XSRF-TOKEN=",
    "RB=;", LAST);
	
	web_custom_request("api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_reg_save_param("password",
    		"LB=password: \'",
    		"RB=\'", LAST);
	
	
	web_url("/controller/controllers_testers/controller_side_tester/home.controller.js?bust=1571645335848", 
		"URL=https://{host}/controller/controllers_testers/controller_side_tester/home.controller.js?bust=1571645335848", 
		"Resource=0", 
		"RecContentType=application/json",
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/api/v2/plugin/getLastVersion", 
		"URL=https://{host}/api/v2/plugin/getLastVersion?pluginType=WEB&environmentType=PROD", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac=16958850&_branch_match_id={current_id_for_link}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("tran_05_01_go_to_link", LR_AUTO);

	lr_start_transaction("tran_05_02_enter_mail");

	web_reg_save_param_json(
		"ParamName=test_ID",
		"QueryString=$.orderId",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("/api/tester-integration", 
		"URL=https://{host}/api/tester-integration", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac=16958850&_branch_match_id={current_id_for_link}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"acc\":\"{test_name}\",\"email\":\"{email}\"}", 
		LAST);
	
	web_reg_save_param("token",
    	"LB=XSRF-TOKEN=",
    	"RB=;",
    	"Ord=2", 
    	LAST);
	
	web_reg_save_param("user_id",
    	"LB=userId=",
    	"RB=;", 
    	LAST);

	web_custom_request("/api/authentication", 
		"URL=https://{host}/api/authentication?password={password}&remember-me=true&submit=Login&username={email}", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac=16958850&_branch_match_id={current_id_for_link}", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token}");

	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac=16958850&_branch_match_id={current_id_for_link}", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=ID_four",
		"RegExp=(.*)",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("/api/stats/create", 
		"URL=https://{host}/api/stats/create", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac=16958850&_branch_match_id={current_id_for_link}", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":\"{test_name}\",\"screenName\":\"ENTER_EMAIL\",\"testerId\":{user_id},\"errorMessage\":null}", 
		LAST);
	
	lr_end_transaction("tran_05_02_enter_mail", LR_AUTO);
	
	lr_start_transaction("tran_05_03_passing_test");

	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_url("order-info", 
		"URL=https://{host}/api/tester/order-info?id={test_ID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	lr_save_string(
		lr_eval_string(
			"{\"orderId\":\"{test_ID}\"," 
			"\"screenName\":\"START_PLUGIN\"," 
			"\"testerId\":\"{user_ID}\"}"), 
		"request_body");
	
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
		"Snapshot=t501.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	lr_save_string(
		lr_eval_string(
			"{\"archName\":\"x86_64\"," 
			"\"numOfProcessors\":4," 
			"\"os\":\"Windows NT 10.0  Win64\"," 
			"\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\"," 
			"\"browserVersion\":\"Chrome 77.0.3865.120\"," 
			"\"screenResolution\":\"1920x1080\"," 
			"\"geoLocation\":null}"), 
		"request_body");
	
	
	web_reg_save_param_json(
        "ParamName=task_id",
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
		"Snapshot=t505.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	if (randVideo < 3) {
		lr_start_transaction("upload_small_video");
		lr_save_string(lr_eval_string("{path_small_video}"),"path_video");
	} else if (randVideo < 9) {
		lr_start_transaction("upload_medium_video");
		lr_save_string(lr_eval_string("{path_medium_video}"),"path_video");
	} else {
		lr_start_transaction("upload_big_video");
		lr_save_string(lr_eval_string("{path_big_video}"),"path_video");
	}

	web_submit_data("api/video-upload-app",
		 "Action=https://{host}/api/video-upload-app",
		 "Method=POST",
		 "EncType=multipart/form-data",
		 "RecContentType=text/html",
		 "Snapshot=t509.inf",
		 "Mode=HTML",
		 ITEMDATA,
		     "Name=task-id", "Value={task_id}", ENDITEM,
		     "Name=tag-dto", "Value={path_json}", "ContentType=application/json", "File=yes", ENDITEM,
		     "Name=name", "Value=blob.webm", ENDITEM,
		     "Name=video-file", "Value={path_video}", "ContentType=video/webm;codecs=vp9", "File=yes", ENDITEM,
		 LAST);
	
	if (randVideo < 3) {
		lr_end_transaction("upload_small_video", LR_AUTO);
	} else if (randVideo < 9) {
		lr_end_transaction("upload_medium_video", LR_AUTO);
	} else {
		lr_end_transaction("upload_big_video", LR_AUTO);
	}
	
	lr_end_transaction("tran_05_03_passing_test", LR_AUTO);

	lr_end_transaction("UC05_passing_tests_by_reference",LR_AUTO);
	
	return 0;
}