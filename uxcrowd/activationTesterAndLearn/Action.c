Action()
{
	
	web_url("/activate", 
		"URL=https://{host}/activate?key={activateKeyTester}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=XSRF-TOKEN",
		"LB=XSRF-TOKEN=",
		"RB=;",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"HeaderNames=Set-Cookie",
		LAST);
	
	web_url("/api/account",
		"URL=https://{host}/api/account",
		"TargetFrame=",
		"Resource=0",
		"Referer=https://{host}/",
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{XSRF-TOKEN}");

	web_url("/api/activate_exist", 
		"URL=https://{host}/api/activate_exist?key={activateKeyTester}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/css/svg/youtube.svg", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		LAST);

	lr_start_transaction("set password");

	web_reg_save_param_json(
		"ParamName=username",
		"QueryString=$.username",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_custom_request("/api/activate", 
		"URL=https://{host}/api/activate", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"key\":\"{activateKeyTester}\",\"password\":\"{password}\"}", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=XSRF-TOKEN",
		"LB=XSRF-TOKEN=",
		"RB=;",
		"Ordinal=Last",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"HeaderNames=Set-Cookie",
		LAST);
	
	web_submit_data("/api/authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=false", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{XSRF-TOKEN}");

	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571387817193", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571387817193", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=../app.js?bust=1571387817193", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		LAST);

	web_url("/api/tester/has-completed-video", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://{host}/app-new-tester-home/welcome", ENDITEM, 
		LAST);

	web_url("/api/tester/has-completed-video", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("set password",LR_AUTO);

	lr_start_transaction("LearnTesting_01_Instruction_Step1");

	web_url("/api/tester/has-completed-video", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/welcome", 
		"Snapshot=t1049.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LearnTesting_01_Instruction_Step1",LR_AUTO);

	lr_start_transaction("LearnTesting_02_Instruction_Step2");

	web_url("/api/tester/has-completed-video", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction1", 
		"Snapshot=t1051.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LearnTesting_02_Instruction_Step2",LR_AUTO);

	lr_start_transaction("LearnTesting_03_Instruction_Step3");

	web_url("/api/tester/has-completed-video", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction2", 
		"Snapshot=t1053.inf", 
		"Mode=HTML",
		LAST);

	lr_end_transaction("LearnTesting_03_Instruction_Step3",LR_AUTO);

	lr_start_transaction("LearnTesting_04_StartTesting");

	web_url("/app-new-tester-home/instruction3", 
		"URL=https://{host}/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1054.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_json(
		"ParamName=testerId",
		"QueryString=$.id",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1055.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=id",
		"LB=",
		"RB=",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);         
	
	web_custom_request("/api/stats/create", 
		"URL=https://{host}/api/stats/create", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1060.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":\"4\",\"screenName\":\"START_PLUGIN\",\"testerId\":{testerId}}", 
		LAST);

	lr_end_transaction("LearnTesting_04_StartTesting",LR_AUTO);

	lr_start_transaction("LearnTesting_05_StartTest");

	web_reg_save_param_json(
		"ParamName=task-id",
		"QueryString=$.id",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_custom_request("/api/tester/create-task", 
		"URL=https://{host}/api/tester/create-task?orderId=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1065.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"archName\":\"x86_64\",\"numOfProcessors\":4,\"os\":\"Windows NT 10.0  Win64\",\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\",\"browserVersion\":\"Chrome 77.0.3865.120\",\"screenResolution\":\"1920x1080\",\"geoLocation\":null}", 
		LAST);

	lr_end_transaction("LearnTesting_05_StartTest",LR_AUTO);

	lr_start_transaction("LearnTesting_06_UploadVideo");

	web_submit_data("/api/video-upload-app",
		"Action=https://{host}/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t1069.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=task-id", "Value={task-id}", ENDITEM, 
		"Name=video-file", "Value=blob", "File=Yes", ENDITEM, 
		"Name=name", "Value=blob.webm", ENDITEM, 
		"Name=tag-dto", "Value=blob", "File=Yes", ENDITEM, 
		LAST);

//	web_custom_request("/api/stats/update", 
//		"URL=https://{host}/api/stats/update", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t105.inf", 
//		"Mode=HTML", 
//		"Body={\"orderId\":\"4\",\"id\":{id},\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"{task-id}\"}", 
//		LAST);
	
	lr_end_transaction("LearnTesting_06_UploadVideo",LR_AUTO);

	lr_start_transaction("LearnTesting_07_Œ ");

	web_url("instruction3_2", 
		"URL=https://{host}/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1071.inf", 
		"Mode=HTML", 
		LAST);

	web_url("account_4", 
		"URL=https://{host}/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1072.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_8", 
		"URL=https://{host}/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-new-tester-home/instruction3", 
		"Snapshot=t1076.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LearnTesting_07_Œ ",LR_AUTO);

	return 0;
}