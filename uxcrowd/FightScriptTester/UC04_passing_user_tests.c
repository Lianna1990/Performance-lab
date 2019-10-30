#include <stdio.h>

UC04_passing_user_tests()
{	
	int randVideo=rand()%10;
	int randStep=rand()%90000+10000;
	char str_randStep[10]="";
	char start_task_id[10]="";
	FILE* f;
	sprintf(str_randStep,"%d",randStep);
	
	lr_start_transaction("UC04_passing_user_tests");

	lr_save_string(lr_paramarr_random("tests_ID"), "test_ID");
	
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
			"{\"orderId\":\"{test_ID}\"," 
			"\"id\":{ID}," 
			"\"screenName\":\"SCREEN_CAPTURE\"}"), 
		"request_body");
	
	web_custom_request("/api/stats/update",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t502.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	web_custom_request("/api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t503.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("api/tester/order-info", 
		"URL=https://{host}/api/tester/order-info?id={test_ID} ", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t504.inf", 
		"Mode=HTML", 
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
	
	lr_save_string(
		lr_eval_string(
			"{\"orderId\":\"{test_ID}\"," 
			"\"id\":{ID}," 
			"\"screenName\":\"FINAL_INSTRUCTION\"}"), 
		"request_body");
	
	web_custom_request("api/stats/update",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t506.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	lr_save_string(
		lr_eval_string(
			"{\"orderId\":\"{test_ID}\"," 
			"\"id\":{ID}," 
			"\"screenName\":\"START_PLUGIN\"}"), 
		"request_body");
	
	web_custom_request("api/stats/update",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t507.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	lr_save_string(
		lr_eval_string(
			"{\"orderId\":\"{test_ID}\"," 
			"\"id\":{ID}," 
			"\"screenName\":\"COMPLETE_TEST\"}"), 
		"request_body");
	
	web_custom_request("api/stats/update",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t508.inf",
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
		     "Name=tag-dto", "Value={json_path}", "ContentType=application/json", "File=yes", ENDITEM,
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
	
	lr_save_string(
		lr_eval_string(
			"{\"orderId\":\"{test_ID}\"," 
			"\"id\":{ID}," 
			"\"screenName\":\"UPLOAD_VIDEO\", " 
			"\"testerTaskId\":\"{task_id}\"}"), 
		"request_body");
	
	web_custom_request("api/stats/update",
		"URL=https://{host}/api/stats/update",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t510.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);
	
	web_custom_request("api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t511.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("/api/tester/new-tasks", 
		"URL=https://{host}/api/tester/new-tasks?isMobile=false", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t512.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("/api/tester/rating", 
		"URL=https://{host}/api/tester/rating?testerId={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t513.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("/api/v2/tester/profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t514.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC04_passing_user_tests", LR_AUTO);
	
	return 0;
}
