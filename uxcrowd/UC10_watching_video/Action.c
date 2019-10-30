Action()
{
	lr_start_transaction("UC10_watching_video");

	web_url("/api/video/relatedVideoIds", 
		"URL=https://{host}/api/video/relatedVideoIds?videoId={video_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/api/video/tags", 
		"URL=https://{host}/api/video/tags?videoId={video_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_json(
		"ParamName=fileName",
		"QueryString=$.fileName",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("/api/video/fileName", 
		"URL=https://{host}/api/video/fileName", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{host}/app-customer-home/list-orders", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"videoId\":\"{video_id}\"}", 
		LAST);

	lr_save_param_regexp (
		lr_eval_string("{fileName}"),
		strlen(lr_eval_string("{fileName}")),
               "RegExp=(.*).webm",
               "ResultParam=clearFileName",
               LAST);

	web_custom_request("/videos/{clearFileName}.mp4",
	    "URL=https://{host}/videos/{clearFileName}.mp4", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0",   
		"Snapshot=t23.inf", 
		LAST);

	lr_end_transaction("UC10_watching_video",LR_AUTO);

	return 0;
}