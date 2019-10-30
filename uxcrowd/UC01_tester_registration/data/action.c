Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("_ga=GA1.2.778780013.1563200772; DOMAIN=self-repair.mozilla.org");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("repair", 
		"URL=https://self-repair.mozilla.org/ru/repair", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test.uxcrowd.ru", 
		"URL=https://test.uxcrowd.ru/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=https://use.typekit.net/af/2cd6bf/00000000000000000001008f/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n5&v=3", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1571311134647", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1571311134647", ENDITEM, 
		"Url=https://use.typekit.net/af/c4c302/000000000000000000012192/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n6&v=3", ENDITEM, 
		"Url=/app.js?bust=1571311134647", ENDITEM, 
		"Url=https://ulogin-stats.ru/visit/", ENDITEM, 
		"Url=https://use.typekit.net/af/cf3e4e/000000000000000000010095/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=i4&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/309dfe/000000000000000000010091/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n7&v=3", ENDITEM, 
		"Url=https://use.typekit.net/af/9b05f3/000000000000000000013365/27/l?primer=e7c58b81a305e1fc09dd5591d751a34891b5b63ab278ac3b87ed8857fdd9b01a&fvd=n4&v=3", ENDITEM, 
		"Url=https://p.typekit.net/p.gif?s=1&k=hym5rnq&ht=tk&h=test.uxcrowd.ru&f=10879.10881.10884.10885.15586&a=9108420&js=1.19.2&app=typekit&e=js&_=1571311135473", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.778780013.1563200772; DOMAIN=aus5.mozilla.org");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/48.0.2/20160823121617/WINNT_x86-msvc-x64/ru/release/Windows_NT%2010.0.0.0%20(x64)/SSE3/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
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
		"c67fc2b4-8897-451e-9c12-79f257cbed37");

	web_url("headerGreenWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-XSRF-TOKEN", 
		"c67fc2b4-8897-451e-9c12-79f257cbed37");

	web_url("home.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://i.ytimg.com/vi/Q2CnE_Nlsbc/sddefault.jpg", "Referer=", ENDITEM, 
		LAST);

	web_url("test.uxcrowd.ru_2", 
		"URL=https://test.uxcrowd.ru/", 
		"Resource=0", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://test.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=https://www.youtube.com/yts/cssbin/www-player-vflcbMOLM.css", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.youtube.com/yts/jsbin/www-embed-player-vflR4HMjT/www-embed-player.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.youtube.com/yts/jsbin/player_ias-vflqs_iv4/ru_RU/base.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://js.intercomcdn.com/shim.latest.js", ENDITEM, 
		"Url=https://js.intercomcdn.com/frame.56487017.js", ENDITEM, 
		"Url=https://js.intercomcdn.com/vendor.9d66d4ec.js", ENDITEM, 
		"Url=https://js.intercomcdn.com/locale-ru-json.486c7fb1.js", ENDITEM, 
		"Url=/controller/controller_home/home.controller.js?bust=1571311134647", ENDITEM, 
		"Url=/controller/controller_home/success.controller.js?bust=1571311134647", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("4mlHvcWc", 
		"URL=https://s.click.aliexpress.com/e/4mlHvcWc", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.youtube.com/yts/jsbin/player_ias-vflqs_iv4/ru_RU/remote.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://www.google.com/js/bg/4Yded54XDJAR3XmzVwO6ufrxT_MQSIaW0_tTFbN1Ar4.js", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxK.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		LAST);

	web_url("generate_204", 
		"URL=https://www.youtube.com/generate_204?z6YN2A", 
		"Resource=0", 
		"Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://i.ytimg.com/vi/Q2CnE_Nlsbc/sddefault.jpg", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmEU9fABc4EsA.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu5mxKOzY.woff2", "Referer=https://www.youtube.com/embed/Q2CnE_Nlsbc", ENDITEM, 
		"Url=https://i.alicdn.com/ae-channel-ui/2.0.0/flash-deals/src/img/fd--header-icon.png", "Referer=https://i.alicdn.com/ae-channel-ui/2.0.0/flash-deals/flash-deals-pc.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-footer/20190118124236/common/img/android.png", "Referer=https://i.alicdn.com/ae-footer/20190118124236/buyer/front/footer.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-footer/20190118124236/common/img/apple.png", "Referer=https://i.alicdn.com/ae-footer/20190118124236/buyer/front/footer.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/buyer/common/img/icons-s7ceb5615b6.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/buyer/common/img/header-sprite.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ae-header/20190108161825/node_modules/@alife/omega-country-flag/img/flag-icons.png", "Referer=https://i.alicdn.com/ae-header/20190108161825/buyer/front/ae-header-ru.css", ENDITEM, 
		"Url=https://i.alicdn.com/ams-static/3.0.0/node_modules/@alife/beta-apollo/src/font/open-sans.eot", "Referer=https://i.alicdn.com/ams-static/3.0.0/global/base.css", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/??aplus_plugin_aefront/index.js,mlog/aplus_int.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://i.alicdn.com/ams-static/3.0.0/node_modules/@alife/beta-apollo/src/font/open-sans.woff", "Referer=https://i.alicdn.com/ams-static/3.0.0/global/base.css", ENDITEM, 
		LAST);

	web_url("gettime", 
		"URL=https://time-ae.akamaized.net/gettime?callback=timestampcb&_=1571311139690", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ae01.alicdn.com/wimg/monitor/start-render.png", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/??s/8.12.3/plugin/aplus_client.js,aplus_cplugin/0.7.4/toolkit.js,aplus_cplugin/0.7.4/monitor.js,s/8.12.3/plugin/aplus_ae.js,s/8.12.3/plugin/aplus_ac.js,s/8.12.3/aplus_int.js,s/8.12.3/plugin/aplus_spmact.js,aplus_plugin_ae/0.0.8/index.js?v=20190924215948", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id="
		"de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://test.uxcrowd.ru/favicon192w.png", "Referer=", ENDITEM, 
		"Url=https://translate.google.com/translate_a/element.js?cb=googleTranslateElementInit", "Referer=", ENDITEM, 
		"Url=https://translate.google.com/translate_a/element.js?cb=googleTranslateElementInit&_=1571311142487", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://gj.mmstat.com/eg.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/aplus_plugin_xwj/index.js?t=218237", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://gj.mmstat.com/g.gif?logtype=0&title=&pre=https%3A%2F%2Ftest.uxcrowd.ru%2F&scr=1920x1080&cna=KTwvFrRNCUICAV6fRa6mMkSg&spm-cnt=a2g01.11715694.0.0.76dfysBiysBizV&aplus=&sidx=aplusSidx&pageid=16dd9713e6b1b784d63efd3049708aee2ccc8f2f65&dmtrack_b=%7Bifm%3D1%7Clogin%3D0%7D&dmtrack_c="
		"%7Bsrc%3Dpromotion%7Caf%3Dundefined%7Ccv%3D1%7Ctp1%3Dundefined%7Ccpt%3Dundefined%7Cvd%3Dundefined%7CaffiliateKey%3D4mlHvcWc%7Caep_usuc_f%3Dc_tp%253DUSD%2526region%253DUS%2526b_locale%253Den_US%7Caeu_cid%3Decb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc%7D&ali_beacon_id=-&ali_apache_id=11.227.116.59.1571311137993.457381.1&ali_apache_track=-&ali_apache_tracktmp=-&p=1&o=win10&b=firefox48&s=1920x1080&w=gecko&ism=pc&cache=4fcdc36&lver=8.12.3&jsver=aplus_int&pver=0.7.4&_pw=6&_ph=6&tag=0&"
		"stag=2&lstag=0&_slog=0", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://cmap.alibaba.com/landing_ae.gif?cna=-", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://assets.alicdn.com/g/alilog/oneplus/entry.js?t=218237", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://assets.alicdn.com/g/secdev/entry/index.js?t=218237", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_static/css/translateelement.css", "Referer=", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_static/js/element/main_ru.js", "Referer=", ENDITEM, 
		"Url=https://assets.alicdn.com/g/secdev/sufei_data/3.7.9/index.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://assets.alicdn.com/g/secdev/nsv/1.0.64/ns_c_75_3_n.js", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://translate.googleapis.com/element/TE_20190916_00/e/js/element/element_main.js", "Referer=", ENDITEM, 
		"Url=https://www.google.com/images/cleardot.gif", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://translate.googleapis.com/translate_a/l?client=te&alpha=true&hl=ru&cb=_callbacks____0k1um3285", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blk.html", 
		"URL=https://g.alicdn.com/alilog/oneplus/blk.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://assets.alicdn.com/g/security/umscript/2.1.4/um.js", ENDITEM, 
		"Url=https://gm.mmstat.com/ahot.1.2?logtype=2&cache=0.7904739119600237&p=1&o=winOther&b=firefox48&w=gecko&s=1920x1080&mx=&spm-cnt=a2g01.11715694.76dfysBiysBizV&isps=1&ns=0&ues=na&uee=na&rds=na&rde=na&fs=750&dls=750&dle=750&cs=750&ce=750&rqs=1908&rps=1527&rpe=2776&dl=2776&di=4501&dcles=4532&dclee=4556&dc=6527&les=6527&lee=6533&fp=na", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key="
		"ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://www.gstatic.com/images/branding/product/1x/translate_24dp.png", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://oneid.mmstat.com/taobao/getDeviceInfo?_cbFunction=fn_Kncigkrl&tokenid=KTwvFrRNCUICAV6fRa6mMkSg7JFKFgU3&acookie=KTwvFrRNCUICAV6fRa6mMkSg&n=first&f=1&p=1&scr1=1920x1080&scr2=1920x1040&p1=390df26a170911bb33f052abfd2cbf38bb00b3778598178666ac5545bc2cc349de3ae542&p2=", ENDITEM, 
		"Url=https://oneid.mmstat.com/taobao/getDeviceInfo?_cbFunction=fn_3e0SzQhG&tokenid=KTwvFrRNCUICAV6fRa6mMkSg7JFKFgU3&acookie=KTwvFrRNCUICAV6fRa6mMkSg&n=callback", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://test.uxcrowd.ru");

	web_custom_request("ping", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=0b969a1df6e6344c259747dbf873c3cf4ad54a44&s=ad330681-aabd-42e4-a698-f22fa5c4314c&i=&r=&platform=web&Idempotency-Key=1bee499cdc4e772f&user_data=%7B%7D&internal=%7B%7D&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&"
		"user_active_company_id=undefined&source=apiBoot&sampling=false&referer=https%3A%2F%2Ftest.uxcrowd.ru%2F", 
		EXTRARES, 
		"Url=https://fourier.taobao.com/ts?url=https%3A%2F%2Ftest.uxcrowd.ru%2F&token=BNLSiCVw28V2cCc5grxa45CiIJi049Z9zCvqApwr_gVwr3KphHMmjdhZHVM2xE4V&cna=KTwvFrRNCUICAV6fRa6mMkSg&ext=1", "Referer=https://flashdeals.aliexpress.com/ru.htm?aff_platform=promotion&cpt=1571311137996&sk=4mlHvcWc&aff_trace_key=ecb5586dd1e640e3a08d28ee370283c6-1571311137996-09331-4mlHvcWc&terminal_id=de6f4eeb6fd04fa598a38e414fa5d615", ENDITEM, 
		"Url=https://www.gstatic.com/images/branding/product/2x/translate_24dp.png", "Referer=https://translate.googleapis.com/translate_static/css/translateelement.css", ENDITEM, 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-nLlg2v_d9BInHZZRZ3u9unPxIvEiIW4Ps0NssUaKWTEtB2y1bj-fxDQ_ZN_G52bh-W_SSelKsrAw0IlwPVoCGDuAR4Fe16Q78jqZ?X-Nexus-New-Client=true&X-Nexus-Version=0.4.67&user_role=visitor", 
		"Origin=https://test.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	/*Connection ID 0 received buffer WebSocketReceive1*/

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://test.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtNZjJQdnliQzJWTSiinKHtBQ%3D%3D");

	web_add_header("X-YouTube-Ad-Signals", 
		"dt=1571311138030&flash=0&frm=2&u_tz=180&u_his=1&u_java=true&u_h=1080&u_w=1920&u_ah=1040&u_aw=1920&u_cd=24&u_nplug=8&u_nmime=104&bc=25&bih=-12245933&biw=-12245933&brdim=%2C%2C261%2C53%2C1920%2C0%2C1280%2C936%2C500%2C385&vis=1&wgl=true&ca_type=image");

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
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"ru\",\"gl\":\"RU\",\"clientName\":56,\"clientVersion\":\"20191016\"}},\"events\":[{\"eventTimeMs\":1571311138121,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":51663,\"veCounter\":1}]},\"context\":{\"lastActivityMs\":\"60\"}},{\"eventTimeMs\":1571311138129,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":70344,\""
		"veCounter\":2}]},\"context\":{\"lastActivityMs\":\"68\"}},{\"eventTimeMs\":1571311138129,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36925,\"veCounter\":3}]},\"context\":{\"lastActivityMs\":\"69\"}},{\"eventTimeMs\":1571311138130,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36926,\"veCounter\":4}]},\"context\":{\"lastActivityMs\":\"70\"}},{\""
		"eventTimeMs\":1571311138131,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":36927,\"veCounter\":5}]},\"context\":{\"lastActivityMs\":\"70\"}},{\"eventTimeMs\":1571311138132,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":23851,\"veCounter\":6}]},\"context\":{\"lastActivityMs\":\"71\"}},{\"eventTimeMs\":1571311138132,\"visualElementShown\":{\"csn\":\""
		"Ik6oXfnuE9fI7QSxj6vYDQ\",\"ve\":{\"veType\":36925,\"veCounter\":3},\"eventType\":1},\"context\":{\"lastActivityMs\":\"72\"}},{\"eventTimeMs\":1571311138133,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28665,\"veCounter\":7}]},\"context\":{\"lastActivityMs\":\"72\"}},{\"eventTimeMs\":1571311138136,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28664,\""
		"veCounter\":8}]},\"context\":{\"lastActivityMs\":\"75\"}},{\"eventTimeMs\":1571311138138,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":16499,\"veCounter\":9}]},\"context\":{\"lastActivityMs\":\"78\"}},{\"eventTimeMs\":1571311138149,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28662,\"veCounter\":10}]},\"context\":{\"lastActivityMs\":\"88\"}},{\""
		"eventTimeMs\":1571311138154,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28666,\"veCounter\":11}]},\"context\":{\"lastActivityMs\":\"93\"}},{\"eventTimeMs\":1571311138158,\"visualElementAttached\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"parentVe\":{\"veType\":16623},\"childVes\":[{\"veType\":28656,\"veCounter\":12}]},\"context\":{\"lastActivityMs\":\"97\"}},{\"eventTimeMs\":1571311138161,\"visualElementShown\":{\"csn\":\""
		"Ik6oXfnuE9fI7QSxj6vYDQ\",\"ve\":{\"veType\":23851,\"veCounter\":6},\"eventType\":1},\"context\":{\"lastActivityMs\":\"100\"}},{\"eventTimeMs\":1571311138161,\"visualElementShown\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"ve\":{\"veType\":28664,\"veCounter\":8},\"eventType\":1},\"context\":{\"lastActivityMs\":\"100\"}},{\"eventTimeMs\":1571311138161,\"visualElementShown\":{\"csn\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"ve\":{\"veType\":28665,\"veCounter\":7},\"eventType\":1},\"context\":{\"lastActivityMs\":\""
		"100\"}}],\"requestTimeMs\":1571311148169,\"serializedClientEventId\":{\"serializedEventId\":\"Ik6oXfnuE9fI7QSxj6vYDQ\",\"clientCounter\":1}}", 
		LAST);

	web_add_header("Origin", 
		"https://g.alicdn.com");

	web_custom_request("um.json", 
		"URL=https://ynuf.alipay.com/service/um.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://g.alicdn.com/alilog/oneplus/blk.html", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=data=ENCODE~~V01~~"
		"eyJ4diI6IjMuMy43IiwieHQiOiJLVHd2RnJSTkNVSUNBVjZmUmE2bU1rU2c3SkZLRmdVMyIsImV0ZiI6ImIiLCJ4YSI6ImFsaXl1bl9haWQiLCJzaXRlSWQiOiIiLCJ1aWQiOiIiLCJlbWwiOiJBQSIsImV0aWQiOiIiLCJlc2lkIjoiIiwidHlwZSI6InBjIiwibmNlIjp0cnVlLCJwbGF0IjoiV2luMzIiLCJuYWNuIjoiTW96aWxsYSIsIm5hbiI6Ik5ldHNjYXBlIiwibmxnIjoicnUtUlUiLCJzdyI6MTkyMCwic2giOjEwODAsInNhdyI6MTkyMCwic2FoIjoxMDQwLCJic3ciOjAsImJzaCI6MCwiZXR6IjoxODAsImV0dCI6MTU3MTMxMTE0NDY2MywiZXJkIjoiIiwiaXBzIjoiIiwiZXBsIjo4LCJlcCI6ImY3ZWVjZTRmYWMxODA0N2QwZDJlMTExNjVlNGY0NmJjMTliMG"
		"E3ODIiLCJlcGxzIjoiQTQzMDE5ZTYyMDk4NTFhMWY1NTNlYTdiNTAzMjM3MjI3ZjBhYjg2ZWMsRzM2MjcwYmEwMGQ1ZjZjOWQxZTA3YjBhMTMyOTJjYzAxZGIxNDhlMWYsSmY5Njg4OWY5MzEyZjA4ZTE3YTcyYWQ4ZDU1NWE3ODFmYWMwNDI0NTYsUzE4NTQ1NmFiMTRhOGNiNDRlYjRhNmE2ODk5ZTg3OWNkYjFhYTExNGQsVmM5YmE4MmZmMGJkZWZkOTYzMTc1MDQ5ZTVmYTNhNjgxODU5NWI2N2EiLCJlc2wiOmZhbHNlfQ%3D%3D", 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=a971fa84-5e3d-49f4-990f-41dbe919a42c; DOMAIN=test.uxcrowd.ru");

	web_add_auto_header("X-XSRF-TOKEN", 
		"c67fc2b4-8897-451e-9c12-79f257cbed37");

	web_url("modal-login.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("reg");

	web_custom_request("register", 
		"URL=https://test.uxcrowd.ru/api/register", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"email\":\"olfufok@laste.ml\",\"role\":\"ROLE_NEW_TESTER\",\"tariffType\":null}", 
		LAST);

	web_url("modal_window.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_home/modal_window.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footerWhite.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/footerWhite.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-XSRF-TOKEN", 
		"c67fc2b4-8897-451e-9c12-79f257cbed37");

	web_url("header.html", 
		"URL=https://test.uxcrowd.ru/tmpl/tmpl_landing_new/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://test.uxcrowd.ru");

	web_submit_data("ping_2", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=0b969a1df6e6344c259747dbf873c3cf4ad54a44", ENDITEM, 
		"Name=s", "Value=ad330681-aabd-42e4-a698-f22fa5c4314c", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=c247a19cb7d08311", ENDITEM, 
		"Name=user_data", "Value={\"anonymous_id\":\"a971fa84-5e3d-49f4-990f-41dbe919a42c\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Успеx", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://test.uxcrowd.ru/success", ENDITEM, 
		LAST);

	lr_end_transaction("reg",LR_AUTO);

	web_submit_data("metrics", 
		"Action=https://api-iam.intercom.io/messenger/web/metrics", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://test.uxcrowd.ru/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=0b969a1df6e6344c259747dbf873c3cf4ad54a44", ENDITEM, 
		"Name=s", "Value=ad330681-aabd-42e4-a698-f22fa5c4314c", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=c2942680f8422410", ENDITEM, 
		"Name=user_data", "Value={\"anonymous_id\":\"a971fa84-5e3d-49f4-990f-41dbe919a42c\"}", ENDITEM, 
		"Name=internal", "Value=", ENDITEM, 
		"Name=page_title", "Value=Успеx", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=metrics", "Value=[{\"id\":\"b5494743-0b9e-4265-a2ce-d10641f1c98f\",\"name\":\"m4_metric\",\"created_at\":1571311152,\"metadata\":{\"user_id\":\"5da84e2c8eeac8893081db81\",\"action\":\"received\",\"object\":\"message\",\"place\":\"messenger\",\"context\":\"from_launcher_discovery_mode\"}}]", ENDITEM, 
		"Name=logs", "Value=[]", ENDITEM, 
		"Name=op_metrics", "Value=[{\"name\":\"bundleLoadDurationSeconds\",\"type\":\"timing\",\"value\":0.715}]", ENDITEM, 
		"Name=hc_metrics", "Value=[]", ENDITEM, 
		"Name=referer", "Value=https://test.uxcrowd.ru/success", ENDITEM, 
		LAST);

	return 0;
}