UC10_watching_video()
{
	lr_save_string(lr_paramarr_random("video_id_arr"),"video_id");
	
	switch(atoi(lr_eval_string("{randomUser}"))) {
	case 1: lr_start_transaction("UC10_watching_small_video");
		break;
	case 2: lr_start_transaction("UC10_watching_medium_video");
		break;
	case 3: lr_start_transaction("UC10_watching_big_video");
		break;}
	
	web_url("/api/video/relatedVideoIds", 
		"URL=https://{host}/api/video/relatedVideoIds?videoId={video_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json",
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		LAST);

	web_url("/api/video/tags", 
		"URL=https://{host}/api/video/tags?videoId={video_id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t302.inf", 
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
		"Snapshot=t303.inf", 
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
		"Snapshot=t304.inf", 
		LAST);

	switch(atoi(lr_eval_string("{randomUser}"))) {
	case 1:
	    lr_end_transaction("UC10_watching_small_video",LR_AUTO);
		break;
	case 2:
		lr_end_transaction("UC10_watching_medium_video",LR_AUTO);
		break;
	case 3:
		lr_end_transaction("UC10_watching_big_video",LR_AUTO);
		break;}

	return 0;
}
