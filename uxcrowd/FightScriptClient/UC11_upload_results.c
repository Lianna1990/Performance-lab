UC11_upload_results()
{
	lr_start_transaction("UC11_upload_results");
	
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
	
	
//	web_submit_data("authentication", 
//		"Action=https://{host}/api/authentication", 
//		"Method=POST", 
//		"Referer=https://{host}/", 
//		"Snapshot=t8.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=username", "Value={username}", ENDITEM, 
//		"Name=password", "Value={password}", ENDITEM, 
//		"Name=remember-me", "Value=undefined", ENDITEM, 
//		"Name=submit", "Value=Login", ENDITEM, 
//		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token_new}");
	
	web_reg_save_param("user_ID",
    "LB=\"id\":",
    "RB=,",
	LAST);

//	
//	web_url("account", 
//		"URL=https://{host}/api/account", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://{host}/", 
//		"Snapshot=t9.inf", 
//		"Mode=HTML", 
//		LAST);
//	
		
	web_url("profile", 
		"URL=https://{host}/api/v2/customer/profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

//	web_url("main_template.html", 
//		"URL=https://{host}/tmpl/tmpl_customers/tmpl_customer/main_template.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{host}/", 
//		"Snapshot=t11.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("home.html_2", 
//		"URL=https://{host}/tmpl/tmpl_customers/tmpl_customer/home.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{host}/", 
//		"Snapshot=t12.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("header.html", 
//		"URL=https://{host}/tmpl/tmpl_customers/tmpl_customer/header.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{host}/", 
//		"Snapshot=t13.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	web_url("ordersList.html", 
//		"URL=https://{host}/tmpl/tmpl_customer/ordersList.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://{host}/", 
//		"Snapshot=t13.inf", 
//		"Mode=HTML", 
//		LAST);
		
	web_url("hist-orders", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
		
	web_url("waitingOrders", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("Pull_of_ID",
	        "LB=\"id\":",
	        "RB=,",
	        "Ord=ALL",
	        LAST);
		
	web_url("orders", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("Pull_of_ID"), "ID_for_downlading_results");
			
	lr_end_transaction("Login",LR_AUTO);
	
	lr_start_transaction("save");
	
	web_url("orders", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../v2/customer/orderReport?id={ID_for_downlading_results}", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		ENDITEM,
		LAST);
		
	lr_end_transaction("save",LR_AUTO);
	lr_end_transaction("UC11_upload_results",LR_AUTO);


	return 0;
}
