Action1()
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
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/webflow.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/css/landing/uxcrowd.webflow.css", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/env.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.uploadfile.min.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/validation.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/FileSaver.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/sup_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/app_js/auth.interceptor.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/jquery.form.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/init.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/validation.rule.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/mediaelement-and-player.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/admin_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/app_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/customer_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/blog_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/home_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/moderator_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/new_tester_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/gulp/tester_js.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/library/require.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/path_controller.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/js/main_js/main_route.js", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/controller/controller_home/newMain.controller.js?bust=1571662863966", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/controller/controller_home/login.controller.js?bust=1571662863966", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/app.js?bust=1571662863966", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
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
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"2a836626-fe1c-488a-a012-70ad5727e8d3");

	web_url("headerGreenWhite.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t33.inf", 
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
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://prod.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=/controller/controller_customer/home.controller.js?bust=1571662863966", ENDITEM, 
		"Url=/controller/controller_customer/header.controller.js?bust=1571662863966", ENDITEM, 
		"Url=/controller/controller_customer/ordersList.controller.js?bust=1571662863966", ENDITEM, 
		"Url=/controller/controller_customer/ordersListHeader.controller.js?bust=1571662863966", ENDITEM, 
		LAST);

	web_add_cookie("dbl=e8a11400d4525fb1ecd9cc33217e7c5d; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("fco2r34=e8a11400d4525fb1ecd9cc33217e7c5d; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-id-fkbc3no8=d6ab28f1-491d-4d18-98e7-5fd15d8f4f26; DOMAIN=prod.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"2a836626-fe1c-488a-a012-70ad5727e8d3");

	web_url("modal-login.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t35.inf", 
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

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_submit_data("authentication", 
		"Action=https://prod.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=clientX3@test.com", ENDITEM, 
		"Name=password", "Value=654321", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"3f3a83f6-bbca-4fd1-bd1a-b98312651800");

	web_url("account", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=aWp2V2gzWU9MM093NUJsMVU1VEhlUDdYb2pvellLeDVFejVmcXhsZlZFNzd2Zk01MUVWMUZ0T1pYVkZDa3YxTS0tMndCQTNnUGJCZnNWMzBIbTJ5dUJMUT09--a116b666bbd799145fcbc05a6999bdd70a176171; DOMAIN=prod.uxcrowd.ru");

	web_url("ordersList.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_customer/ordersList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("waitingOrders", 
		"URL=https://prod.uxcrowd.ru/api/customer/waitingOrders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("hist-orders", 
		"URL=https://prod.uxcrowd.ru/api/customer/hist-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/insight.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/draft.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
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
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/info_icon.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/controller/controller_home/video.controller.js?bust=1571662863966", "Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		LAST);

	web_url("video.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("greenHeader.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/greenHeader.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/new-footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/arrows_left_right.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close_btn_white.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/social_sprite_34.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/arrow_check_btn.svg", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("relatedVideoIds", 
		"URL=https://prod.uxcrowd.ru/api/video/relatedVideoIds?videoId=cbd3a0ae-b96d-4809-871e-793443a9b63b", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tags", 
		"URL=https://prod.uxcrowd.ru/api/video/tags?videoId=cbd3a0ae-b96d-4809-871e-793443a9b63b", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t49.inf", 
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
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"videoId\":\"cbd3a0ae-b96d-4809-871e-793443a9b63b\"}", 
		EXTRARES, 
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

	lr_think_time(33);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571663037661\",\"eventData\":{\"sendTime\":1571663037661,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-L_IajdxXbuCEMUxycilQlfl0fhto_dnNXr0VJGCYon7Q6K00e0nkssbaT-YTNDzcyPac2cEUQ5fcBIO8GfrVXpYt-kyhb1HKTyRv\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive2*/

	return 0;
}