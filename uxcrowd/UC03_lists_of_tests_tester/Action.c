Action()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("{host}", 
		"URL=https://{host}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_save_param("Token",
    "LB=XSRF-TOKEN=",
    "RB=;", LAST);
	
	web_url("account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");

	web_url("headerGreenWhite.html", 
		"URL=https://{host}/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://{host}/tmpl/tmpl_landing_new/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://{host}/tmpl/tmpl_landing_new/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("{host}_2", 
		"URL=https://{host}/", 
		"Resource=0", 
		"Referer=https://{host}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);


	lr_start_transaction("Login");


	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");

	web_url("modal-login.html", 
		"URL=https://{host}/tmpl/tmpl_home/modal-login.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://{host}");


	web_reg_save_param("Token_new",
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
	
	
	web_submit_data("authentication", 
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
		"{Token_new}");
	
	web_reg_save_param("user_ID",
    "LB=\"id\":",
    "RB=,",
	LAST);
	
	web_url("account", 
		"URL=https://{host}/api/account", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("profile", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_tester/main_template.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_tester/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_tester/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("new-tasks.html", 
		"URL=https://{host}/tmpl/tmpl_testers/tmpl_tester/new-tasks.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("rating", 
		"URL=https://{host}/api/tester/rating?testerId={user_ID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML",
		LAST);		

	web_url("profile_2", 
		"URL=https://{host}/api/v2/tester/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks", 
		"URL=https://{host}/api/tester/new-tasks?isMobile=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	  
	lr_end_transaction("Login",LR_AUTO);
	
	return 0;
}
