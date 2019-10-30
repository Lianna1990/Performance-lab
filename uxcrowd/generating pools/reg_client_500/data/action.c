Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("_ga=GA1.2.778780013.1563200772; DOMAIN=self-repair.mozilla.org");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("repair", 
		"URL=https://self-repair.mozilla.org/ru/repair", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.778780013.1563200772; DOMAIN=aus5.mozilla.org");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/48.0.2/20160823121617/WINNT_x86-msvc-x64/ru/release/Windows_NT%2010.0.0.0%20(x64)/SSE3/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("test.uxcrowd.ru", 
		"URL=https://test.uxcrowd.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=https://use.typekit.net/af/2cd6bf/00000000000000000001008f/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n5&v=3", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571313693077", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571313693077", ENDITEM, 
		"Url=https://use.typekit.net/af/c4c302/000000000000000000012192/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n6&v=3", ENDITEM, 
		"Url=/app.js?bust=1571313693077", ENDITEM, 
		"Url=https://use.typekit.net/af/cf3e4e/000000000000000000010095/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=i4&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/9b05f3/000000000000000000013365/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n4&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/309dfe/000000000000000000010091/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n7&v=3", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://test.uxcrowd.ru/assets/lang/ru.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"32e13f9b-0818-46c8-948a-7b072242f172");

	web_url("headerGreenWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-XSRF-TOKEN", 
		"32e13f9b-0818-46c8-948a-7b072242f172");

	web_url("footer.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://i.ytimg.com/vi/Q2CnE_Nlsbc/sddefault.jpg", "Referer=", ENDITEM, 
		LAST);

	web_image("ux-logo-new-white.svg", 
		"Src=../../assets/images/ux-logo-new-white.svg", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://test.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=https://p.typekit.net/p.gif?s=1&k=hym5rnq&ht=tk&h=test.uxcrowd.ru&f=10879.10881.10884.10885.15586&a=9108420&js=1.19.2&app=typekit&e=js&_=1571313693883", ENDITEM, 
		"Url=https://www.youtube.com/yts/cssbin/www-player-vflcbMOLM.css", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.youtube.com/yts/jsbin/www-embed-player-vflR4HMjT/www-embed-player.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.youtube.com/yts/jsbin/player_ias-vflqs_iv4/ru_RU/base.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.youtube.com/yts/jsbin/player_ias-vflqs_iv4/ru_RU/remote.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=https://www.google.com/js/bg/4Yded54XDJAR3XmzVwO6ufrxT_MQSIaW0_tTFbN1Ar4.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://js.intercomcdn.com/shim.latest.js", ENDITEM, 
		"Url=https://js.intercomcdn.com/frame.56487017.js", ENDITEM, 
		"Url=https://js.intercomcdn.com/vendor.9d66d4ec.js", ENDITEM, 
		LAST);

	web_url("generate_204", 
		"URL=https://www.youtube.com/generate_204?m6xPeg", 
		"Resource=0", 
		"Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxK.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu5mxKOzY.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://i.ytimg.com/vi/Q2CnE_Nlsbc/sddefault.jpg", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmEU9fABc4EsA.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("4mlHvcWc", 
		"URL=https://s.click.aliexpress.com/e/4mlHvcWc", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/buyer/common/img/icons-s7ceb5615b6.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/buyer/common/img/header-sprite.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-channel-ui/2.0.0/flash-deals/src/img/fd--header-icon.png", "Referer=https://i.alicdn.com/ae-channel-ui/2.0.0/flash-deals/flash-deals-pc.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-footer/20190118124236/common/img/android.png", "Referer=https://i.alicdn.com/ae-footer/20190118124236/buyer/front/footer.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-footer/20190118124236/common/img/apple.png", "Referer=https://i.alicdn.com/ae-footer/20190118124236/buyer/front/footer.css", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/??aplus_plugin_aefront/index.js,mlog/aplus_int.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/node_modules/@alife/omega-country-flag/img/flag-icons.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ams-static/3.0.0/node_modules/@alife/beta-apollo/src/font/open-sans.eot", "Referer=https://i.alicdn.com/ams-static/3.0.0/global/base.css", ENDITEM, 
		"Url=https://i.alicdn.com/ams-static/3.0.0/node_modules/@alife/beta-apollo/src/font/open-sans.woff", "Referer=https://i.alicdn.com/ams-static/3.0.0/global/base.css", ENDITEM, 
		LAST);

	web_url("gettime", 
		"URL=https://time-ae.akamaized.net/gettime?callback=timestampcb&_=1571313702626", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://assets.alicdn.com/g/alilog/??s/8.12.3/plugin/aplus_client.js,aplus_cplugin/0.7.4/toolkit.js,aplus_cplugin/0.7.4/monitor.js,s/8.12.3/plugin/aplus_ae.js,s/8.12.3/plugin/aplus_ac.js,s/8.12.3/aplus_int.js,s/8.12.3/plugin/aplus_spmact.js,aplus_plugin_ae/0.0.8/index.js?v=20190924215948", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id="
		"a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://ae01.alicdn.com/wimg/monitor/start-render.png", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://gj.mmstat.com/eg.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://assets.alicdn.com/g/secdev/entry/index.js?t=218238", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://assets.alicdn.com/g/secdev/sufei_data/3.7.9/index.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://gj.mmstat.com/g.gif?logtype=0&title=&pre=https%3A%2F%2Ftest.uxcrowd.ru%2F&scr=1920x1080&cna=K0YvFvryR0sCAV6fRa6vnpLs&spm-cnt=a2g01.11715694.0.0.4d8bMwRmMwRmOd&aplus=&sidx=aplusSidx&pageid=16dd99858ad248834a571e723f924252d022d91f38&dmtrack_b=%7Bifm%3D1%7Clogin%3D0%7D&dmtrack_c="
		"%7Bsrc%3Dpromotion%7Caf%3Dundefined%7Ccv%3D1%7Ctp1%3Dundefined%7Ccpt%3Dundefined%7Cvd%3Dundefined%7CaffiliateKey%3D4mlHvcWc%7Caep_usuc_f%3Dc_tp%253DUSD%2526region%253DUS%2526b_locale%253Den_US%7Caeu_cid%3D29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc%7D&ali_beacon_id=-&ali_apache_id=10.181.15.97.1571313699433.459216.3&ali_apache_track=-&ali_apache_tracktmp=-&p=1&o=win10&b=firefox48&s=1920x1080&w=gecko&ism=pc&cache=dc5c1c2&lver=8.12.3&jsver=aplus_int&pver=0.7.4&_pw=6&_ph=6&tag=0&"
		"stag=2&lstag=0&_slog=0", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Visitor-Id", 
		"CgtNTkJ2U1AyWk1LWSigsKHtBQ%3D%3D");

	web_add_header("X-YouTube-Ad-Signals", 
		"dt=1571313695208&flash=0&frm=2&u_tz=180&u_his=1&u_java=true&u_h=1080&u_w=1920&u_ah=1040&u_aw=1920&u_cd=24&u_nplug=8&u_nmime=104&bc=25&bih=-12245933&biw=-12245933&brdim=%2C%2C353%2C46%2C1920%2C0%2C1280%2C936%2C500%2C385&vis=1&wgl=true&ca_type=image");

	web_add_header("X-YouTube-Client-Name", 
		"56");

	web_add_header("X-YouTube-Client-Version", 
		"20191016");

	web_add_header("X-YouTube-Utc-Offset", 
		"180");

	web_custom_request("log_event", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"ru\",\"gl\":\"RU\",\"clientName\":56,\"clientVersion\":\"20191016\"}},\"events\":[{\"eventTimeMs\":1571313695302,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":51663,\"veCounter\":1}]},\"context\":{\"lastActivityMs\":\"61\"}},{\"eventTimeMs\":1571313695310,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":70344,\""
		"veCounter\":2}]},\"context\":{\"lastActivityMs\":\"69\"}},{\"eventTimeMs\":1571313695311,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36925,\"veCounter\":3}]},\"context\":{\"lastActivityMs\":\"70\"}},{\"eventTimeMs\":1571313695312,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36926,\"veCounter\":4}]},\"context\":{\"lastActivityMs\":\"71\"}},{\""
		"eventTimeMs\":1571313695312,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36927,\"veCounter\":5}]},\"context\":{\"lastActivityMs\":\"71\"}},{\"eventTimeMs\":1571313695313,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":23851,\"veCounter\":6}]},\"context\":{\"lastActivityMs\":\"72\"}},{\"eventTimeMs\":1571313695314,\"visualElementShown\":{\"csn\":\""
		"IFioXafrK5CEyQXoyr_4Ag\",\"ve\":{\"veType\":36925,\"veCounter\":3},\"eventType\":1},\"context\":{\"lastActivityMs\":\"73\"}},{\"eventTimeMs\":1571313695315,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28665,\"veCounter\":7}]},\"context\":{\"lastActivityMs\":\"74\"}},{\"eventTimeMs\":1571313695317,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28664,\""
		"veCounter\":8}]},\"context\":{\"lastActivityMs\":\"76\"}},{\"eventTimeMs\":1571313695320,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":16499,\"veCounter\":9}]},\"context\":{\"lastActivityMs\":\"79\"}},{\"eventTimeMs\":1571313695364,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28662,\"veCounter\":10}]},\"context\":{\"lastActivityMs\":\"123\"}},{\""
		"eventTimeMs\":1571313695376,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28666,\"veCounter\":11}]},\"context\":{\"lastActivityMs\":\"135\"}},{\"eventTimeMs\":1571313695385,\"visualElementAttached\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28656,\"veCounter\":12}]},\"context\":{\"lastActivityMs\":\"145\"}},{\"eventTimeMs\":1571313695391,\"visualElementShown\":{\"csn\":\""
		"IFioXafrK5CEyQXoyr_4Ag\",\"ve\":{\"veType\":23851,\"veCounter\":6},\"eventType\":1},\"context\":{\"lastActivityMs\":\"150\"}},{\"eventTimeMs\":1571313695391,\"visualElementShown\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"ve\":{\"veType\":28664,\"veCounter\":8},\"eventType\":1},\"context\":{\"lastActivityMs\":\"150\"}},{\"eventTimeMs\":1571313695391,\"visualElementShown\":{\"csn\":\"IFioXafrK5CEyQXoyr_4Ag\",\"ve\":{\"veType\":28665,\"veCounter\":7},\"eventType\":1},\"context\":{\"lastActivityMs\":\""
		"150\"}}],\"requestTimeMs\":1571313705395,\"serializedClientEventId\":{\"serializedEventId\":\"IFioXafrK5CEyQXoyr_4Ag\",\"clientCounter\":1}}", 
		EXTRARES, 
		"Url=https://assets.alicdn.com/g/secdev/nsv/1.0.66/ns_d_77_3_n.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://cmap.alibaba.com/landing_ae.gif?cna=-", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://fourier.taobao.com/ts?url=https%3A%2F%2Ftest.uxcrowd.ru%2F&token=BJqaMHqukz2Ylh-RjKrDTqp76EC8yx6lVIOy6qQTRi34FzpRjFtutWDh57su3JY9&cna=K0YvFvryR0sCAV6fRa6vnpLs&ext=1", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/oneplus/entry.js?t=218238", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/aplus_plugin_xwj/index.js?t=218238", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blk.html", 
		"URL=https://g.alicdn.com/alilog/oneplus/blk.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.google.com/translate_a/element.js?cb=googleTranslateElementInit", "Referer=", ENDITEM, 
		"Url=https://assets.alicdn.com/g/security/umscript/2.1.4/um.js", ENDITEM, 
		"Url=https://translate.google.com/translate_a/element.js?cb=googleTranslateElementInit&_=1571313708249", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://gm.mmstat.com/ahot.1.2?logtype=2&cache=0.6631465060144861&p=1&o=winOther&b=firefox48&w=gecko&s=1920x1080&mx=&spm-cnt=a2g01.11715694.4d8bMwRmMwRmOd&isps=1&ns=0&ues=na&uee=na&rds=na&rde=na&fs=1729&dls=1729&dle=1729&cs=1729&ce=1729&rqs=3508&rps=3102&rpe=3885&dl=3885&di=6963&dcles=6986&dclee=7012&dc=11931&les=11931&lee=11949&fp=na", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key="
		"29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_static/css/translateelement.css", "Referer=", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_static/js/element/main_ru.js", "Referer=", ENDITEM, 
		"Url=https://translate.googleapis.com/element/TE_20190916_00/e/js/element/element_main.js", "Referer=", ENDITEM, 
		"Url=https://www.google.com/images/cleardot.gif", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_a/l?client=te&alpha=true&hl=ru&cb=_callbacks____0k1unm2pp", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571313699435&sk=4mlHvcWc&aff_trace_key=29596799489547c1b3fbb44fc392f523-1571313699435-09931-4mlHvcWc&terminal_id=a6381c47485047bba2d240f5c055529f", ENDITEM, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=", ENDITEM, 
		"Url=https://oneid.mmstat.com/taobao/img?type=acookie_id&id=K0YvFvryR0sCAV6fRa6vnpLs&_ts=3jVaC&cad=null&cap=null&cna=null&_lastvisited=K0YvFvryR0sCAV6fRa6vnpLs%2C%2CK0YvFvryR0sCAV6fRa6vnpLs7WIdGQRh%2Ck1unm0t2%2Ck1ang3h2%2C1%2C60e22289%2CK0YvFvryR0sCAV6fRa6vnpLs%2Ck1unm0t7", ENDITEM, 
		"Url=https://oneid.mmstat.com/taobao/getDeviceInfo?_cbFunction=fn_cgCI8qZZ&tokenid=K0YvFvryR0sCAV6fRa6vnpLs7WIdGQRh&acookie=K0YvFvryR0sCAV6fRa6vnpLs&n=first&f=1&p=1&scr1=1920x1080&scr2=1920x1040&p1=70911bb337bd063de2d6ed9626100dfe7831fd76bc9406eeeeac13e534c46319de3ae542&p2=", ENDITEM, 
		LAST);

	return 0;
}