Action1()
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

	web_url("activate", 
		"URL=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/env.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/library/jquery.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/library/jquery.form.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/library/FileSaver.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/init.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/app_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/home_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/library/require.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
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
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ulogin-stats.ru/visit/", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/controller/controller_home/activate.controller.js?bust=1571906636798", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=/app.js?bust=1571906636798", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"76ff0695-1d69-4794-a270-47a99facce62");

	web_url("activate.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/activate.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_home/new-footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("activate_exist", 
		"URL=https://prod.uxcrowd.ru/api/activate_exist?key=41321040590282137284", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/css/svg/youtube.svg", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		LAST);

	web_add_cookie("dbl=aacc30ec1e4ba6fc895ee20a496916cd; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("fco2r34=aacc30ec1e4ba6fc895ee20a496916cd; DOMAIN=prod.uxcrowd.ru");

	web_add_auto_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("activate_2", 
		"URL=https://prod.uxcrowd.ru/api/activate", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"key\":\"41321040590282137284\",\"password\":\"654321\"}", 
		LAST);

	web_submit_data("authentication", 
		"Action=https://prod.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=test1011", ENDITEM, 
		"Name=password", "Value=654321", ENDITEM, 
		"Name=remember-me", "Value=false", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("account", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571906636798", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571906636798", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=../app.js?bust=1571906636798", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		LAST);

	web_url("home.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/welcome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/js/home_js/youtube.js?_=1571906636664", "Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", ENDITEM, 
		"Url=https://vk.com/rtrg?p=VK-RTRG-208363-3NOqH", "Referer=https://sale.aliexpress.com/ru/__pc/September_fashion_new_lianmeng.htm?tmLog=default_4625&aff_platform=promotion&cpt=1571906640070&sk=NZWLh5na&aff_trace_key=7e81794d64ae404ba64d0832f8d19f8a-1571906640070-00166-NZWLh5na&terminal_id=026135adf5704e518edfa3d3733acdfe", ENDITEM, 
		LAST);

	web_add_cookie("newTesterState=welcome; DOMAIN=prod.uxcrowd.ru");

	web_url("has-completed-video", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_2", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/activate?key=41321040590282137284", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/test-stand.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		"Url=/assets/images/logo-final.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		"Url=/assets/images/16-9.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		LAST);

	web_url("instruction_step_1.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_1.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("newTesterState=; DOMAIN=prod.uxcrowd.ru");

	web_url("has-completed-video_3", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/google-chrome-1.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		"Url=/assets/images/yandex.browser.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		LAST);

	web_url("instruction_step_2.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_2.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_4", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/download-arr.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction2", ENDITEM, 
		LAST);

	web_url("instruction_step_3.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_3.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction2", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/task_moving.gif", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", ENDITEM, 
		"Url=/assets/images/ezgif-1-0f931c46a0.gif", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", ENDITEM, 
		LAST);

	web_url("has-completed-video_5", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction2", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../v2/plugin/getLastVersion?pluginType=WEB&environmentType=DO_PROD", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("instruction3", 
		"URL=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571906673560", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571906673560", ENDITEM, 
		"Url=../app.js?bust=1571906673560", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("account_2", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("instruction_step_3.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_3.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_6", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("create", 
		"URL=https://prod.uxcrowd.ru/api/stats/create", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":\"4\",\"screenName\":\"START_PLUGIN\",\"testerId\":493253221}", 
		LAST);

	web_url("has-completed-video_7", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1478294464.1571211453; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("_ym_d=1571211453; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("_ym_uid=1571211453779728618; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("_ga=GA1.2.1566072516.1571211453; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("_fbp=fb.1.1571211453213.1992205076; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("_hjid=af551394-e1bf-4a9c-a802-a34127cb6932; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("supportOnlineTalkID=NQtz7VT3tBWegZp7HJtH7uKtsdpFCABR; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("mp_7e8c1704afe136d673068a7cf50876d7_mixpanel=%7B%22distinct_id%22%3A%20%2216dd3802179263-0d3fe0e95c886c-b363e65-1fa400-16dd380217ab9b%22%2C%22%24device_id%22%3A%20%2216dd3802179263-0d3fe0e95c886c-b363e65-1fa400-16dd380217ab9b%22%2C%22%24search_engine%22%3A%20%22google%22%2C%22%24initial_referrer%22%3A%20%22https%3A%2F%2Fwww.google.com%2F%22%2C%22%24initial_referring_domain%22%3A%20%22www.google.com%22%7D; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("s_l_p=qeyRO8VpGnitxcwBhcf5O2ZxS1S0dZZl; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("dbl=067bcf8ea81a05fc78bfa9bda30ef4d5; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("fco2r34=067bcf8ea81a05fc78bfa9bda30ef4d5; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-id-fkbc3no8=285e199c-750a-41f4-8079-bd580c8fdef6; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("userId=493253208; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=Y2xOQyt0Y3lqcUZYR21MM0Q4RnJLVVZJZGpuZWV5RXh4NkpxbS9Ic3FWeldnS1dwVHpKSjlESU0xTlYxYjlIbC0tTldWZFkvYWtoSE5wdXdtUWFSMnVzdz09--c8c4839797826ed0ec239db79ca05101885c8e5d; DOMAIN=prod.uxcrowd.ru");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("account_3", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-new-tester-home/instruction3\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("XSRF-TOKEN=ce9182e4-614f-4c3d-b58b-d22c8c8185b5; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("remember-me=SHNnVjlIZmRMMUV6ZHNHNnJRbGxMUSUzRCUzRDpZVkxqSUw3SElXdUpRMFhzYzFXVHVRJTNEJTNE; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("JSESSIONID=7B5B497D1FD9E83EE4F06A9EB4CA59BB; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("CSRF-TOKEN=ce9182e4-614f-4c3d-b58b-d22c8c8185b5; DOMAIN=prod.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=N3hjNUNUeTg0Qkl0eFBaMzg1dXlycHZSU3A3VzFjcWF2dUJqV1JDTE1HTExJRjNweWR3eFM1RUJUQi9rZUs4Mi0tRCtvOXlWK2dXZjlKaVp3cUt6R2hGQT09--6f1b641977d18c466ee6c3c532f2fb2e2d30936a; DOMAIN=prod.uxcrowd.ru");

	web_url("order-info", 
		"URL=https://prod.uxcrowd.ru/api/tester/order-info?id=4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/fonts/Open%20Sans/cJZKeOuBrn4kERxqtaUH3ZBw1xU1rKptJj_0jans920.woff2", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/fonts/Open%20Sans/RjgO7rYTmqiVp7vzi-Q5UYX0hVgzZQUfRDuZrPvH3D8.woff2", "Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://dfhbnhciflaelghihmdfldmlpfbiobgc");

	web_add_auto_header("X-XSRF-TOKEN", 
		"c963bba4-74eb-447c-ae14-16a211b175d0");

	web_custom_request("update", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1490,\"screenName\":\"SCREEN_CAPTURE\"}", 
		LAST);

	web_custom_request("create-task", 
		"URL=https://prod.uxcrowd.ru/api/tester/create-task?orderId=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"archName\":\"x86_64\",\"numOfProcessors\":4,\"os\":\"Windows NT 10.0  Win64\",\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\",\"browserVersion\":\"Chrome 77.0.3865.120\",\"screenResolution\":\"1920x1080\",\"geoLocation\":null}", 
		LAST);

	web_custom_request("update_2", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1490,\"screenName\":\"FINAL_INSTRUCTION\"}", 
		LAST);

	web_add_cookie("remixlang=0; DOMAIN=vk.com");

	web_custom_request("update_3", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1490,\"screenName\":\"START_PLUGIN\"}", 
		EXTRARES, 
		"Url=https://vk.com/rtrg?p=VK-RTRG-208363-3NOqH", "Referer=https://best.aliexpress.com/?lan=en", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571906717031\",\"eventData\":{\"sendTime\":1571906717031,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-8W8_qCXMuN0HBbI287TsnN-YksNfKPfUXv2a2_HrJxVFBtpSsZ7Vz08CI_aoyGEpp8Qp4eU-X1UY102KSaQ49grZQAP8VAwsRJVO\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive1*/

	lr_think_time(7);

	web_custom_request("update_4", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1490,\"screenName\":\"COMPLETE_TEST\"}", 
		LAST);

	web_submit_data("video-upload-app", 
		"Action=https://prod.uxcrowd.ru/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=task-id", "Value=49955762", ENDITEM, 
		"Name=video-file", "Value=blob", "File=Yes", ENDITEM, 
		"Name=name", "Value=blob.webm", ENDITEM, 
		"Name=tag-dto", "Value=blob", "File=Yes", ENDITEM, 
		LAST);

	web_custom_request("update_5", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1490,\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"49955762\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("instruction3_2", 
		"URL=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571906735496", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571906735496", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=../app.js?bust=1571906735496", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("account_4", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_3", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_3", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_url("instruction_step_3.html_3", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_3.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_8", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_9", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive2*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-new-tester-home/instruction3\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=V3FBSUp0eXJXOXVGbndLMktLMzM2c1RpK1BVby9YZk05SmxEYUM2K21Ja21sVjRnWjZDbitQMVFsRHdoRW5Hby0tOThYTTByd1phZmtsR1IyeHpLYkpGdz09--08b6de21fa74e2cb945dadbcd9060c2174ac9e11; DOMAIN=prod.uxcrowd.ru");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("intercom-session-fkbc3no8=SVBmVXlTM1hpK05HL3J5VFRqQjRjWnJCTFpWSG82M0dZdXJFM0ozL0d6NzhRb0oraW5mV0krbUVXdUhRdW5YQS0tSGd1QkY4WjF5TEpMTTFIc2lySWNUQT09--6dd53ab2dab077e1ee37c6ac9524d2043dcb960c; DOMAIN=prod.uxcrowd.ru");

	lr_think_time(5);

	web_url("instruction3_3", 
		"URL=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571906743648", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571906743648", ENDITEM, 
		"Url=../app.js?bust=1571906743648", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=../assets/images/ezgif-1-0f931c46a0.gif", ENDITEM, 
		"Url=../assets/images/task_moving.gif", ENDITEM, 
		"Url=../api/v2/plugin/getLastVersion?pluginType=WEB&environmentType=DO_PROD", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("account_5", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_4", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_4", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_url("instruction_step_3.html_4", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_3.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_10", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=dTU0OUY0Z25UeW1CbmJxMWJNckRwdENwT1huTlN4TkhkTzZZMU96Z2lqMFlabkFjTXU5OU9vaFhSdHRwL1JFdi0tdGFjeXJiRjVRS1F2NFpEMVdRdG0yQT09--4b0aa72700d5f43805ab370d8b8028f0cea37f4f; DOMAIN=prod.uxcrowd.ru");

	web_url("has-completed-video_11", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571906743648", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571906743648", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		"Url=/app.js?bust=1571906743648", "Referer=https://prod.uxcrowd.ru/", ENDITEM, 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive3*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-new-tester-home/instruction3\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_url("headerGreenWhite.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_5", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=cGN2ZFRJZkRnYVdMU3ovYmJQSzZ4YXNGcFVwY3g3ZUk2akFLYjZkbVBYS2RYaWRueVBBNzBoMUQ0TEJMRjlkby0tMWNiQTJlUThINkFTWnZ6K0JtUFQvUT09--f578b97c3d044e80f109a19dd720299978983867; DOMAIN=prod.uxcrowd.ru");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("prod.uxcrowd.ru", 
		"URL=https://prod.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://prod.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/js/home_js/youtube.js?_=1571906743611", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("welcome.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/welcome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/16-9.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_url("has-completed-video_12", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("has-completed-video_13", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/burger-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-green-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		"Url=/assets/images/avatar-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", ENDITEM, 
		LAST);

	web_url("instruction_step_1.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_1.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/google-chrome-1.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		"Url=/assets/images/yandex.browser.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		LAST);

	web_url("has-completed-video_14", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/welcome", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/avatar-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		"Url=/assets/images/burger-white-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", ENDITEM, 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=V0RoSnF3WFMwVVg1OXdxczh4S2V5d3cwSW52THRYd0orRlJDemJGMGl4bUU4RGx0Z1FLVGFPV2pKVW5CRkJJdy0tMExBK29yRG45WENKZ0QwYzNFVUNZdz09--5a28261d87219e2f30dcd5614b30a25212416235; DOMAIN=prod.uxcrowd.ru");

	web_url("instruction_step_2.html_2", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_2.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/images/download-arr.png", "Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction2", ENDITEM, 
		LAST);

	web_url("has-completed-video_15", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction1", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=TlhLWHRkSkZBSFNwU0RRL1hxek9KWkJ3RHhJdXRUUkdsamtLb3h0V0JVZ0l6NnN1Sm9rMDJZc2lQbXpmeUtrNS0tOG9jSE9ZSTAyTDNaYWcrb2VNQ0dFdz09--084c5368cfb35db0cbfa71e2ae14e14c19ddaff7; DOMAIN=prod.uxcrowd.ru");

	web_url("has-completed-video_16", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction2", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	web_custom_request("create_2", 
		"URL=https://prod.uxcrowd.ru/api/stats/create", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":\"4\",\"screenName\":\"START_PLUGIN\",\"testerId\":493253221}", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("account_6", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_url("order-info_2", 
		"URL=https://prod.uxcrowd.ru/api/tester/order-info?id=4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://dfhbnhciflaelghihmdfldmlpfbiobgc");

	web_add_auto_header("X-XSRF-TOKEN", 
		"c963bba4-74eb-447c-ae14-16a211b175d0");

	web_custom_request("update_6", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1491,\"screenName\":\"SCREEN_CAPTURE\"}", 
		LAST);

	web_custom_request("create-task_2", 
		"URL=https://prod.uxcrowd.ru/api/tester/create-task?orderId=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"archName\":\"x86_64\",\"numOfProcessors\":4,\"os\":\"Windows NT 10.0  Win64\",\"processorModel\":\"Intel(R) Core(TM) i3-8100 CPU @ 3.60GHz\",\"browserVersion\":\"Chrome 77.0.3865.120\",\"screenResolution\":\"1920x1080\",\"geoLocation\":null}", 
		LAST);

	web_custom_request("update_7", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1491,\"screenName\":\"FINAL_INSTRUCTION\"}", 
		EXTRARES, 
		"Url=https://vk.com/rtrg?p=VK-RTRG-208363-3NOqH", "Referer=https://best.aliexpress.com/?lan=en", ENDITEM, 
		LAST);

	web_custom_request("update_8", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1491,\"screenName\":\"START_PLUGIN\"}", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571906786033\",\"eventData\":{\"sendTime\":1571906786033,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-zc7jc51umQ7oX625jMhZGbrbno4sWl2sNnszK6jFOzjOQhadKCe3Ubmdz-eUGLMT9yM-yew6mPo9OhR3MnQ5KqlxbIVdpJf0nAsI\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive4*/

	web_custom_request("update_9", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1491,\"screenName\":\"COMPLETE_TEST\"}", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive5*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-new-tester-home/instruction3\"}}", 
		"IsBinary=0", 
		LAST);

	web_submit_data("video-upload-app_2", 
		"Action=https://prod.uxcrowd.ru/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=task-id", "Value=49955764", ENDITEM, 
		"Name=video-file", "Value=blob", "File=Yes", ENDITEM, 
		"Name=name", "Value=blob.webm", ENDITEM, 
		"Name=tag-dto", "Value=blob", "File=Yes", ENDITEM, 
		LAST);

	web_custom_request("update_10", 
		"URL=https://prod.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":\"4\",\"id\":1491,\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"49955764\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("instruction3_4", 
		"URL=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/header.controller.js?bust=1571906809648", ENDITEM, 
		"Url=../controller/controllers_testers/controller_new_tester/home.controller.js?bust=1571906809648", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=../app.js?bust=1571906809648", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"ce9182e4-614f-4c3d-b58b-d22c8c8185b5");

	web_url("account_7", 
		"URL=https://prod.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_6", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_5", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("instruction_step_3.html_5", 
		"URL=https://prod.uxcrowd.ru/tmpl/tmpl_testers/tmpl_new_tester/instruction_step_3.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_17", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_url("has-completed-video_18", 
		"URL=https://prod.uxcrowd.ru/api/tester/has-completed-video", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://prod.uxcrowd.ru/app-new-tester-home/instruction3", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 3 received buffer WebSocketReceive6*/

	/*Connection ID 3 received buffer WebSocketReceive7*/

	web_websocket_send("ID=3", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-new-tester-home/instruction3\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=3", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	return 0;
}