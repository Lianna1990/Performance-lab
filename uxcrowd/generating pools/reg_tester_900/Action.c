Action()
{
	char file;
	char filename;
	long FileVarriable;  
	char FileLocation[1024] = "C:\\Users\\student\\Desktop\\script1\\reg_tester\\logins_testers.txt";
	
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
		"Snapshot=t1.inf", 
		LAST);
	
	web_custom_request("main", 
		"URL=https://{host}/", 
		"Method=GET", 
		"Resource=0", 
		"Snapshot=t2.inf", 
		LAST);
	
	web_add_header("X-XSRF-TOKEN", 
		"{token}");
	
	lr_start_transaction("api/register");
	
	web_custom_request("register", 
		"URL=https://{host}/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://{host}", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"email\":\"test{param}@test.com\",\"role\":\"ROLE_NEW_TESTER\",\"tariffType\":null}", 
		LAST);

	lr_save_string (lr_eval_string ("{param}"), "param_to_log");
  	lr_log_message ("test%s@test\.com", lr_eval_string ("{param_to_log}"));
	
  	FileVarriable = fopen (FileLocation,"a+");
    fprintf (FileVarriable, "test%s@test\.com\n", lr_eval_string ("{param_to_log}")); 
    fclose (FileVarriable);
  	
	lr_end_transaction("api/register",LR_AUTO);

	return 0;
}