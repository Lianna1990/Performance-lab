import com.thoughtworks.xstream.*;
import java.io.*;
import javaHttpJ.*;
import javaHttpJ.parsers.*;
import javaHttpJ.replay.*;
import lrapi.*;

public class Actions
{
  public int init(){
    return 0;
  }

    public int end(){return 0;}


    public int action() throws Throwable{

	String ENDFORM      =  "ENDFORM";
	String LAST         =  "LAST";
	String ENDITEM      =  "ENDITEM";
	String ITEMDATA     =  "ITEMDATA";
	String STARTHIDDENS =  "STARTHIDDENS";
	String ENDHIDDENS   =  "ENDHIDDENS";
	String CONNECT	    =  "CONNECT";
	String RECEIVE      =  "RECEIVE";
	String RESOLVE	    =  "RESOLVE";
	String REQUEST      =  "REQUEST";
	String RESPONSE	    =  "RESPONSE";
	String EXTRARES     =  "EXTRARES";
	int _webresult; 

	try{

	lr.think_time(0);

	_webresult = lrapi.web.set_sockets_option("SSL_VERSION", "TLS1.2");

	_webresult = lrapi.web.add_header("A-IM", 
		"x-bm,gzip");

	_webresult = lrapi.web.add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	_webresult = lrapi.web.add_header("If-None-Match", 
		"36c26d60ba6e3e639aa94fd26b47bd219988caef");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"none");

	_webresult = lrapi.web.add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/77.0.3865.120 Safari/537.36");


	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3");

	_webresult = lrapi.web.add_auto_header("Accept-Language", 
		"ru-RU,ru;q=0.9,en-US;q=0.8,en;q=0.7");

	_webresult = lrapi.web.add_header("Sec-Fetch-User", 
		"?1");

	_webresult = lrapi.web.add_header("Upgrade-Insecure-Requests", 
		"1");

	_webresult = lrapi.web.url("test.uxcrowd.ru", 
		"URL=https://test.uxcrowd.ru/", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=/assets/lang/ru.json", ENDITEM, 
		"Url=https://connect.facebook.net/ru_RU/sdk.js", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571305230887", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571305230887", ENDITEM, 
		"Url=https://use.typekit.net/af/2cd6bf/00000000000000000001008f/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n5&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/309dfe/000000000000000000010091/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n7&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/cf3e4e/000000000000000000010095/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=i4&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/9b05f3/000000000000000000013365/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n4&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/c4c302/000000000000000000012192/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n6&v=3", ENDITEM, 
		"Url=/app.js?bust=1571305230887", ENDITEM, 
		"Url=https://connect.facebook.net/ru_RU/sdk.js?hash=48e6311cb2263f337cc0bc72ee7ae87c&ua=modern_es6", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Mode", 
		"cors");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_auto_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("headerGreenWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.url("home.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.url("footer.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.revert_auto_header("X-XSRF-TOKEN");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"image/webp,image/apng,image/*,*/*;q=0.8");

	_webresult = lrapi.web.add_header("If-None-Match", 
		"W/\"5da6feeb-245a\"");

	

	_webresult = lrapi.web.revert_auto_header("Accept");

	_webresult = lrapi.web.add_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_auto_header("Origin", 
		"https://test.uxcrowd.ru");

	_webresult = lrapi.web.revert_auto_header("Sec-Fetch-Mode");

	_webresult = lrapi.web.add_header("Sec-Fetch-Mode", 
		"cors");

	
	_webresult = lrapi.web.revert_auto_header("Sec-Fetch-Site");

	_webresult = lrapi.web.add_header("Cache-Control", 
		"no-cache");

	_webresult = lrapi.web.add_header("Pragma", 
		"no-cache");

	_webresult = lrapi.web.add_header("Sec-WebSocket-Extensions", 
		"permessage-deflate; client_max_window_bits");

	_webresult = lrapi.web.add_header("Sec-WebSocket-Key", 
		"qwLzrybj+hf5R/yQy7CHUA==");

	_webresult = lrapi.web.add_header("Sec-WebSocket-Version", 
		"13");

	_webresult = lrapi.web.add_header("Upgrade", 
		"websocket");


	_webresult = lrapi.web.add_cookie("intercom-id-fkbc3no8=eafbc9ee-976f-4f81-83fc-5f574a154d0c; DOMAIN=test.uxcrowd.ru");

	_webresult = lrapi.web.add_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_header("Sec-Fetch-Site", 
		"cross-site");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr.think_time(28);

	_webresult = lrapi.web.custom_request("metrics", 
		"URL=https://api-iam.intercom.io/messenger/web/metrics", new String[]{ 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=0b969a1df6e6344c259747dbf873c3cf4ad54a44&s=257d09b8-18d8-46b8-8cee-d45f178711e7&i=&r=&platform=web&Idempotency-Key=a5613456c2718aba&user_data=%7B%7D&internal=&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&" +
		"user_active_company_id=undefined&metrics=%5B%7B%22id%22%3A%2239da58c5-02a6-4ded-9430-28f99ddb3991%22%2C%22name%22%3A%22m4_metric%22%2C%22created_at%22%3A1571305243%2C%22metadata%22%3A%7B%22user_id%22%3A%225da83716fc31fc1a0544c8ac%22%2C%22action%22%3A%22received%22%2C%22object%22%3A%22message%22%2C%22place%22%3A%22messenger%22%2C%22context%22%3A%22from_launcher_discovery_mode%22%7D%7D%5D&logs=%5B%5D&op_metrics=" +
		"%5B%7B%22name%22%3A%22bundleLoadDurationSeconds%22%2C%22type%22%3A%22timing%22%2C%22value%22%3A0.205%7D%5D&hc_metrics=%5B%5D&referer=https%3A%2F%2Ftest.uxcrowd.ru%2F", 
		EXTRARES, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.revert_auto_header("Origin");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_auto_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("header.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/header.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/about", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.url("about.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/about.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/about", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.revert_auto_header("X-XSRF-TOKEN");

	_webresult = lrapi.web.add_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("footerWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footerWhite.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/about", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://test.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=http://i.ytimg.com/vi/6Oukj5J_rZI/sddefault.jpg", "Referer=", ENDITEM, 
		"Url=http://i.ytimg.com/vi/ZLzNd2tWUbQ/sddefault.jpg", "Referer=", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	_webresult = lrapi.web.add_header("Origin", 
		"https://test.uxcrowd.ru");

	_webresult = lrapi.web.custom_request("ping_2", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", new String[]{ 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=0b969a1df6e6344c259747dbf873c3cf4ad54a44&s=257d09b8-18d8-46b8-8cee-d45f178711e7&i=&r=&platform=web&Idempotency-Key=a0f1a78f672fa80b&user_data=%7B%22anonymous_id%22%3A%22eafbc9ee-976f-4f81-83fc-5f574a154d0c%22%7D&internal=%7B%7D&page_title=" +
		"%D0%9A%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D0%B0%20UXCrowd%20%E2%80%94%20%D1%8D%D1%81%D0%BF%D0%B5%D1%80%D1%82%D1%8B%20%D0%BF%D0%BE%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D1%81%D0%BA%D0%BE%D0%BC%D1%83%20%D0%BE%D0%BF%D1%8B%D1%82%D1%83&user_active_company_id=-1&source=apiUpdate&sampling=false&referer=https%3A%2F%2Ftest.uxcrowd.ru%2Fabout", 
		EXTRARES, 
		"Url=http://i.ytimg.com/vi/MwQA0Kv5PVg/sddefault.jpg", "Referer=", ENDITEM, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=https://test.uxcrowd.ru/price", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	lr.start_transaction("1_transaction");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("price.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/price.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/price", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	_webresult = lrapi.web.add_header("Origin", 
		"https://test.uxcrowd.ru");

	_webresult = lrapi.web.custom_request("ping_3", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", new String[]{ 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=0b969a1df6e6344c259747dbf873c3cf4ad54a44&s=257d09b8-18d8-46b8-8cee-d45f178711e7&i=&r=&platform=web&Idempotency-Key=74bd9b666d6aa4fd&user_data=%7B%22anonymous_id%22%3A%22eafbc9ee-976f-4f81-83fc-5f574a154d0c%22%7D&internal=%7B%7D&page_title=" +
		"%D0%A3%D0%B7%D0%BD%D0%B0%D1%82%D1%8C%20%D1%81%D1%82%D0%BE%D0%B8%D0%BC%D0%BE%D1%81%D1%82%D1%8C%20%D1%8E%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8%20%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F%20%D1%81%D0%B0%D0%B9%D1%82%D0%BE%D0%B2&user_active_company_id=-1&source=apiUpdate&sampling=false&referer=https%3A%2F%2Ftest.uxcrowd.ru%2Fprice", 
		EXTRARES, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=https://test.uxcrowd.ru/tester-register", ENDITEM, 
		"Url=https://test.uxcrowd.ru/controller/controller_home/tester_register.controller.js?bust=1571305230887", "Referer=https://test.uxcrowd.ru/tester-register", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_auto_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("headerWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/headerWhite.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/tester-register", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.revert_auto_header("X-XSRF-TOKEN");

	_webresult = lrapi.web.url("tester.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/tester.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/tester-register", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://i.ytimg.com/vi/Q2CnE_Nlsbc/sddefault.jpg", "Referer=", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	_webresult = lrapi.web.add_header("Origin", 
		"https://test.uxcrowd.ru");

	_webresult = lrapi.web.custom_request("ping_4", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", new String[]{ 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=0b969a1df6e6344c259747dbf873c3cf4ad54a44&s=257d09b8-18d8-46b8-8cee-d45f178711e7&i=&r=&platform=web&Idempotency-Key=3535545937612ede&user_data=%7B%22anonymous_id%22%3A%22eafbc9ee-976f-4f81-83fc-5f574a154d0c%22%7D&internal=%7B%7D&page_title=" +
		"%D0%A2%D0%B5%D1%81%D1%82%D1%8B%20%D1%81%D0%B0%D0%B9%D1%82%D0%BE%D0%B2%20%D0%B7%D0%B0%20%D0%B4%D0%B5%D0%BD%D1%8C%D0%B3%D0%B8%20%E2%80%94%20%D0%BB%D0%B5%D0%B3%D0%B0%D0%BB%D1%8C%D0%BD%D0%B0%D1%8F%20%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D0%B0%20%D0%B2%20%D0%B8%D0%BD%D1%82%D0%B5%D1%80%D0%BD%D0%B5%D1%82%D0%B5&user_active_company_id=-1&source=apiUpdate&sampling=false&referer=https%3A%2F%2Ftest.uxcrowd.ru%2Ftester-register", 
		EXTRARES, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=https://test.uxcrowd.ru/price", ENDITEM, 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	lr.start_transaction("2_transaction");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"text/html");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	_webresult = lrapi.web.url("faq.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/faq.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/faq", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	_webresult = lrapi.web.add_auto_header("Accept", 
		"*/*");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	_webresult = lrapi.web.add_header("Origin", 
		"https://test.uxcrowd.ru");

	_webresult = lrapi.web.submit_data("ping_5", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", new String[]{ 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		}, new String[]{ // ITEM DATA 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=0b969a1df6e6344c259747dbf873c3cf4ad54a44", ENDITEM, 
		"Name=s", "Value=257d09b8-18d8-46b8-8cee-d45f178711e7", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=8166e306f58f9e87", ENDITEM, 
// Suspected parametrization in next line. If true make sure to substitute {} with proper parameter braces on the parameter
		"Name=user_data", "Value={\"anonymous_id\":\"eafbc9ee-976f-4f81-83fc-5f574a154d0c\"}", ENDITEM, 
// Suspected parametrization in next line. If true make sure to substitute {} with proper parameter braces on the parameter
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=FAQ", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://test.uxcrowd.ru/faq", ENDITEM, 
		EXTRARES, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/nl-about-top-people.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/people.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/test-params.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/tasks-example.png", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/paper-example.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/plane.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		"Url=https://test.uxcrowd.ru/assets/images/ux-logo-new-green.svg", "Referer=https://test.uxcrowd.ru/about", ENDITEM, 
		LAST});

	lr.end_transaction("2_transaction",lr.AUTO);

	lr.end_transaction("1_transaction",lr.AUTO);

	lr.start_transaction("3_transaction");

	_webresult = lrapi.web.add_auto_header("Accept", 
		"application/json, text/plain, */*");

	_webresult = lrapi.web.add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	_webresult = lrapi.web.add_header("X-XSRF-TOKEN", 
		"5fcec16b-1fdc-4715-abcc-4762af6be6ea");

	lr.think_time(5);

	_webresult = lrapi.web.url("modal-login.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", new String[]{ 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/about", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST})	// couldn't decode request from body. , couldn't decode response from body.%n
;

	lr.end_transaction("3_transaction",lr.AUTO);

	}catch(Exception e){
		e.printStackTrace();
		return -1;
	}
	return 0;
    }

}