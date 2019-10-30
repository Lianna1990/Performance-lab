clearActivationTester()
{
	web_url("/activate", 
		"URL=https://{host}/activate?key={activateKeyTester}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/library/jquery.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/library/jquery.form.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/env.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/library/FileSaver.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/init.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/app_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/home_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/library/require.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		LAST);

	web_url("/assets/lang/ru.json", 
		"URL=https://{host}/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/controller/controller_home/activate.controller.js?bust=1571387817193", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/app.js?bust=1571387817193", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
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
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_home/new-footer.html", 
		"URL=https://{host}/tmpl/tmpl_home/new-footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

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

	web_url("/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/tmpl/tmpl_testers/tmpl_new_tester/welcome.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_new_tester/welcome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/activate?key={activateKeyTester}", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/js/home_js/youtube.js?_=1571387816949", "Referer=https://{host}/activate?key={activateKeyTester}", ENDITEM, 
		"Url=/assets/images/logo-final.png", "Referer=https://{host}/app-new-tester-home/welcome", ENDITEM, 
		"Url=/assets/images/16-9.png", "Referer=https://{host}/app-new-tester-home/welcome", ENDITEM, 
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

	
	return 0;
}
