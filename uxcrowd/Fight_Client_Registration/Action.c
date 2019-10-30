char * generate(){	
	char alfabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char login[10]="";
	int i;
	strcpy(login, "");
	for (i=0; i<5; i++) {		
		login[i]=alfabet[rand()%26];
	}
	return login;
}

Action()
{
	long trans;
	double trans_time;

    long int status, s_time;
    
    int http_info_download, info_return_code;
    long duration_time;
    
    char buffer[1024];
	char file;
	char filename;
	long FileVarriable;  
	char FileLocation[1024] = "C:\\Users\\student\\Desktop\\script1\\reg_client\\logins_clients.txt";
	int randNumber; 
	
	randNumber = rand()%10000 + 1;
	lr_save_datetime("%d.%m.%Y", DATE_NOW - ONE_DAY*randNumber-10000, "randDate"); 

	lr_save_string(lr_eval_string(generate()), "lastname");
	lr_save_string(lr_eval_string(generate()), "firstname");
	lr_save_string(lr_eval_string(generate()), "patronymic");
	lr_save_string(lr_eval_string(generate()), "country");
	lr_save_string(lr_eval_string(generate()), "city");
	
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	web_set_max_html_param_len("2048");
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", 
	    LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t1.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	trans = lr_start_transaction_instance("Homepage", 0);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t2.inf", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("UC06_client_registration", 0);
	
	web_custom_request("register", 
		"URL=https://{host}/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"name\":\"name\",\"company\":\"company\",\"email\":\"client{username_reg}@test.com\",\"telNumber\":\"+7 (999) 999 9999\",\"role\":\"ROLE_CUSTOMER\",\"tariffType\":\"PROJECT\"}",
		LAST);

//  Тут запись в файл, пока убираю.
//	lr_save_string (lr_eval_string ("{username_reg}"), "param_to_log");
//  	lr_log_message ("client%s@test\.com", lr_eval_string ("{username_reg_to_log}"));
//  	
//	FileVarriable = fopen (FileLocation,"a+");
//    fprintf (FileVarriable, "client%s@test\.com\n", lr_eval_string ("{username_reg_to_log}")); 
//    fclose (FileVarriable);
			
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("Logout", 0);
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t5.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t6.inf", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("Login", 0);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t7.inf", 
		LAST);

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
		"URL=https://{host}/api/account/", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/waitingOrders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("account", 
		"URL=https://{host}/api/customer/hist-orders", 
		"Resource=0", 
		"RecContentType= text/plain", 
		"Referer=https://{host}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("UC07_fill_client_profile", 0);
	
	web_custom_request("profile_3", 
		"URL=https://{host}/api/customer/profile?id={user_ID}", 
		"Method=GET", 
		"Resource=0", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_eval_string("{\"id\":{user_ID},\"fio\":\"{lastname} {firstname} {patronymic}\",\"username\":\"{username}\",\"email\":\"{username}@test.com\",\"phone\":\"77777777777\",\"customerType\":\"FL\",\"inn\":\"{inn1}{inn2}\",\"lawAddress\":\"{country}\",\"kpp\":null,\"ogrn\":null,\"postAddress\":null,\"okpo\":null,\"bank\":null,\"bic\":null,\"account\":null,\"corrAccount\":null,\"document\":null,\"companyName\":\"test\",\"ogrnip\":null,\"snils\":\"{snils1}{snils2}\",\"passSeriesNum\":\"{pasport}\",\"passGet\":\"{city}\",\"emailNotification\":true,\"agree\":true}"), "request_body");

	web_custom_request("fill_profile",
		"URL=https://{host}/api/customer/profile",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={request_body}",
		LAST);

	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	memset(buffer, 0, sizeof(buffer));
	
	trans = lr_start_transaction_instance("Logout", 0);
	
	web_custom_request("logout", 
		"URL=https://{host}/api/logout", 
		"Method=POST", 
		"Resource=0", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_reg_save_param("Token",
	    "LB=XSRF-TOKEN=",
	    "RB=;", LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t16.inf", 
		LAST);
	
	web_add_auto_header("X-XSRF-TOKEN", 
		"{Token}");
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t17.inf", 
		LAST);
	
	http_info_download=web_get_int_property( HTTP_INFO_DOWNLOAD_SIZE );
	info_return_code=web_get_int_property( HTTP_INFO_RETURN_CODE);
	status= lr_get_trans_instance_status(trans);
	s_time = time(NULL);
	trans_time = lr_get_trans_instance_duration(trans);
	
	sprintf (buffer, "loadrunner,label=Homepage,responseCode=%d,success=%d responseTime=%lf,bytes=%d,timestamp=%u000000",info_return_code,status,trans_time,http_info_download,s_time);
	
	lr_output_message("%s",buffer);
	lr_save_string(buffer,"report");
	
	lr_end_transaction_instance(trans, LR_AUTO);
	
	web_custom_request("web_custom_request",
		"URL=http://localhost:8086/write?db=loadrunner",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={report}",
		LAST);		
	
	return 0;
}
