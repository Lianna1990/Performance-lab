Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_start_transaction("Go_to_link");
	
	web_reg_save_param("current_id_for_link", 
	                   "LB=&_branch_match_id=",
	                   "RB=server",
	                   LAST);

	web_url("do-prod-side-tester-welcome", 
		"URL=https://uxcrowd.test-app.link/do-prod-side-tester-welcome?ac={test_name}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://{host}/assets/gulp/sup_css.css", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/css/landing/webflow.css", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/css/landing/uxcrowd.webflow.css", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/library/jquery.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/library/jquery.form.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/env.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/validation.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/library/FileSaver.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/sup_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/init.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/library/jquery.uploadfile.min.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/validation.rule.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/app_js/auth.interceptor.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/mediaelement-and-player.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/app_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/admin_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/customer_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/blog_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/moderator_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/home_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/new_tester_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/gulp/tester_js.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/library/require.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/main_route.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/main_js/path_controller.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		"Url=https://{host}/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		LAST);
	
	lr_end_transaction("Go_to_link", LR_AUTO);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_save_param("Token",
    "LB=XSRF-TOKEN=",
    "RB=;", LAST);
	
	
	web_custom_request("api/account", 
		"URL=https://{host}/api/account", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("password",
    		"LB=password: \'",
    		"RB=\'", LAST);
	
	
	web_url("ru.json", 
		"URL=https://{host}/assets/lang/ru.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/controller/controllers_testers/controller_side_tester/home.controller.js?bust=1571645335848", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");

	web_url("index1.html", 
		"URL=https://{host}/tmpl/tmpl_testers/react/sideTesterWelcome/index1.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/app.js?bust=1571645335848", "Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", ENDITEM, 
		LAST);

	web_url("welcome.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_side_tester/welcome.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("logo.41e83db4.svg", 
		"URL=https://{host}/static/media/logo.41e83db4.svg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");

	web_url("getLastVersion", 
		"URL=https://{host}/api/v2/plugin/getLastVersion?pluginType=WEB&environmentType=PROD", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);


	web_add_auto_header("Origin", 
		"https://{host}");
	

	lr_start_transaction("Enter_email");
	
	web_custom_request("tester-integration", 
		"URL=https://{host}/api/tester-integration", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"acc\":\"{test_name}\",\"email\":\"{email}\"}", 
		LAST);
	
	web_reg_save_param("new_token",
    "LB=XSRF-TOKEN=",
    "RB=;", "Ord=2", LAST);
	
	web_reg_save_param("user_id",
    "LB=userId=",
    "RB=;", LAST);
	
	web_reg_save_param("session_id",
    "LB=JSESSIONID=",
    "RB=;", LAST);
	
	web_reg_save_param("remember-me",
    "LB=remember-me=",
    "RB=;", LAST);


	web_custom_request("authentication", 
		"URL=https://{host}/api/authentication?password={password}&remember-me=true&submit=Login&username={email}", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{new_token}");

	web_url("account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://{host}");
	
	web_reg_save_param_regexp("ParamName=ID_four",
		"RegExp=(.*)",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("create", 
		"URL=https://{host}/api/stats/create", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/side-tester-welcome/welcome?ac={test_name}&_branch_match_id={current_id_for_link}", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":\"{test_name}\",\"screenName\":\"ENTER_EMAIL\",\"testerId\":{user_id},\"errorMessage\":null}", 
		LAST);
	
	lr_end_transaction("Enter_email", LR_AUTO);

	web_add_cookie("userId={user_id}; DOMAIN={host}");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("account_2", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("CSRF-TOKEN={Token}; DOMAIN={host}");

	web_add_cookie("XSRF-TOKEN={new_token}; DOMAIN={host}");

	web_add_cookie("remember-me={remember-me}; DOMAIN={host}");

	web_add_cookie("JSESSIONID={session_id}; DOMAIN={host}");
	
	web_reg_save_param("url_for_test_first",
    "LB=url\":\"https://",
    "RB=/\"", LAST);
	
	web_reg_save_param("token_for_going_test",
    "LB=CSRF-TOKEN=",
    "RB=;", LAST);
	
	lr_start_transaction("Going_test_by_link");

	web_url("order-info", 
		"URL=https://{host}/api/tester/order-info?id={test_name}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/fonts/Open%20Sans/RjgO7rYTmqiVp7vzi-Q5UYX0hVgzZQUfRDuZrPvH3D8.woff2", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/fonts/Open%20Sans/cJZKeOuBrn4kERxqtaUH3ZBw1xU1rKptJj_0jans920.woff2", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://dfhbnhciflaelghihmdfldmlpfbiobgc");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{token_for_going_test}");

	web_custom_request("update", 
		"URL=https://{host}/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"{test_name}\",\"id\":{ID_four},\"screenName\":\"SCREEN_CAPTURE\"}", 
		LAST);

	web_reg_save_param("id_for_final",
    		"LB=id\": \"",
    		"RB=\"", LAST);
	
	web_custom_request("create-task", 
		"URL=https://{host}/api/tester/create-task?orderId={test_name}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"archName\":\"x86_64\",\"numOfProcessors\":4,\"os\":\"Windows NT 10.0  Win64\",\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\",\"browserVersion\":\"Chrome 77.0.3865.120\",\"screenResolution\":\"1920x1080\",\"geoLocation\":null}", 
		LAST);

	web_custom_request("update_2", 
		"URL=https://{host}/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"{test_name}\",\"id\":{ID_four},\"screenName\":\"FINAL_INSTRUCTION\"}", 
		LAST);

	web_custom_request("update_3", 
		"URL=https://{host}/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"{test_name}\",\"id\":{ID_four},\"screenName\":\"START_PLUGIN\"}", 
		LAST);


	web_custom_request("update_4", 
		"URL=https://{host}/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json",
		"EncType=application/json",		
		"Referer=", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"{test_name}\",\"id\":{ID_four},\"screenName\":\"COMPLETE_TEST\"}", 
		LAST);
	
	lr_end_transaction("Going_test_by_link",LR_AUTO);

	lr_start_transaction("Upload_video_by_link");

	web_submit_data("video-upload-app", 
		"Action=https://{host}/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=task-id", "Value={id_for_final}", ENDITEM, 
		"Name=tag-dto", "Value={some_json_path}", "ContentType=application/json", "File=yes", ENDITEM, 
		"Name=name", "Value=blob.webm", ENDITEM,
		"Name=video-file", "Value={path_video}",  "ContentType=video/webm;codecs=vp9", "File=yes", ENDITEM, 
		LAST);

	web_custom_request("update_5", 
		"URL=https://{host}/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json",
		"Referer=", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"{test_name}\",\"id\":{ID_four},\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"{id_for_final}\"}", 
		LAST);

	lr_end_transaction("Upload_video_by_link",LR_AUTO);
	
	return 0;
}