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

	web_url("prod.uxcrowd.ru", 
		"URL=https://prod.uxcrowd.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571834720676", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571834720676", ENDITEM, 
		"Url=/app.js?bust=1571834720676", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://prod.uxcrowd.ru/assets/lang/ru.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"3a28e7f7-1361-4148-a297-8b5c71daf9b4");

	web_url("headerGreenWhite.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_image("ux-logo-new-white.svg", 
		"Src=../../assets/images/ux-logo-new-white.svg", 
		"Snapshot=t46.inf", 
		EXTRARES, 
		"Url=/assets/fonts/glyphicons-halflings-regular.woff2", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/controller/controller_customer/ordersList.controller.js?bust=1571834720676", ENDITEM, 
		"Url=/controller/controller_customer/header.controller.js?bust=1571834720676", ENDITEM, 
		"Url=/controller/controller_customer/home.controller.js?bust=1571834720676", ENDITEM, 
		"Url=/controller/controller_customer/ordersListHeader.controller.js?bust=1571834720676", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"3a28e7f7-1361-4148-a297-8b5c71daf9b4");

	web_url("modal-login.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=bf685739-47ec-4fbe-86ea-8a4be0152dd0; DOMAIN=prod.uxcrowd.ru");

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_submit_data("authentication", 
		"Action=https://prod.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=clientx3", ENDITEM, 
		"Name=password", "Value=654321", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"3277a738-66ad-44bc-aed1-4633c34eb6e8");

	web_url("account", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ordersList.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/ordersList.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		LAST);

	web_url("waitingOrders", 
		"URL=https://prod.uxcrowd.ru/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("hist-orders", 
		"URL=https://prod.uxcrowd.ru/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/draft.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/insight.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list-active.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_url("orders", 
		"URL=https://prod.uxcrowd.ru/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("newtest");

	web_add_cookie("intercom-session-fkbc3no8=TVpSUEN4VkRIMzQ5MWpQRjUvTG5maTRoaXF0WU52eGh3Uk44di93S3ZGeXhIOUZUbCtKYTY0TiswajBLRExiYy0tdnNJRXYwa3FCb01nWGo1Q0lvcjM2UT09--42b78bd4c57873c0078242f509bdc9ef36819b9d; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=WXRnaTVrR2xuQUNvejFpRkd1ZlUxN1llWnorUHdGbzA0MHF3QTRNTWNCL0hndlJyQjV3cEJTYThlRVBFVGhwUC0taXhSVkh6QklheUNBOHNUWWl4SXVDQT09--b0463a0afcc801392c0d015bffc15a1940da4e81; DOMAIN=prod.uxcrowd.ru");

	lr_think_time(16);

	web_url("new.order.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/new.order.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/plus-active.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-green-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?as=select_tester", ENDITEM, 
		"Url=/assets/images/burger-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?as=select_tester", ENDITEM, 
		"Url=/assets/images/avatar-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?as=select_tester", ENDITEM, 
		LAST);

	lr_end_transaction("newtest",LR_AUTO);

	lr_start_transaction("opisanie");

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571834777829\",\"eventData\":{\"sendTime\":1571834777829,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-Rodv1TVLAS9Yt2qe1ey2LglcvH3V8aFJOPd8TMDrlnKSqv0zJ_HPTnnqXJvJUW3Vqc5xZJ-0aVMeo9xrvRneSxbjk2IJkDvr1omF\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive2*/

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("draft", 
		"URL=https://prod.uxcrowd.ru/api/v2/customer/draft", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?as=select_tester", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"BodyBinary={\"introduction\":\"\\xD0\\x92\\xD0\\xBE \\xD0\\xB2\\xD1\\x80\\xD0\\xB5\\xD0\\xBC\\xD1\\x8F \\xD0\\xB8\\xD1\\x81\\xD1\\x81\\xD0\\xBB\\xD0\\xB5\\xD0\\xB4\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F \\xD0\\xBD\\xD0\\xB0 \\xD1\\x8D\\xD0\\xBA\\xD1\\x80\\xD0\\xB0\\xD0\\xBD\\xD0\\xB5 \\xD0\\xB1\\xD1\\x83\\xD0\\xB4\\xD1\\x83\\xD1\\x82 \\xD0\\xBF\\xD0\\xBE\\xD1\\x8F\\xD0\\xB2\\xD0\\xBB\\xD1\\x8F\\xD1\\x82\\xD1\\x8C\\xD1\\x81\\xD1\\x8F "
		"\\xD0\\xB7\\xD0\\xB0\\xD0\\xB4\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F \\xD0\\xB8 \\xD0\\xB2\\xD0\\xBE\\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD1\\x81\\xD1\\x8B.\\\\n\\\\n\\xD0\\x92 \\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD1\\x86\\xD0\\xB5\\xD1\\x81\\xD1\\x81\\xD0\\xB5 \\xD0\\xB2\\xD1\\x8B\\xD0\\xBF\\xD0\\xBE\\xD0\\xBB\\xD0\\xBD\\xD0\\xB5\\xD0\\xBD\\xD0\\xB8\\xD1\\x8F \\xD0\\xB7\\xD0\\xB0\\xD0\\xB4\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD0\\xB9 \\xD0\\xB2\\xD0\\xB0\\xD0\\xB6\\xD0\\xBD\\xD0\\xBE, "
		"\\xD1\\x87\\xD1\\x82\\xD0\\xBE\\xD0\\xB1\\xD1\\x8B \\xD0\\xB2\\xD1\\x8B \\xD1\\x80\\xD0\\xB0\\xD0\\xB7\\xD0\\xBC\\xD1\\x8B\\xD1\\x88\\xD0\\xBB\\xD1\\x8F\\xD0\\xBB\\xD0\\xB8 \\xD0\\xB2\\xD1\\x81\\xD0\\xBB\\xD1\\x83\\xD1\\x85 \\xD0\\xB8 \\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD0\\xB3\\xD0\\xBE\\xD0\\xB2\\xD0\\xB0\\xD1\\x80\\xD0\\xB8\\xD0\\xB2\\xD0\\xB0\\xD0\\xBB\\xD0\\xB8, \\xD0\\xBA\\xD0\\xB0\\xD0\\xBA\\xD0\\xB8\\xD0\\xB5 "
		"\\xD1\\x81\\xD0\\xBB\\xD0\\xBE\\xD0\\xB6\\xD0\\xBD\\xD0\\xBE\\xD1\\x81\\xD1\\x82\\xD0\\xB8 \\xD1\\x83 \\xD0\\xB2\\xD0\\xB0\\xD1\\x81 \\xD0\\xB2\\xD0\\xBE\\xD0\\xB7\\xD0\\xBD\\xD0\\xB8\\xD0\\xBA\\xD0\\xB0\\xD1\\x8E\\xD1\\x82 \\xD0\\xB8 \\xD0\\xBF\\xD0\\xBE\\xD1\\x87\\xD0\\xB5\\xD0\\xBC\\xD1\\x83. \",\"targetSite\":\"https://pornhub.com\",\"testTitle\":\"qwerty\",\"testType\":\"SITE\"}", 
		LAST);

	lr_end_transaction("opisanie",LR_AUTO);

	lr_think_time(11);

	lr_start_transaction("auditoria");

	/*Connection ID 1 received buffer WebSocketReceive3*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-customer-home/order?id=16960810\"}}", 
		"IsBinary=0", 
		LAST);

	lr_think_time(12);

	web_url("getMetrics", 
		"URL=https://prod.uxcrowd.ru/api/v2/customer/getMetrics?testType=SITE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getTemplates", 
		"URL=https://prod.uxcrowd.ru/api/v2/customer/getTemplates?testType=SITE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("updateOrderAudience", 
		"URL=https://prod.uxcrowd.ru/api/v2/customer/updateOrderAudience", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":16960810,\"testerType\":\"OUR\",\"participantGroupDTO\":[{\"ageRange\":{\"min\":49,\"max\":61},\"children\":\"ANY\",\"count\":50,\"educations\":[\"COMMON\",\"MIDDLE_FULL\",\"MIDDLE_SPEC\",\"HIGH_NOT_FULL\",\"HIGH\"],\"familyStatus\":\"ANY\",\"gender\":\"ANY\",\"groupName\":\"ololo\",\"incomeRange\":{\"min\":0,\"max\":55000},\"socialStatuses\":[\"STUDENT\",\"UNEMPLOYED\",\"HOUSEWIFE\",\"FREELANCER\",\"WORKER\",\"SPECIALIST\",\"CHIEF_DEPT\"],\"ordinal\":0}]}", 
		LAST);

	lr_end_transaction("auditoria",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("zadan");

	web_custom_request("updateOrderSteps", 
		"URL=https://prod.uxcrowd.ru/api/v2/customer/updateOrderSteps", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":16960810,\"steps\":[{\"question\":\"oooooo\",\"stepType\":\"TEXT\",\"orderNum\":0}],\"metrics\":[]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("calculatePrice", 
		"URL=https://prod.uxcrowd.ru/api/customer/calculatePrice?orderId=16960810", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", ENDITEM, 
		"Url=/assets/images/avatar-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", ENDITEM, 
		"Url=/assets/images/burger-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960810", ENDITEM, 
		LAST);

	lr_end_transaction("zadan",LR_AUTO);

	lr_think_time(5);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571834837821\",\"eventData\":{\"sendTime\":1571834837821,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-Rodv1TVLAS9Yt2qe1ey2LglcvH3V8aFJOPd8TMDrlnKSqv0zJ_HPTnnqXJvJUW3Vqc5xZJ-0aVMeo9xrvRneSxbjk2IJkDvr1omF\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive4*/

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-XSRF-TOKEN", 
		"3277a738-66ad-44bc-aed1-4633c34eb6e8");

	lr_think_time(4);

	web_url("paymentInitRequest_2", 
		"URL=https://prod.uxcrowd.ru/api/v2/public/paymentInitRequest?orderId=16960811", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/order?id=16960811", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}