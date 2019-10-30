Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("test.uxcrowd.ru", 
		"URL=https://test.uxcrowd.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571394005315", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571394005315", ENDITEM, 
		"Url=/app.js?bust=1571394005315", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://test.uxcrowd.ru/assets/lang/ru.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"e4820a03-99a6-4940-a66d-618e5821f9ce");

	web_url("headerGreenWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_image("ux-logo-new-white.svg", 
		"Src=../../assets/images/ux-logo-new-white.svg", 
		"Snapshot=t15.inf", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://test.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=/controller/controller_customer/home.controller.js?bust=1571394005315", ENDITEM, 
		"Url=/controller/controller_customer/header.controller.js?bust=1571394005315", ENDITEM, 
		"Url=/controller/controller_customer/ordersList.controller.js?bust=1571394005315", ENDITEM, 
		"Url=/controller/controller_customer/ordersListHeader.controller.js?bust=1571394005315", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"e4820a03-99a6-4940-a66d-618e5821f9ce");

	web_url("modal-login.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("dbl=5e511b356828877b061da098ba7cb22a; DOMAIN=test.uxcrowd.ru");

	web_add_cookie("fco2r34=5e511b356828877b061da098ba7cb22a; DOMAIN=test.uxcrowd.ru");

	web_add_header("Origin", 
		"https://test.uxcrowd.ru");

	web_submit_data("authentication", 
		"Action=https://test.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=lis", ENDITEM, 
		"Name=password", "Value=654321", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"8779a06b-f663-48fb-be24-8e04c2e6b96d");

	web_url("account", 
		"URL=https://test.uxcrowd.ru/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ordersList.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_customer/ordersList.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/images/test-stand.png", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("hist-orders", 
		"URL=https://test.uxcrowd.ru/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=62f208cb-d691-44bb-b03a-4e7282127294; DOMAIN=test.uxcrowd.ru");

	web_url("waitingOrders", 
		"URL=https://test.uxcrowd.ru/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/insight.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/draft.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list-active.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close.svg", "Referer=https://test.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_add_cookie("intercom-session-fkbc3no8=SmxXNzB2eGZKblFXMHRQMFN4S3c2ZWVmQ1U2T0tKeU5NTG5peWRCTEJQWCt2RnhHV3NxVXN6aTYvU2llWGRaNC0tOWFxbVovYVFKTkJBZVp6OC9pN0tVZz09--68b625fa762224926bb23e0a645cefe9eedd4f93; DOMAIN=test.uxcrowd.ru");

	web_url("orders", 
		"URL=https://test.uxcrowd.ru/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/uxcrowd-logo-green-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/avatar-gray-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/burger-gray-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=../v2/customer/orderReport?id=59588473", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/avatar-white-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		"Url=/assets/images/burger-white-mobile.svg", "Referer=https://test.uxcrowd.ru/app-customer-home/list-orders", ENDITEM, 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://test.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	lr_start_transaction("save");

	lr_end_transaction("save",LR_AUTO);

	return 0;
}