Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	lr_start_transaction("Homepage");

	web_url("/", 
		"URL=https://{host}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Homepage", LR_AUTO);
	
	web_reg_save_param("XSRF-TOKEN",
    "LB=XSRF-TOKEN=",
    "RB=;", LAST);
	
	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{XSRF-TOKEN}");

	lr_start_transaction("Login");

	web_reg_save_param("XSRF-TOKEN",
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
	
	web_submit_data("/api/authentication", 
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
		"{XSRF-TOKEN}");
	
	web_reg_save_param("user_ID",
    "LB=\"id\":",
    "RB=,",
	LAST);

	web_url("/api/account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/v2/customer/profile", 
		"URL=https://{host}/api/v2/customer/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/customer/hist-orders", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/customer/waitingOrders", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("/api/customer/orders", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
			
	lr_end_transaction("Login",LR_AUTO);
	

	lr_start_transaction("Create_new_test");

	web_url("new.order.html", 
		"URL=https://{host}/tmpl/tmpl_customer/new.order.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Create_new_test",LR_AUTO);

	lr_start_transaction("Add_description");

	web_add_header("Origin", 
		"https://{host}");

	web_reg_save_param_regexp("ParamName=order_ID",
	    "RegExp=(.*)",
        SEARCH_FILTERS,
        "Scope=Body",
        LAST);
	

	web_custom_request("draft", 
		"URL=https://{host}/api/v2/customer/draft", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/order?as=select_tester", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"BodyBinary={\"introduction\":\"{random_intro}\",\"targetSite\":\"{target_site}\",\"testTitle\":\"{site_title}\",\"testType\":\"SITE\"}", 
		LAST);

	lr_end_transaction("Add_description",LR_AUTO);

	lr_start_transaction("Participant_group");

	web_add_auto_header("Origin", 
		"https://{host}");

	web_custom_request("updateOrderAudience", 
		"URL=https://{host}/api/v2/customer/updateOrderAudience", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/order?id={order_ID}", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{order_ID},\"testerType\":\"{tester_type}\",\"participantGroupDTO\":[{\"ageRange\":{\"min\":{min_age_for_tester},\"max\":{max_age_for_tester}},\"children\":\"ANY\",\"count\":{number_of_test},\"educations\":[\"COMMON\",\"MIDDLE_FULL\",\"MIDDLE_SPEC\",\"HIGH_NOT_FULL\",\"HIGH\"],\"familyStatus\":\"ANY\",\"gender\":\"ANY\",\"groupName\":\"{random_group_name}\",\"incomeRange\":{\"min\":0,\"max\":55000},\"socialStatuses\":[\"STUDENT\",\"UNEMPLOYED\",\"HOUSEWIFE\",\"FREELANCER\",\"WORKER\",\"SPECIALIST\",\"CHIEF_DEPT\"],\"ordinal\":0}]}", 
		LAST);

	lr_end_transaction("Participant_group",LR_AUTO);

	lr_start_transaction("Add_question");

	web_custom_request("updateOrderSteps", 
		"URL=https://{host}/api/v2/customer/updateOrderSteps", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/order?id={order_ID}", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{order_ID},\"steps\":[{\"question\":\"{random_quest}\",\"stepType\":\"TEXT\",\"orderNum\":0}],\"metrics\":[]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("calculatePrice", 
		"URL=https://{host}/api/customer/calculatePrice?orderId={order_ID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/order?id={order_ID}", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Add_question",LR_AUTO);

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-XSRF-TOKEN", 
		"{XSRF-TOKEN}");

	web_url("paymentInitRequest_2", 
		"URL=https://{host}/api/v2/public/paymentInitRequest?orderId={order_ID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_start_transaction("Logout");
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}