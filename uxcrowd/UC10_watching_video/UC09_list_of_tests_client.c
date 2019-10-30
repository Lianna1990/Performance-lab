UC09_list_of_tests_client()
{
	lr_start_transaction("Homepage");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("/", 
		"URL=https://{host}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("XSRF-TOKEN",
    	"LB=XSRF-TOKEN=",
    	"RB=;", 
    	LAST);
	
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
	
	lr_end_transaction("Homepage", LR_AUTO);

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
	
	web_url("/tmpl/tmpl_customer/ordersList.html", 
		"URL=https://{host}/tmpl/tmpl_customer/ordersList.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{host}/", 
		"Snapshot=t13.inf", 
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
		
	web_reg_save_param_json(
		"ParamName=video_id_arr",
		"QueryString=$[*]..video.id",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
	
	web_url("/api/customer/orders", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_save_string(lr_paramarr_random("video_id_arr"),"video_id");
	
	lr_end_transaction("Login",LR_AUTO);
	
	return 0;
}
