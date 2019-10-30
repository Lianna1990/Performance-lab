UC11_upload_results()
{
	lr_start_transaction("UC11_upload_results");
	
	lr_save_string(lr_paramarr_random("id_arr"), "ID_for_downlading_results");
	
	web_custom_request("api/v2/customer/orderReport",
	    "URL=https://{host}/api/v2/customer/orderReport?id={ID_for_downlading_results}", 
		"Method=GET", 
		"Referer=https://{host}/app-customer-home/list-orders",
		"Snapshot=t401.inf", 
		LAST);
		
	lr_end_transaction("UC11_upload_results",LR_AUTO);
	
	return 0;
}
