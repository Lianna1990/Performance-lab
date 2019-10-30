clearActivationCustom()
{
	web_url("/activate", 
		"URL=https://{host}/activate?key={activationKeyCustom}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t894.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/env.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/library/jquery.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/library/jquery.form.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/library/FileSaver.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/init.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/app_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/home_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/library/require.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		LAST);

	web_url("/assets/lang/ru.json", 
		"URL=https://{host}/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t895.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/controller/controller_home/activate.controller.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=/app.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
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

	web_url("/tmpl/tmpl_home/activate.html", 
		"URL=https://{host}/tmpl/tmpl_home/activate.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t896.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_home/new-footer.html", 
		"URL=https://{host}/tmpl/tmpl_home/new-footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t897.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/youtube.svg", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		LAST);

	web_url("/api/activate_exist", 
		"URL=https://{host}/api/activate_exist?key={activationKeyCustom}", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t898.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ulogin-stats.ru/visit/", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=https://vk.com/rtrg?p=VK-RTRG-208363-3NOqH", "Referer=https://sale.aliexpress.com/ru/__pc/September_fashion_new_lianmeng.htm?tmLog=default_4625&aff_platform=promotion&cpt=1571393015748&sk=loa6aa3A&aff_trace_key=908a83312dd34ce8808cd4fdf725ab79-1571393015748-05349-loa6aa3A&terminal_id=4e132a775f8b4b4abf215c6f792cd4a6", ENDITEM, 
		LAST);

	lr_start_transaction("set_password");
	
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
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t899.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"key\":\"{activationKeyCustom}\",\"password\":\"{password}\"}", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=XSRF-TOKEN",
		"LB=XSRF-TOKEN=",
		"RB=;",
		SEARCH_FILTERS,
		"Scope=HEADERS",
		"HeaderNames=Set-Cookie",
		LAST);
	
	web_submit_data("/api/authentication", 
		"Action=https://{host}/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t900.inf", 
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
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t901.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../controller/controller_customer/home.controller.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=../controller/controller_customer/header.controller.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=../controller/controller_customer/ordersListHeader.controller.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		"Url=../controller/controller_customer/ordersList.controller.js?bust=1571393013546", "Referer=https://{host}/activate?key={activationKeyCustom}", ENDITEM, 
		LAST);

	web_url("/tmpl/tmpl_customer/main_template.html", 
		"URL=https://{host}/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t902.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_customer/home.html", 
		"URL=https://{host}/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t903.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_customer/header.html", 
		"URL=https://{host}/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t904.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_customer/ordersList.html", 
		"URL=https://{host}/tmpl/tmpl_customer/ordersList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t905.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://{host}/app-customer-home/list-orders", ENDITEM, 
		LAST);

	web_url("/api/customer/orders", 
		"URL=https://{host}/api/customer/orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t906.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/api/customer/hist-orders", 
		"URL=https://{host}/api/customer/hist-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t907.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("/api/customer/waitingOrders", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activationKeyCustom}", 
		"Snapshot=t908.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/insight.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/draft.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list-active.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/close.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout-hover.svg", "Referer=https://{host}/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	lr_end_transaction("set password", LR_AUTO);

	return 0;
}