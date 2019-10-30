Action()
{

	web_add_header("Origin", 
		"https://prod.uxcrowd.ru");

	lr_think_time(10);

	web_custom_request("metrics", 
		"URL=https://api-iam.intercom.io/messenger/web/metrics", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=68d6f9594c2769b3f012f99fca953b9c9b28d9bb&s=e9c06d12-6a68-4e4b-955d-95e40c3db66a&i=&r=&platform=web&Idempotency-Key=f605c9081ea61f19&user_data=%7B%22email%22%3A%22test1%40test.com%22%2C%22user_id%22%3A493253070%2C%22anonymous_id%22%3A%225c083c21-6911-492b-90a6-55ac9b3fd76b%22%7D&internal=&page_title=%D0%9F%D1%80%D0%BE%D1%84%D0%B8%D0%BB%D1%8C%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F&user_active_company_id=-1&metrics="
		"%5B%7B%22id%22%3A%222a722393-b853-48f3-9a6f-a1d2df31c55d%22%2C%22name%22%3A%22m4_metric%22%2C%22created_at%22%3A1571400454%2C%22metadata%22%3A%7B%22user_id%22%3A%225da9aaffec414bb13b9feb73%22%2C%22action%22%3A%22received%22%2C%22object%22%3A%22message%22%2C%22place%22%3A%22messenger%22%2C%22context%22%3A%22from_launcher_discovery_mode%22%7D%7D%5D&logs=%5B%5D&op_metrics=%5B%7B%22name%22%3A%22bundleLoadDurationSeconds%22%2C%22type%22%3A%22timing%22%2C%22value%22%3A0.872%7D%5D&hc_metrics=%5B%5D&"
		"referer=https%3A%2F%2Fprod.uxcrowd.ru%2Fapp-tester-home%2Ftester-profile", 
		LAST);

	lr_think_time(13);

	lr_start_transaction("fill_profile");

	web_url("update.xml_2", 
		"URL=https://aus5.mozilla.org/update/3/GMP/48.0.2/20160823121617/WINNT_x86-msvc-x64/ru/release/Windows_NT%2010.0.0.0%20(x64)/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	web_url("..ns_444444_256x240.png", 
		"URL=https://prod.uxcrowd.ru/assets/gulp/..ns_444444_256x240.png", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://prod.uxcrowd.ru/assets/gulp/sup_css.css", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.778780013.1563200772; DOMAIN=incoming.telemetry.mozilla.org");

	web_custom_request("20160823121617", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/da13f0e0-d60d-41dc-b5f3-5da00a2ed887/main/Firefox/48.0.2/release/20160823121617?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t109.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"main\",\"id\":\"da13f0e0-d60d-41dc-b5f3-5da00a2ed887\",\"creationDate\":\"2019-10-17T13:39:21.285Z\",\"version\":4,\"application\":{\"architecture\":\"x86\",\"buildId\":\"20160823121617\",\"name\":\"Firefox\",\"version\":\"48.0.2\",\"displayVersion\":\"48.0.2\",\"vendor\":\"Mozilla\",\"platformVersion\":\"48.0.2\",\"xpcomAbi\":\"x86-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":5899,\"uptime\":98,\"start\":1319,\"main\":1512,\""
		"selectProfile\":1557,\"afterProfileLocked\":1558,\"startupCrashDetectionBegin\":2503,\"startupCrashDetectionEnd\":33474,\"firstPaint\":3416,\"sessionRestoreInit\":2942,\"sessionRestored\":3649,\"createTopLevelWindow\":2999,\"firstLoadURI\":3434,\"quitApplication\":5896664,\"profileBeforeChange\":5898562,\"AMI_startup_begin\":2513,\"XPI_startup_begin\":2560,\"XPI_bootstrap_addons_begin\":2571,\"XPI_bootstrap_addons_end\":2609,\"XPI_startup_end\":2609,\"AMI_startup_end\":2628,\"XPI_finalUIStartup\""
		":2943,\"sessionRestoreInitialized\":2983,\"delayedStartupStarted\":3434,\"delayedStartupFinished\":3585,\"startupInterrupted\":0,\"js\":{\"setProto\":51,\"customIter\":8},\"maximalNumberOfConcurrentThreads\":37,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":62100795,\"startupWindowVisibleWriteBytes\":14,\"startupSessionRestoreReadBytes\":62973602,\"startupSessionRestoreWriteBytes\":32891,\"savedPings\":0,\"activeTicks\":17,\"pingsOverdue\":0},\"histograms\":{\""
		"JS_DEFINE_GETTER_SETTER_THIS_NULL_UNDEFINED\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":0,\"1\":1,\"2\":0},\"sum\":1},\"SSL_OBSERVED_END_ENTITY_CERTIFICATE_LIFETIME\":{\"range\":[1,125],\"bucket_count\":126,\"histogram_type\":1,\"values\":{\"104\":0,\"105\":37,\"106\":0},\"sum\":3885},\"UPDATE_CHECK_CODE_EXTERNAL\":{\"range\":[1,50],\"bucket_count\":51,\"histogram_type\":1,\"values\":{\"28\":0,\"29\":1,\"30\":0},\"sum\":29},\""
		"UPDATE_LAST_NOTIFY_INTERVAL_DAYS_EXTERNAL\":{\"range\":[1,365],\"bucket_count\":60,\"histogram_type\":0,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"UPDATE_PING_COUNT_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":4,\"values\":{\"0\":1,\"1\":0},\"sum\":1},\"UPDATE_SERVICE_INSTALLED_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"UPDATE_SERVICE_MANUALLY_UNINSTALLED_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\""
		"histogram_type\":4,\"values\":{\"0\":1,\"1\":0},\"sum\":1},\"UPDATE_UNABLE_TO_APPLY_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":4,\"values\":{\"0\":1,\"1\":0},\"sum\":1},\"UPDATE_CANNOT_STAGE_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":4,\"values\":{\"0\":1,\"1\":0},\"sum\":1},\"UPDATE_NOT_PREF_UPDATE_SERVICE_ENABLED_EXTERNAL\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":4,\"values\":{\"0\":1,\"1\":0},\"sum\":1},\"UPDATE_WIZ_LAST_PAGE_CODE\":"
		"{\"range\":[1,30],\"bucket_count\":31,\"histogram_type\":1,\"values\":{\"4\":0,\"5\":1,\"6\":0},\"sum\":5},\"TELEMETRY_TEST_RELEASE_OPTOUT\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"FIPS_ENABLED\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"SEARCH_SERVICE_HAS_UPDATES\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\""
		"SEARCH_SERVICE_HAS_ICON_UPDATES\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"VIDEO_CAN_CREATE_AAC_DECODER\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":0,\"1\":1,\"2\":0},\"sum\":1},\"VIDEO_CAN_CREATE_H264_DECODER\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":0,\"1\":1,\"2\":0},\"sum\":1},\"BROWSER_IS_USER_DEFAULT\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values"
		"\":{\"0\":1,\"1\":0},\"sum\":0},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"COOKIE_SCHEME_SECURITY\":{\"range\":[1,10],\"bucket_count\":11,\"histogram_type\":1,\"values\":{\"0\":0,\"1\":39,\"3\":2,\"4\":0},\"sum\":45},\"WEAVE_CONFIGURED\":{\"range\":[1,2],\"bucket_count\":3,\""
		"histogram_type\":2,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"E10S_STATUS\":{\"range\":[1,12],\"bucket_count\":13,\"histogram_type\":1,\"values\":{\"1\":0,\"2\":1,\"3\":0},\"sum\":2},\"E10S_ADDONS_BLOCKER_RAN\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":0,\"1\":1,\"2\":0},\"sum\":1},\"VIDEO_ADOBE_GMP_DISAPPEARED\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"VIDEO_ADOBE_GMP_MISSING_FILES\":{\"range\":[1,8],\""
		"bucket_count\":9,\"histogram_type\":1,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"VIDEO_OPENH264_GMP_DISAPPEARED\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"VIDEO_OPENH264_GMP_MISSING_FILES\":{\"range\":[1,4],\"bucket_count\":5,\"histogram_type\":1,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"GRAPHICS_DRIVER_STARTUP_TEST\":{\"range\":[1,20],\"bucket_count\":21,\"histogram_type\":1,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"FXA_CONFIGURED\":{\""
		"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"YOUTUBE_REWRITABLE_EMBED_SEEN\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0},\"YOUTUBE_NONREWRITABLE_EMBED_SEEN\":{\"range\":[1,2],\"bucket_count\":3,\"histogram_type\":3,\"values\":{\"0\":1,\"1\":0},\"sum\":0}},\"keyedHistograms\":{},\"info\":{\"reason\":\"shutdown\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/"
		"d4af0671004007e58d316b3e49679b66879c205a\",\"asyncPluginInit\":false,\"timezoneOffset\":180,\"previousBuildId\":null,\"sessionId\":\"a6133ff3-c710-45ca-a93c-a6be89098e8b\",\"subsessionId\":\"1db67409-65ee-46c7-89ee-5ddb952cdade\",\"previousSessionId\":\"b60b4193-8c74-48f7-9b63-c661f78f6fa9\",\"previousSubsessionId\":\"d0e842cb-a8bb-4607-80eb-055bcbea6214\",\"subsessionCounter\":1,\"profileSubsessionCounter\":19,\"sessionStartDate\":\"2019-10-17T00:00:00.0+03:00\",\"subsessionStartDate\":\""
		"2019-10-17T00:00:00.0+03:00\",\"sessionLength\":5898,\"subsessionLength\":5895,\"addons\":\"%7B972ce4c6-7e08-4474-a285-3208198ce6fd%7D:48.0.2,e10srollout%40mozilla.org:1.1,firefox%40getpocket.com:1.0.4,loop%40mozilla.org:1.4.4\",\"flashVersion\":\"32.0.0.270\"}},\"clientId\":\"46c8e8b0-04f8-43f6-a574-04869d273695\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86\",\"buildId\":\"20160823121617\",\""
		"version\":\"48.0.2\",\"vendor\":\"Mozilla\",\"platformVersion\":\"48.0.2\",\"xpcomAbi\":\"x86-msvc\",\"hotfixVersion\":null},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":7848,\"virtualMaxMB\":4096,\"cpu\":{\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":158,\"stepping\":11,\"l2cacheKB\":256,\"l3cacheKB\":6144,\"speedMHz\":3600,\""
		"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\"]},\"os\":{\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"ru-RU\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":17763,\"windowsUBR\":805,\"installYear\":2019},\"hdd\":{\"profile\":{\"model\":\"INTEL SSDSCKKW256G8\",\"revision\":\"LHF004C\"},\"binary\":{\"model\":\"INTEL SSDSCKKW256G8\",\"revision\":\"LHF004C\"},\"system\":{\"model\":\"INTEL SSDSCKKW256G8\",\""
		"revision\":\"LHF004C\"}},\"gfx\":{\"D2DEnabled\":true,\"DWriteEnabled\":true,\"adapters\":[{\"description\":\"Intel(R) UHD Graphics 630\",\"vendorID\":\"0x8086\",\"deviceID\":\"0x3e91\",\"subsysID\":\"3e911849\",\"RAM\":null,\"driver\":\"igdumdim64 igd10iumd64 igd10iumd64 igd12umd64 igdumdim32 igd10iumd32 igd10iumd32 igd12umd32\",\"driverVersion\":\"25.20.100.6374\",\"driverDate\":\"11-18-2018\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":1920,\"screenHeight\":1080,\"refreshRate\":59,\""
		"pseudoDisplay\":false}],\"features\":{\"compositor\":\"d3d11\",\"d3d11\":{\"status\":\"available\",\"version\":45312,\"warp\":false,\"textureSharing\":true,\"blacklisted\":false},\"d2d\":{\"status\":\"available\",\"version\":\"1.1\"}}},\"isWow64\":true},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":false,\"e10sCohort\":\"control\",\"telemetryEnabled\":false,\"locale\":\"ru\",\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true},\"userPrefs\":{\""
		"browser.cache.disk.capacity\":358400,\"browser.newtabpage.enhanced\":true,\"browser.shell.checkDefaultBrowser\":false,\"network.proxy.http\":\"<user-set>\",\"network.proxy.ssl\":\"<user-set>\"},\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"defaultSearchEngine\":\"yandex\",\"defaultSearchEngineData\":{\"name\":\"\\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81\",\"loadPath\":\"jar:[app]/omni.ja!browser/yandex.xml\",\"origin\":\"default\",\"submissionURL\":\"https:"
		"//yandex.ru/yandsearch?clid=2186618&text=\"}},\"profile\":{\"creationDate\":18092},\"addons\":{\"activeAddons\":{\"e10srollout@mozilla.org\":{\"blocklisted\":false,\"description\":\"Staged rollout of Firefox multi-process feature.\",\"name\":\"Multi-process staged rollout\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.1\",\"scope\":1,\"type\":\"extension\",\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":17037,\"updateDay\":17037,\"isSystem\":true},\""
		"firefox@getpocket.com\":{\"blocklisted\":false,\"description\":\"When you find something you want to view later, put it in Pocket.\",\"name\":\"Pocket\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.0.4\",\"scope\":1,\"type\":\"extension\",\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":17037,\"updateDay\":17037,\"isSystem\":true},\"loop@mozilla.org\":{\"blocklisted\":false,\"description\":\"Web sharing for Firefox\",\"name\":\"Firefox Hello\",\"userDisabled\""
		":false,\"appDisabled\":false,\"version\":\"1.4.4\",\"scope\":1,\"type\":\"extension\",\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":17037,\"updateDay\":17037,\"isSystem\":true}},\"theme\":{\"id\":\"{972ce4c6-7e08-4474-a285-3208198ce6fd}\",\"blocklisted\":false,\"description\":\"\\xD0\\xA2\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\xBF\\xD0\\xBE \\xD1\\x83\\xD0\\xBC\\xD0\\xBE\\xD0\\xBB\\xD1\\x87\\xD0\\xB0\\xD0\\xBD\\xD0\\xB8\\xD1\\x8E\",\"name\":\""
		"\\xD0\\xA1\\xD1\\x82\\xD0\\xB0\\xD0\\xBD\\xD0\\xB4\\xD0\\xB0\\xD1\\x80\\xD1\\x82\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"48.0.2\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":17037,\"updateDay\":17037},\"activePlugins\":[{\"name\":\"Adobe Acrobat\",\"version\":\"11.0.0.379\",\"description\":\"Adobe PDF Plug-In For Firefox and Netscape 11.0.0\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\""
		"mimeTypes\":[\"application/pdf\",\"application/vnd.adobe.pdfxml\",\"application/vnd.adobe.x-mars\",\"application/vnd.fdf\",\"application/vnd.adobe.xfdf\",\"application/vnd.adobe.xdp+xml\",\"application/vnd.adobe.xfd+xml\"],\"updateDay\":15606},{\"name\":\"Adobe Acrobat\",\"version\":\"11.0.0.379\",\"description\":\"Adobe PDF Plug-In For Firefox and Netscape 11.0.0\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"application/pdf\",\"application/vnd.adobe.pdfxml\",\""
		"application/vnd.adobe.x-mars\",\"application/vnd.fdf\",\"application/vnd.adobe.xfdf\",\"application/vnd.adobe.xdp+xml\",\"application/vnd.adobe.xfd+xml\"],\"updateDay\":15606},{\"name\":\"VLC Web Plugin\",\"version\":\"2.1.3.0\",\"description\":\"VLC media player Web Plugin 2.1.3\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"audio/mpeg\",\"audio/x-mpeg\",\"video/mpeg\",\"video/x-mpeg\",\"video/mpeg-system\",\"video/x-mpeg-system\",\"audio/mp4\",\"audio/x-m4a\",\""
		"video/mp4\",\"application/mpeg4-iod\",\"application/mpeg4-muxcodetable\",\"video/x-m4v\",\"video/x-msvideo\",\"application/ogg\",\"video/ogg\",\"application/x-ogg\",\"application/x-vlc-plugin\",\"video/x-ms-asf-plugin\",\"video/x-ms-asf\",\"application/x-mplayer2\",\"video/x-ms-wmv\",\"video/x-ms-wvx\",\"audio/x-ms-wma\",\"application/x-google-vlc-plugin\",\"audio/wav\",\"audio/x-wav\",\"audio/3gpp\",\"video/3gpp\",\"audio/3gpp2\",\"video/3gpp2\",\"video/divx\",\"video/flv\",\"video/x-flv\",\""
		"application/x-matroska\",\"video/x-matroska\",\"audio/x-matroska\",\"application/xspf+xml\",\"audio/x-mpegurl\",\"video/webm\",\"audio/webm\",\"application/vnd.rn-realmedia\",\"audio/x-realaudio\",\"audio/amr\",\"audio/x-flac\"],\"updateDay\":16273},{\"name\":\"Google Update\",\"version\":\"1.3.35.301\",\"description\":\"Google Update\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"application/x-vnd.google.update3webcontrol.3\",\"application/"
		"x-vnd.google.oneclickctrl.9\"],\"updateDay\":18178},{\"name\":\"Java(TM) Platform SE 8 U231\",\"version\":\"11.231.2.11\",\"description\":\"Next Generation Java Plug-in 11.231.2 for Mozilla browsers\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"application/x-java-applet\",\"application/x-java-bean\",\"application/x-java-vm\",\"application/x-java-applet;version=1.1.1\",\"application/x-java-bean;version=1.1.1\",\"application/x-java-applet;version=1.1\",\""
		"application/x-java-bean;version=1.1\",\"application/x-java-applet;version=1.2\",\"application/x-java-bean;version=1.2\",\"application/x-java-applet;version=1.1.3\",\"application/x-java-bean;version=1.1.3\",\"application/x-java-applet;version=1.1.2\",\"application/x-java-bean;version=1.1.2\",\"application/x-java-applet;version=1.3\",\"application/x-java-bean;version=1.3\",\"application/x-java-applet;version=1.2.2\",\"application/x-java-bean;version=1.2.2\",\"application/x-java-applet;version=1.2.1"
		"\",\"application/x-java-bean;version=1.2.1\",\"application/x-java-applet;version=1.3.1\",\"application/x-java-bean;version=1.3.1\",\"application/x-java-applet;version=1.4\",\"application/x-java-bean;version=1.4\",\"application/x-java-applet;version=1.4.1\",\"application/x-java-bean;version=1.4.1\",\"application/x-java-applet;version=1.4.2\",\"application/x-java-bean;version=1.4.2\",\"application/x-java-applet;version=1.5\",\"application/x-java-bean;version=1.5\",\"application/x-java-applet;version"
		"=1.6\",\"application/x-java-bean;version=1.6\",\"application/x-java-applet;version=1.7\",\"application/x-java-bean;version=1.7\",\"application/x-java-applet;version=1.8\",\"application/x-java-bean;version=1.8\",\"application/x-java-applet;jpi-version=1.8.0_231\",\"application/x-java-bean;jpi-version=1.8.0_231\",\"application/x-java-vm-npruntime\",\"application/x-java-applet;deploy=11.231.2\",\"application/x-java-applet;javafx=8.0.231\"],\"updateDay\":18186},{\"name\":\"Java Deployment Toolkit "
		"8.0.2310.11\",\"version\":\"11.231.2.11\",\"description\":\"NPRuntime Script Plug-in Library for Java(TM) Deploy\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"application/java-deployment-toolkit\"],\"updateDay\":18186},{\"name\":\"Shockwave for Director\",\"version\":\"12.2.0.162\",\"description\":\"Adobe Shockwave for Director Netscape plug-in, version 12.2\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":true,\"mimeTypes\":[\"application/x-director\"]"
		",\"updateDay\":16678},{\"name\":\"Shockwave Flash\",\"version\":\"32.0.0.270\",\"description\":\"Shockwave Flash 32.0 r0\",\"blocklisted\":false,\"disabled\":false,\"clicktoplay\":false,\"mimeTypes\":[\"application/x-shockwave-flash\",\"application/futuresplash\"],\"updateDay\":18179}],\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.6\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-eme-adobe\":{\"version\":\"17\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\""
		"gmp-widevinecdm\":{\"version\":\"1.4.8.866\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}},\"activeExperiment\":{},\"persona\":null}}}", 
		EXTRARES, 
		"Url=https://prod.uxcrowd.ru/assets/images/uxcrowd-logo-green-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-tester-home/tester-profile", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/images/avatar-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-tester-home/tester-profile", ENDITEM, 
		"Url=https://prod.uxcrowd.ru/assets/images/burger-gray-mobile.svg", "Referer=https://prod.uxcrowd.ru/app-tester-home/tester-profile", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1571400505026\",\"eventData\":{\"sendTime\":1571400505026,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-e40Tt6OEBVFKm_Ocx0koZX6LhlhX3F5N_yHHKgTAaVAaEF5ukRlA4Vb1iD0KvMnbO3yiAItw0TIgUBZamOLqJxrCnxV3nltrdoCD\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive4*/

	web_add_header("X-XSRF-TOKEN", 
		"88068b3e-bc85-4b63-96bc-023120c54959");

	lr_think_time(11);

	web_custom_request("profile_3", 
		"URL=https://prod.uxcrowd.ru/api/v2/tester/profile", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://prod.uxcrowd.ru/app-tester-home/tester-profile", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"BodyBinary={\"id\":493253070,\"fio\":\"\\xD0\\xA4\\xD0\\xB0\\xD0\\xBC\\xD0\\xB8\\xD0\\xBB\\xD0\\xB8\\xD1\\x8F \\xD0\\x98\\xD0\\xBC\\xD1\\x8F \\xD0\\x9E\\xD1\\x82\\xD1\\x87\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xB2\\xD0\\xBE\",\"username\":\"test1testcom\",\"country\":\"\\xD0\\xA0\\xD0\\xBE\\xD1\\x81\\xD1\\x81\\xD0\\xB8\\xD1\\x8F\",\"paypalEmail\":null,\"zipcode\":null,\"city\":\"\\xD0\\x9C\\xD0\\xBE\\xD1\\x81\\xD0\\xBA\\xD0\\xB2\\xD0\\xB0\",\"income\":\"0\",\"familyStatus\":\"NOT_MARRIED\",\"kids\""
		":\"NONE\",\"emailNotification\":true,\"gender\":\"MALE\",\"birthday\":\"12.04.1983\",\"education\":\"START\",\"socialStatus\":\"UNEMPLOYED\"}", 
		LAST);

	lr_end_transaction("fill_profile",LR_AUTO);

	/*Connection ID 1 received buffer WebSocketReceive5*/

	lr_think_time(8);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://prod.uxcrowd.ru/app-tester-home/tester-profile\"}}", 
		"IsBinary=0", 
		LAST);

	return 0;
}