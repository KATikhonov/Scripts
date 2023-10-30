Action()
{

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("webtours", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=118", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("X-Client-Data", 
		"CIW2yQEIo7bJAQipncoBCIXxygEIk6HLAQiFoM0BCNWxzQEI3L3NAQiRys0BCLnKzQEIt9bNAQin2M0BCOHazQEIrtvNAQik3M0BCO3dzQEImt7NAQjO380BCPnA1BUY9snNAQ==");

	web_custom_request("v1_GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\t\\x10\\x82\\xB7\\xEB\\xA8\\x06 \\x0E\ng\\x08\\x0F\\x10\\x01 \\x0E2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x01\ng\\x08\\x10 \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xF8\\xB6\\xEB\\xA8\\x06 \\x0E\ng\\x08\\x15 \\x0E2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x19\\x10\\xA2\\xAC\\x90\\xA9\\x06 \\x0E\ng\\x08\\x1B \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\t\\x08\\x1E\\x10\\xC7\\xE8\\x81i \\x0E\\x18\\x06*\\x02ru2\\x02\\x08\\x06", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"cffjjlhdhdcmaailglcedackabgpjbfa,dldcbakcjliccckkmfjcblhciilpdcil,ehkhpgapnaalmmbfkiodemgfljmiepih,eifflpnfppfheimpmmagplbanbceajjn,gbofnbeakdognkanffmpldbjgkblljkh,gfmbgpjobmhdlclmnpbcckcikbhmheme,hjfdndbcpceonfinifcggojahlhmindo,honbkcpgfoghpdpjndjkfdjbpihbfchb,jangaedeekciafhlanphhnalogmhefmo,jcjbcgfmgdinmcljnafppclcmckchoca,kgonfdfnfmpilaopkkobcppchpgidojo,mgndgikekgjfcpckkfioiadnlibdjbkf,mpalelnihbfcohbpniljacigfgjmpodb,ocifcklkibdehekfnmflempfgjhbedch,oihiaelacocfiabgpkdggodoofcmhcad");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-118.0.5993.118");

	lr_think_time(9);

	web_custom_request("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=118.0.5993.118&lang=ru&acceptformat=crx3,puff&x=id%3Dcffjjlhdhdcmaailglcedackabgpjbfa%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Ddldcbakcjliccckkmfjcblhciilpdcil%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D0%2526dr%253D1&x="
		"id%3Dehkhpgapnaalmmbfkiodemgfljmiepih%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D0%2526dr%253D1&x=id%3Deifflpnfppfheimpmmagplbanbceajjn%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Dgbofnbeakdognkanffmpldbjgkblljkh%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Dgfmbgpjobmhdlclmnpbcckcikbhmheme%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Dhjfdndbcpceonfinifcggojahlhmindo%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D0%2526dr%253D1&x=id%3Dhonbkcpgfoghpdpjndjkfdjbpihbfchb%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Djangaedeekciafhlanphhnalogmhefmo%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Djcjbcgfmgdinmcljnafppclcmckchoca%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Dkgonfdfnfmpilaopkkobcppchpgidojo%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Dmgndgikekgjfcpckkfioiadnlibdjbkf%26v%3D0.0.0.0%26installedby%3Dinternal%26uc&x=id%3Dmpalelnihbfcohbpniljacigfgjmpodb%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x=id%3Docifcklkibdehekfnmflempfgjhbedch%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D1&x="
		"id%3Doihiaelacocfiabgpkdggodoofcmhcad%26v%3D0.0.0.0%26installedby%3Dinternal%26uc%26ping%3Dr%253D1%2526e%253D0%2526dr%253D1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	lr_think_time(6);

	web_custom_request("nservice", 
		"URL=http://192.168.1.149:7678/nservice/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("ga.js", 
		"URL=https://ssl.google-analytics.com/ga.js", 
		"Method=GET", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_cookie("HSID=AMxuiZTtxnaOhl3RM; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AfJdeRaCljYW9qu_W; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=9CiJfZFYlW_buQOU/AW9HGPwKeqYzf7_5j; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5pOKDIrMVZz1JtB8u2uSZbsRwZSe5avGT38oSTW1zPXHqoWc9_wNrImdf7a0q3uSyWlU9-CSfNeNV7b1hqGxX34MhLNVsjqxBUewoWPh5B7JFfPOYHo0UGjlTnr2dcQm4w0HhrMU-ByuK8TAKT6NpmEuDeCUh7FjFnZcYWi1PcW6xWTto; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIqpkB; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=o.groups.google.com|o.mail.google.com|s.RU|s.youtube:bQi8bfT7u3o9nsoE3X0B6kMhWFgPHMQ_ksQeuR_X2IwsCNbi6iYYYUOM8xDYHdYi9LK7sw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-1PLSID=o.groups.google.com|o.mail.google.com|s.RU|s.youtube:bQi8bfT7u3o9nsoE3X0B6kMhWFgPHMQ_ksQeuR_X2IwsCNbiV4kShscLIDh6uEbU0ErNFg.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=o.groups.google.com|o.mail.google.com|s.RU|s.youtube:bQi8bfT7u3o9nsoE3X0B6kMhWFgPHMQ_ksQeuR_X2IwsCNbi-PAHhp4o31mRo1XAD06HKA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:kNOjMMKG0LCkIeJz8pedfms8qHThZoJnJlyXplyu2U7Hb7ReZ3PRyIM_zXVgRz76YA7T5oONhVUaWLrnzoWodAYZaCn7FQ:srt7_RzegLSOBMg6; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=Cy2qIcXnIoueFVG3lQ-OheWWgHkpUp3-dSLHZ934Hyye686i83l-JtuBwYeJsY870LHVgPKNxuCeCIj23vw5x3uhnWEKJAqn36btMXi2ZQJxKcuYrWq4STqhFFeq2bkWD-E5v_amT4poC1YufCgH9iMSMMbbqqPFPV10V4qMQ00zJnoT2FeDaK4LJvu_ZveVP9FFW8FX2XtTqjejdtfIs6iCuiVBvw0XEJY55l-jdGdvAPeDXmn7cSVg0LKAekdTNC9GeGod76Mg5fi8DVgx2IysIwSQlTTHXw; DOMAIN=accounts.google.com");

	web_add_cookie("SID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwlvs9JvsM_-TEWB96If7D5Rw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwlGtWzXvqrk4_S5hBKdlxTLg.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwltXnZ3h_MFQXLMM_q2YPpWw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEBNiGH7gWsJioZkFZMR2BBByuvAuYLGzMZRJG52YGGG-o9VmPYsp2JafIkQSMUqCohEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEBNiGH7gWsJioZkFZMR2BBByuvAuYLGzMZRJG52YGGG-o9VmPYsp2JafIkQSMUqCohEAA; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=ACA-OxMCchrnbB5AZCKr4JbukTDsRgXcruttcmp4qhkgNbP4Q_rpDv9KNScWdW1f2KGKBgXWHw; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=ACA-OxNocBceUv9pGlS9ucI2ROBg19XjPjrJopFE5LV91xneFHsQkBRRPMx4koskZQGWUL-3EA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=ACA-OxOn-rvWMhMcEmAxuou-UycDH2lrsVBZSTf5sNfpCiFOp82iIyIOaKPuXPa22WF7PQlnQA; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"chrome-extension://cfhdojbkjhnklbpkdaibdccddilifddb");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("stats", 
		"URL=https://ipm.adblockplus.dev/api/stats", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"user\":{\"type\":\"customer\",\"platforms\":[{\"platform\":\"web\",\"active\":\"true\"}],\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\"app_version\":\"3.20\",\"command_library_version\":1,\"install_type\":\"normal\"}},\"device\":{\"type\":\"device\",\"device_id\":\"9be15fd2-9eb5-4f0e-b1eb-c84bf7caa9db\",\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\""
		"app_version\":\"3.20\",\"command_library_version\":1,\"install_type\":\"normal\",\"blocked_total\":0,\"license_status\":\"inactive\"}},\"events\":[]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("header.html", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(53);

	web_custom_request("forecast", 
		"URL=https://services.gismeteo.ru/inform-service/inf_chrome/forecast/?city=5089&lang=en", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t18.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("JSFormSubmit.js", 
		"URL=http://localhost:1080/WebTours/JSFormSubmit.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t19.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,oimompecagnajdejgnnjijobebaeigek,neifaoindggfcjicffkgpmnlppeffabd,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,llkgjffcdpffmhiakmfcdcblohccpfmo,giekcmmlnklenlaomppkphknjmnnpneh,laoigpblnllgcgjnjnllmfolckpjlhki,khaoiebndkojlmppeemjhbpbandiljpe,ehgidpndbllacpjalkiimkbadgjfnnmc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jamhcnnkihinmdlkakkaopbjbbcngflc,eeigpngbgcognadeebkilcpcaedhellh,"
		"hnimpnehoodheedghdeeijklkeaacbdc,ggkkehgbnfjpeggfpleeakpidbkibbmn,hfnkpimlhhgieaddgfemjhofmfblmnib,efniojlnjndmcbiieegkicadnoecjjef,jflookgnkcckhobaglndicnbbgbonegd,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.118");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:4oFCSajoBXjnQf3SRSLISm1fjmvvghTLnWWkAS2gKj8&cup2hreq=ba30fa4284be720efa8427881d18fa685e983cf6b1d2b203f0f44290fdf8b284", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{a47aa67b-9237-478c-8c1d-6c55103571f9}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\""
		"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{88a4409d-cae2-4ebe-83f9-fd394bb71cba}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\""
		"{cf0a6362-b8fe-4d63-b5f6-fa7e9966b5c6}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21m9@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9ba8ab825d1ec954a636adc66da9e9dd784096ce83182054ac288daf50c04b46\"}]},\"ping\":{\"ping_freshness\":\"{61c19d8a-56c2-494c-8684-343ce63e0d6f}\",\"rd\":6142},\"updatecheck\":{},\""
		"version\":\"1.0.2512.1\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{73609c2c-12b7-4afd-8e36-ddf5428d77aa}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a248a93f9e93263df26dcb397251de32d6a38c77fbe7426a6a6e25850789d759\"}]},\"ping\":{\"ping_freshness\":\"{43008dbf-8e21-45ac-b548-135c790ce242}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"418\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\""
		"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{404f1eeb-5150-4526-8c9e-c4a412dcd880}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{8540cf2c-991b-4f5d-bbb4-de46c9b4f234}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{a9a668fc-13e6-468f-9a45-a40caf0dcc69}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},"
		"{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{e58e23bb-8819-46df-a131-0135696d3cb9}\",\"rd\":6142},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{e9687958-59c7-432f-8c8d-84fe14fc80c5}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{d1aeab9d-703f-4bc9-ae0a-b9aa5a41c1ac}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{71b7b1c0-2388-4f0c-a784-aac7055aca8c}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\""
		"ping_freshness\":\"{383a6bf1-35f5-4eb3-8fb0-81553673cfcf}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{d241bb0f-b3e3-4dba-8f69-95ec9e75a601}\",\"rd\":6142},\"updatecheck\":{},"
		"\"version\":\"2020.11.2.164946\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{12bb32a8-5877-4e0b-9a45-b5933f997d2b}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9"
		"/1a0f:2133@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{9a8f8356-eb72-403c-8b40-ef48653059f9}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0869ca0c9d016e2ae413f47d007531f03a5ccc63df687fef9a2af46ef5ee26eb\"}]},\"ping\":{\"ping_freshness\":\"{9d05910e-41e5-45cc-9226-5df5697a8d88}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"8323\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{3b5631de-d97c-4ec4-87e8-54c579d9f260}\",\""
		"rd\":6142},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{24ecdcb4-92d6-4c4b-9912-9e0a82c82a3a}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"3001\"},{\"appid\":\""
		"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{a464b417-63ea-4d6c-aa37-11394687e816}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\""
		":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6128,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.316c987ccb9e429256c3d174c0fd97842ea47b9ed729064ecbecbbe17acc9858\"}]},\"ping\":{\"ping_freshness\":\"{a1624291-93de-4e99-a903-391f92a27b3f}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2023.10.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true}"
		",\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{f0994e62-09ba-4ca3-a653-c710a5893650}\",\"sessionid\":\"{b6f65b26-9dff-4841-b2ae-0f72b71f04e1}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\":\""
		"118.0.5993.118\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_custom_request("ChVDaHJvbWUvMTE4LjAuNTk5My4xMTgSIAlN-SI5wUW4MBIFDeeNQA4SBQ3OQUx6IUnhNcH6RPDw", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE4LjAuNTk5My4xMTgSIAlN-SI5wUW4MBIFDeeNQA4SBQ3OQUx6IUnhNcH6RPDw?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		LAST);

	lr_think_time(24);

	lr_start_transaction("1_LOGIN");

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":24324,\"downloaded\":26692,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8324\",\"previousversion\":\"8323\",\"total\":26692,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/"
		"adxvgwt5ixnlvr3z3sgtwmqrdy7q_8324/hfnkpimlhhgieaddgfemjhofmfblmnib_8324_all_ado2nay7copl2w2gysut7vip2mhq.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.860288505f461cc61910820cfa89e4705876813a4ddbfeaa6de56e42da57b212\",\"nextversion\":\"8324\",\"previousfp\":\"1.0869ca0c9d016e2ae413f47d007531f03a5ccc63df687fef9a2af46ef5ee26eb\",\"previousversion\":\"8323\"}],\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.860288505f461cc61910820cfa89e4705876813a4ddbfeaa6de56e42da57b212\"}]},\"version\":\"8324\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\""
		"{147b368d-b36e-4b3f-b5c7-d3c29a565561}\",\"sessionid\":\"{b6f65b26-9dff-4841-b2ae-0f72b71f04e1}\",\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(17);

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"Body=userSession=137577.385500203HAHzzDzpHzzzzzzHtctfQpicAz&username=Bob&password=Big&login.x=53&login.y=12&JSFormSubmit=on", 
		LAST);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t26.inf", 
		LAST);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t27.inf", 
		LAST);

	lr_think_time(18);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t28.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"event\":[{\"download_time_ms\":4046,\"downloaded\":151866,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"750\",\"previousversion\":\"0.0.0.0\",\"total\":151866,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/"
		"ad4ams6gloub7dj7hfl4aqqqceza_750/efniojlnjndmcbiieegkicadnoecjjef_750_all_iweqpt4piunyqayubcctzqnzs4.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.bead787cfbf33997b1afcd7910fed817f43c1bf44cea828b89a22cbb2f6538ff\",\"nextversion\":\"750\",\"previousversion\":\"0.0.0.0\"}],\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.bead787cfbf33997b1afcd7910fed817f43c1bf44cea828b89a22cbb2f6538ff\"}]},\"version\":\"750\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\""
		":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{71854319-f50b-4c15-ade8-6b8f17d8b46f}\",\"sessionid\":\"{b6f65b26-9dff-4841-b2ae-0f72b71f04e1}\",\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("1_LOGIN",LR_AUTO);

	lr_start_transaction("2_EXIT");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(29);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("2_EXIT",LR_AUTO);

	return 0;
}