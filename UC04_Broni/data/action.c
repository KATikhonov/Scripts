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
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=118", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_think_time(6);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0cwy5GMM6QfizCgYIARAAGAwSNwF-L9IrVwNYagkgnayQbEV5sdFKfQO9K4STfWdXafkbYnxUVjQzJLliGC1jxBHCQkN1l0BNP7o&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"cffjjlhdhdcmaailglcedackabgpjbfa,dldcbakcjliccckkmfjcblhciilpdcil,ehkhpgapnaalmmbfkiodemgfljmiepih,eifflpnfppfheimpmmagplbanbceajjn,gbofnbeakdognkanffmpldbjgkblljkh,gfmbgpjobmhdlclmnpbcckcikbhmheme,hjfdndbcpceonfinifcggojahlhmindo,honbkcpgfoghpdpjndjkfdjbpihbfchb,jangaedeekciafhlanphhnalogmhefmo,jcjbcgfmgdinmcljnafppclcmckchoca,kgonfdfnfmpilaopkkobcppchpgidojo,mgndgikekgjfcpckkfioiadnlibdjbkf,mpalelnihbfcohbpniljacigfgjmpodb,ocifcklkibdehekfnmflempfgjhbedch,oihiaelacocfiabgpkdggodoofcmhcad");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Goog-Update-Updater", 
		"chromecrx-118.0.5993.118");

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
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"bfegaehidkkcfaikpaijcdahnpikhobf,cfhdojbkjhnklbpkdaibdccddilifddb,ghbmnnjooekpmoecnnnilnnbdlolhkhi,gighmmpiobklfepjocnamgkkbiglidom,jlhmfgmfgeifomenelglieieghnjghma,laddjijkcfpakbbnnedbhnnciecidncp,mihcahmgecmbnbcchbopgniflfhgnkff,nmmhkkegccagdldgiimedpiccmgmieda");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:aq7Jf-wm01q-vo8Fna3vn63EaEvAe9UdU9SmCA2ASRQ&cup2hreq=01cb2281bebfb4b9415bf0b20936eddfe9c253e2e0bcdbd7e717445be5f98ec9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"bfegaehidkkcfaikpaijcdahnpikhobf\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.8\"}]},\"ping\":{\"ping_freshness\":\"{e27036d8-b913-4c8d-81b8-19c8f91bc930}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3.1.8\"},{\"appid\":\"cfhdojbkjhnklbpkdaibdccddilifddb\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.71ebb5b7c402bd3ad92b0c687a5d17f7ff0810c3bdfba59c39de65cf9daa1ca1\"}]},\"ping\":{\"ping_freshness\":\"{35b01712-5c0f-4ec4-bc59-38769b721fcb}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3.20\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"external\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":"
		"\"1.b5bb8d8da998d1496bb46c128a152e907e51bffc3d9cc7d44765e2260984cdcc\"}]},\"ping\":{\"ping_freshness\":\"{8c1c070f-e9bc-4a47-8889-a4f5572282d3}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.69.0\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.5.12.0\"}]},\"ping\":{\"ping_freshness\":\"{7feb344e-9d84-4059-8c69-0c0b6b31c87e}\",\"rd\":6143},\"updatecheck"
		"\":{},\"version\":\"5.12.0\"},{\"appid\":\"jlhmfgmfgeifomenelglieieghnjghma\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.4\"}]},\"ping\":{\"ping_freshness\":\"{b8c0e716-489e-4861-80cb-e1c51f143a36}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2.0.4\"},{\"appid\":\"laddjijkcfpakbbnnedbhnnciecidncp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"2.8.24.14\"}]},\"ping\":{\"ping_freshness\":\"{fc364e59-4a9f-4c8c-bf65-229a62153c47}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"8.24.14\"},{\"appid\":\"mihcahmgecmbnbcchbopgniflfhgnkff\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.4.4.0\"}]},\"ping\":{\"ping_freshness\":\"{1f93ad81-07da-4bc7-88dd-306a5fa11886}\",\"rd\":6143},\"updatecheck\":{},\"version\""
		":\"4.4.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"other\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{e8256ef7-470e-4f30-a88b-7db08c4a1f13}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\""
		":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{245210fb-8899-4847-8249-5706300d977b}\",\"sessionid\":\"{ce4b2f50-5060-422f-8b8a-e6af0dee2f37}\",\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_revert_auto_header("X-Goog-Update-Updater");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(4);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Client-Data", 
		"CIW2yQEIo7bJAQipncoBCIXxygEIk6HLAQiFoM0BCNWxzQEI3L3NAQiRys0BCLnKzQEIt9bNAQin2M0BCOHazQEIrtvNAQik3M0BCO3dzQEImt7NAQix3s0BCM7fzQEI+cDUFRj2yc0B");

	web_custom_request("v1_GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1_GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\t\\x10\\x82\\xB7\\xEB\\xA8\\x06 \\x0E\ng\\x08\\x0F\\x10\\x01 \\x0E2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x01\ng\\x08\\x10 \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xF8\\xB6\\xEB\\xA8\\x06 \\x0E\ng\\x08\\x15 \\x0E2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x19\\x10\\xA2\\xAC\\x90\\xA9\\x06 \\x0E\ng\\x08\\x1B \\x0E2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\t\\x08\\x1E\\x10\\xC7\\xE8\\x81i \\x0E\\x18\\x06*\\x02ru2\\x02\\x08\\x06", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(18);

	web_custom_request("forecast", 
		"URL=https://services.gismeteo.ru/inform-service/inf_chrome/forecast/?city=5089&lang=en", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("JSFormSubmit.js", 
		"URL=http://localhost:1080/WebTours/JSFormSubmit.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t13.inf", 
		LAST);

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t14.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t15.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,efniojlnjndmcbiieegkicadnoecjjef,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.118");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:P3QTLw-4K9G6klxxcVchddVT_K_xFZSOsrABJMnhJ-Y&cup2hreq=e6b494f8dbc8abc5b2b7fb0f897a7b1feb163677fb98ffcddc020ce481d4faef", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{92222459-b646-4771-8f6c-d8fcecd9a1ee}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21m9@0.025\",\"cohortname\":\"Auto\",\"enabled"
		"\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9ba8ab825d1ec954a636adc66da9e9dd784096ce83182054ac288daf50c04b46\"}]},\"ping\":{\"ping_freshness\":\"{e3b9409f-4d5c-485f-8b13-3b9e0373500f}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.2512.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\""
		"{a5867bd7-3b82-439d-b30b-88f9bc49391e}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{e1885ba7-098d-4b73-aa56-8f262e804db9}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale"
		"\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{352c06b1-60ee-4ab3-acb2-2211c55bf1b9}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a248a93f9e93263df26dcb397251de32d6a38c77fbe7426a6a6e25850789d759\"}]},\"ping\":{\"ping_freshness\":\"{5b35c11d-60aa-44f7-b4cd-f66896345afc}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"418\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{cda04f26-eb1e-41d2-902e-92fe0a432afe}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{0f8e3be6-524e-497b-8578-4217f294b597}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\""
		"{51762ba4-186e-4031-be52-3fe293ff0c8b}\",\"rd\":6143},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.860288505f461cc61910820cfa89e4705876813a4ddbfeaa6de56e42da57b212\"}]},\"ping\":{\"ping_freshness\":\"{5b52d9aa-d775-417d-b2eb-c88c64ca7323}\",\"rd\":6143},\"updatecheck\":{},\""
		"version\":\"8324\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{0444cd9b-4fb2-4aab-9246-498aaadc67c4}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname"
		"\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{fcba5c3f-40bc-4918-a8dc-c0e1d6e53e4b}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{ebba807e-5475-47c9-b208-44c1c51d9caf}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{74b2d9dc-d567-4a07-8726-ccfcd57c7cd5}\",\"rd\":6143},\"updatecheck\":{},\""
		"version\":\"3001\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.bead787cfbf33997b1afcd7910fed817f43c1bf44cea828b89a22cbb2f6538ff\"}]},\"ping\":{\"ping_freshness\":\"{6908983c-4a27-4fda-aca4-493c3a96071f}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"750\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{0da4dfa6-6bf7-45af-838f-7fbd1576bdbf}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{d30b660f-a080-4378-a359-b6717f47a361}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a84373e7-08f4-4c83-91d3-6e8f11e6bc8f}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\""
		"{7bca6a4f-fbbb-4841-8c64-69bceaa794b4}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{5253420f-658c-43fc-a295-935cede96251}\",\"rd\":6143},\"updatecheck\":{},\"version\":"
		"\"9.49.1\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{6e57ac0a-7884-4be2-8e5e-2f0b7077573a}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\""
		"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6128,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.316c987ccb9e429256c3d174c0fd97842ea47b9ed729064ecbecbbe17acc9858\"}]},\"ping\":{\"ping_freshness\":\"{17c49022-558b-4f6c-81e7-5bd36f395d04}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\""
		"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{8f05a48d-ee1c-48c1-b449-b2722786d53c}\",\"sessionid\":\"{ec69d630-d681-46bc-9aa3-f7e8fbf57490}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\""
		"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

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
		"Snapshot=t17.inf", 
		LAST);

	web_add_cookie("COMPASS=gmail="
		"CsUBAAlriVf-RmXiXp2nULoWwHBtoMDrRyz9lo1D9XhnVqJMG4IL3haS6De8Z_ERBcTzg8IVyCTej8_j2_eXhSmJPz3KmvwD2_UmbeHvjkH1BTH4YulOb_U420zXRWPVc1uKmwCfOz1erg-mXdnyP_zCvJtgnTkb4hSBq9TbyPlJItHhFzv7eLwcwOXUWNqCLssimUIZnoeXZeOcxyvtynhdSqsgaCQHT9P4yoo_O74C1Ruduo8CmERHnWdR61sgyEUo4t5_bioQ0f_sqQYa_AEACWuJV5lCdol1YipijBc-NuzhTjzaiwVeWiRnjb6ar_zZOmd7HLcHp6KRBWSJ_agLuXxTqsi2OC0PxByeWboBUD3slTfITzupcZKdFIr6orJt0FxzsA1cU5BLS4b5X9E3HRLyf0Y-eVdRK26YEr237H_vvMhdK1M7F6m_Jr4wckYtOegJsQf5bbaIKTqxtBkDapyYZDcCnvaX5azrWPtE_N0pND-Dsw"
		"sFQgWY8R4BuI9vm66Qd_WeoTlCqw-ibIECURxgtf_BQya7qvLSZhaDDpZc4ZsVVVOaatGAk7rYpVJmsLzUyPN1sLDznLSbgz904AVy6Rde8cvTzM0wAQ:gmail_ps="
		"CrEBAAlriVdzbKl3iKn0gRwFJ3zhj3X2xdxp5ihoZNcY2xLDi8lCyMSqJbxj8DhhoXEEFzErj46a2Vb3XhOfbpuvWutOFE50Wo_gt43_cvNV-sPA-9fQNwY3duFIOJo00F9RzcDEIBn8vOSn1SHqZj5Z0SlX2ktXmEHYm4ANzFyp6sExH7qjW-0d-YFUFZLPIwiPkAMSJZPozNVlp5i-oFDYMxSpBm8uq64bK8JhHUnPkWaYEOLE6akGGugBAAlriVcSYdQq1Ft3TjedgTIB-YzoKvZKo4ht6ci0ALOa1ZEtKmeFNyO612GZ0R9OYyyFVhYBH7qIyi4m6F-WC3JfO1QPRJxHSGoIpCDxAXNLtzyvXqvqHDA3gdhvZm8sU9FvK-z_KBVlYnrXejF23rocbcJNfcPI6Rh8aDm7VZchMTT07bW4oPrd1uFWiIeMgMM3_q6wwXuJHJ1g0NJkoat7tqQL-wLAhRhfdwiBfTYtLzgaAdSwOVfLyJ"
		"SZbxzZN2S7wXeESabYecHnwmtzuA99VdPojri10wcvwl5_xaqm-MtoBwyA_DAB; DOMAIN=mail.google.com");

	web_add_cookie("HSID=AMxuiZTtxnaOhl3RM; DOMAIN=mail.google.com");

	web_add_cookie("SSID=AfJdeRaCljYW9qu_W; DOMAIN=mail.google.com");

	web_add_cookie("APISID=9CiJfZFYlW_buQOU/AW9HGPwKeqYzf7_5j; DOMAIN=mail.google.com");

	web_add_cookie("SAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-1PAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-3PAPISID=Ra38DcI-UNB7zKYT/A_7_wURRpJ7clTgVw; DOMAIN=mail.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIqpkB; DOMAIN=mail.google.com");

	web_add_cookie("__Host-GMAIL_SCH=nsl; DOMAIN=mail.google.com");

	web_add_cookie("NID=511=Cy2qIcXnIoueFVG3lQ-OheWWgHkpUp3-dSLHZ934Hyye686i83l-JtuBwYeJsY870LHVgPKNxuCeCIj23vw5x3uhnWEKJAqn36btMXi2ZQJxKcuYrWq4STqhFFeq2bkWD-E5v_amT4poC1YufCgH9iMSMMbbqqPFPV10V4qMQ00zJnoT2FeDaK4LJvu_ZveVP9FFW8FX2XtTqjejdtfIs6iCuiVBvw0XEJY55l-jdGdvAPeDXmn7cSVg0LKAekdTNC9GeGod76Mg5fi8DVgx2IysIwSQlTTHXw; DOMAIN=mail.google.com");

	web_add_cookie("SID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwlvs9JvsM_-TEWB96If7D5Rw.; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-1PSID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwlGtWzXvqrk4_S5hBKdlxTLg.; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-3PSID=cQi8bfFZCHTzXQB_ea9oJ2F6eMgD5_V9wT4UgOMuoZrMeKwltXnZ3h_MFQXLMM_q2YPpWw.; DOMAIN=mail.google.com");

	web_add_cookie("OSID=cQi8bTXcG4H-Jpfl-_IGhb3QC2CeG1l7D5981AKVeubat0YIObOitD5TgZAeBALtC80qLw.; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-OSID=cQi8bTXcG4H-Jpfl-_IGhb3QC2CeG1l7D5981AKVeubat0YIdpr6gf4v0LEsLWRTTMga7Q.; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEBNiGH7gWsJioZkFZMR2BBByuvAuYLGzMZRJG52YGGG-o9VmPYsp2JafIkQSMUqCohEAA; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEBNiGH7gWsJioZkFZMR2BBByuvAuYLGzMZRJG52YGGG-o9VmPYsp2JafIkQSMUqCohEAA; DOMAIN=mail.google.com");

	web_add_cookie("SIDCC=ACA-OxNoItM13e_lwN_RpDyVXgVeeX8Bwd9HDdMIPiiuzJcjO5a-okMGATws0cxjahwsZlKnFw; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-1PSIDCC=ACA-OxNdUzoPndrzZhRq7hSTjs4BaJrSM4FL7vPSelbJYSbeiL665G2b_aTjeyNku8SbSXBCJw; DOMAIN=mail.google.com");

	web_add_cookie("__Secure-3PSIDCC=ACA-OxNcOE_ENfSg26Ma7EuTlcOPtPzNvP6lsabPNjjn1JMxkrnXWvOIhBSlm1gpNV-pEDTnsA; DOMAIN=mail.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Client-Data", 
		"CIW2yQEIo7bJAQipncoBCIXxygEIk6HLAQiFoM0BCLnKzQEY9snNAQ==");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(4);

	web_custom_request("atom", 
		"URL=https://mail.google.com/mail/feed/atom?zx=gmc928019675159", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("UC04_Home_page");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(16);

	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("header.html_2", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC04_Home_page",LR_AUTO);

	lr_start_transaction("UC04_02_Login");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(49);

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"Body=userSession=137577.589226407HAHzztHpctfiDDDDtctfQpiiDtHf&username=Bob&password=Big&login.x=62&login.y=9&JSFormSubmit=on", 
		LAST);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t26.inf", 
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
		"Snapshot=t27.inf", 
		LAST);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t28.inf", 
		LAST);

	lr_think_time(12);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t29.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("UC04_02_Login",LR_AUTO);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	lr_think_time(14);

	web_custom_request("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTE4LjAuNTk5My4xMTgaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDZsxMaAhgJWj-fSiIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQqJ0NGgIYCa2OHykiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENKUDRoCGAmcvJIOIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDdoAcaAhgJJu5FhSIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0TUaAhgJ65QdfyIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQmOABGgIYCdQBRqsiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDAFBoCGAme5JDwIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCu_gEaAhgJbTmdtyIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ6eMNGgIYCUDAnWkiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIIeGgIYCYLfuT4iBCABIAIoASICCAM=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t31.inf", 
		LAST);

	lr_start_transaction("UC04_03_Proverka_broni");

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

	lr_think_time(30);

	web_custom_request("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t35.inf", 
		LAST);

	lr_think_time(18);

	web_custom_request("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t36.inf", 
		LAST);

	web_custom_request("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t37.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t38.inf", 
		LAST);

	lr_end_transaction("UC04_03_Proverka_broni",LR_AUTO);

	return 0;
}