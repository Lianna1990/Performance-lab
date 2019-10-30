Action()
{
	char file;
	char filename;
	long FileVarriable;  
	char FileLocation[1024] = "C:\\Users\\student\\Desktop\\script1\\reg_client\\logins_clients.txt";
	
	web_set_max_html_param_len("2048");
	
	web_reg_save_param_ex(
		  "ParamName=token",
		  "LB=CSRF-TOKEN\=",
		  "RB=;",
		  "Ordinal=1",
		  SEARCH_FILTERS,
		  "Scope=Headers",
		  LAST);
	
	web_custom_request("get_token", 
		"URL=https://{host}/api/account/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		LAST);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t18.inf", 
		LAST);

	lr_start_transaction("register");
	
	web_add_header("X-XSRF-TOKEN", 
		"{token}");
	
	web_custom_request("register", 
		"URL=https://{host}/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"name\":\"name\",\"company\":\"company\",\"email\":\"client{param}@test.com\",\"telNumber\":\"+7 (999) 994 5885\",\"role\":\"ROLE_CUSTOMER\",\"tariffType\":\"PROJECT\"}",
		LAST);

	lr_save_string (lr_eval_string ("{param}"), "param_to_log");
  	lr_log_message ("client%s@test\.com", lr_eval_string ("{param_to_log}"));
  	
	FileVarriable = fopen (FileLocation,"a+");
    fprintf (FileVarriable, "client%s@test\.com\n", lr_eval_string ("{param_to_log}")); 
    fclose (FileVarriable);
			
	lr_end_transaction("register",LR_AUTO);

	return 0;
}