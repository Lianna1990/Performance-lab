	long trans;
	long trans_child;
	double trans_time;
	long int status, s_time;
	int http_info_download, info_return_code;
    long duration_time;
    char buffer[1024];
    char buffer_child[1024];
	

vuser_init()
{
	web_set_sockets_option("SSL_VERSION", "2&3");
	

	return 0;
}
