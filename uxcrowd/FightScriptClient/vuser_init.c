vuser_init()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_start_transaction("HomePage");

		web_url("HomePage",
		"URL=https://{host}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
		lr_end_transaction("HomePage", LR_AUTO);
		
	return 0;
}
