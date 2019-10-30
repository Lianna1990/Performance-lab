vuser_init()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	return 0;
}
