watch()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("prod.uxcrowd.ru", 
		"URL=http://prod.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/webflow.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/env.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/uxcrowd.webflow.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.uploadfile.min.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/validation.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.form.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/FileSaver.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/sup_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/init.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/mediaelement-and-player.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/validation.rule.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/app_js/auth.interceptor.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/app_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/admin_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/customer_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/blog_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/home_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/moderator_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/new_tester_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/tester_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/require.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/path_controller.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/main_route.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/controller/controller_home/newMain.controller.js?bust=1571657303919", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/controller/controller_home/login.controller.js?bust=1571657303919", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/app.js?bust=1571657303919", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://prod.uxcrowd.ru/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"79f282f3-dfbe-4cb8-abfb-1b90bdc2d9b7");

	web_url("headerGreenWhite.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("ux-logo-new-white.svg", 
		"URL=https://prod.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://prod.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=/controller/controller_customer/home.controller.js?bust=1571657303919", ENDITEM, 
		"Url=/controller/controller_customer/header.controller.js?bust=1571657303919", ENDITEM, 
		"Url=/controller/controller_customer/ordersList.controller.js?bust=1571657303919", ENDITEM, 
		"Url=/controller/controller_customer/ordersListHeader.controller.js?bust=1571657303919", ENDITEM, 
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

	web_add_cookie("dbl=309caaa6c75684b41497add26a1b5dff; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("fco2r34=309caaa6c75684b41497add26a1b5dff; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-id-fkbc3no8=974d2c8d-cd75-461f-a915-fd7b729034d1; DOMAIN=prod.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"79f282f3-dfbe-4cb8-abfb-1b90bdc2d9b7");

	lr_think_time(7);

	web_url("modal-login.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	lr_think_time(6);

	web_submit_data("authentication", 
		"Action=https://prod.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=clientX3@test.com", ENDITEM, 
		"Name=password", "Value=654321", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"849a0a4c-0d3e-4f2f-ba9a-766b0304c677");

	web_url("account", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ordersList.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/ordersList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("waitingOrders", 
		"URL=https://prod.uxcrowd.ru/api/customer/waitingOrders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("hist-orders", 
		"URL=https://prod.uxcrowd.ru/api/customer/hist-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/insight.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/draft.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list-active.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=UXZEYVE5SjdLaGkyOHZiMEhoa1Vyc1VEZlZjVFhyZHpyUHJqTHNGWHRDYUVxTmluRWhCL3cyNHZ0UURsdzBvUC0tcFRUTGgyV0libDN1djQ2OUluSHVsQT09--0b38f23fcac29a73b1dfca7394c97f1e931ee237; DOMAIN=prod.uxcrowd.ru");

	web_url("orders", 
		"URL=https://prod.uxcrowd.ru/api/customer/orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/uxcrowd-logo-green-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/avatar-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/burger-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/css/svg/info_icon.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/controller/controller_home/video.controller.js?bust=1571657303919", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
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

	lr_start_transaction("watch");

	web_url("video.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("greenHeader.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/greenHeader.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=em0rcVlwSmxzajJXaTJRSDlnLzl0NzJKUER5VWJtcUlMSzBkQUp6WGRQdy9qMWhjcXFKREczS0xrckducm1SRC0tSEgyTnkxUGVDbjNXNC9wbnNxZE96dz09--b4a6a9a4369dfc876667250bb56aeeecd3e2778d; DOMAIN=prod.uxcrowd.ru");

	web_url("new-footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/new-footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/arrows_left_right.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/social_sprite_34.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close_btn_white.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/arrow_check_btn.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("relatedVideoIds", 
		"URL=https://prod.uxcrowd.ru/api/video/relatedVideoIds?videoId=cbd3a0ae-b96d-4809-871e-793443a9b63b", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tags", 
		"URL=https://prod.uxcrowd.ru/api/video/tags?videoId=cbd3a0ae-b96d-4809-871e-793443a9b63b", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("fileName", 
		"URL=https://prod.uxcrowd.ru/api/video/fileName", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"videoId\":\"cbd3a0ae-b96d-4809-871e-793443a9b63b\"}", 
		EXTRARES, 
		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/video/cbd3a0ae-b96d-4809-871e-793443a9b63b", ENDITEM, 
		"Url=/assets/images/avatar-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/video/cbd3a0ae-b96d-4809-871e-793443a9b63b", ENDITEM, 
		"Url=/assets/images/burger-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/video/cbd3a0ae-b96d-4809-871e-793443a9b63b", ENDITEM, 
		"Url=/assets/fonts/Open%20Sans/RjgO7rYTmqiVp7vzi-Q5UYX0hVgzZQUfRDuZrPvH3D8.woff2", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/big_play_transparent.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/uxc-controls.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/big_play_hovered.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/videos/2019-10-21-11-06-30-49955707-blob.mp4", "Referer=https://prod.uxcrowd.ru/video/cbd3a0ae-b96d-4809-871e-793443a9b63b", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_stream_open("ID=1", "URL=https://prod.uxcrowd.ru/videos/2019-10-21-11-06-30-49955707-blob.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_close("ID=1", LAST);

	lr_think_time(15);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571657393445\",\"eventData\":{\"sendTime\":1571657393445,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-Z2uX4TeSen5tFX0mTcMZoR35mYCEueMxWrKrqEp6e8j8JIMfWigynFzwhSqIeOwOcYp_4RoGb1nOjEN-miQksaU_GpeSwp4s5Dou\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive2*/

	lr_end_transaction("watch",LR_AUTO);

	return 0;
}