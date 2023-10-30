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

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(13);

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=118", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

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
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0cwy5GMM6QfizCgYIARAAGAwSNwF-L9IrVwNYagkgnayQbEV5sdFKfQO9K4STfWdXafkbYnxUVjQzJLliGC1jxBHCQkN1l0BNP7o&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"bfegaehidkkcfaikpaijcdahnpikhobf,cfhdojbkjhnklbpkdaibdccddilifddb,ghbmnnjooekpmoecnnnilnnbdlolhkhi,gighmmpiobklfepjocnamgkkbiglidom,jlhmfgmfgeifomenelglieieghnjghma,laddjijkcfpakbbnnedbhnnciecidncp,mihcahmgecmbnbcchbopgniflfhgnkff,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_auto_header("X-Goog-Update-Updater", 
		"chromecrx-118.0.5993.118");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:cXlDzvGBPh4afp4F_TOLcXkAmeJ9BNcDMir5oqGPjIQ&cup2hreq=b112c13a585cb41901b13566ee24a27e225246497590072aff51c772ee14e60f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"bfegaehidkkcfaikpaijcdahnpikhobf\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.8\"}]},\"ping\":{\"ping_freshness\":\"{11be0f64-2435-4f53-b1ac-dd64bbd98243}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3.1.8\"},{\"appid\":\"cfhdojbkjhnklbpkdaibdccddilifddb\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.71ebb5b7c402bd3ad92b0c687a5d17f7ff0810c3bdfba59c39de65cf9daa1ca1\"}]},\"ping\":{\"ping_freshness\":\"{4a19e876-bd32-4748-9a17-5ac041fee266}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3.20\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"external\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":"
		"\"1.b5bb8d8da998d1496bb46c128a152e907e51bffc3d9cc7d44765e2260984cdcc\"}]},\"ping\":{\"ping_freshness\":\"{b1f4f775-3ac3-4021-921c-3f41f0cfa833}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.69.0\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.5.12.0\"}]},\"ping\":{\"ping_freshness\":\"{b7e256b2-1689-44eb-98cb-027630a51493}\",\"rd\":6143},\"updatecheck"
		"\":{},\"version\":\"5.12.0\"},{\"appid\":\"jlhmfgmfgeifomenelglieieghnjghma\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.4\"}]},\"ping\":{\"ping_freshness\":\"{d2d1d9ec-0bdc-415e-a57d-3bcb346667ed}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2.0.4\"},{\"appid\":\"laddjijkcfpakbbnnedbhnnciecidncp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"2.8.24.14\"}]},\"ping\":{\"ping_freshness\":\"{b3e1cd5c-4df7-4ed2-b438-012e31c011ef}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"8.24.14\"},{\"appid\":\"mihcahmgecmbnbcchbopgniflfhgnkff\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.4.4.0\"}]},\"ping\":{\"ping_freshness\":\"{f41f26d0-3366-45d1-afae-adc0709d4efb}\",\"rd\":6143},\"updatecheck\":{},\"version\""
		":\"4.4.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"other\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{9585e86e-a002-4708-93a3-087b77bc3a2a}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\""
		":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{16387845-b57b-4b03-91fb-34f03f85473c}\",\"sessionid\":\"{3faba12b-aed5-4729-a0dc-7e38d43d1468}\",\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"cffjjlhdhdcmaailglcedackabgpjbfa,dldcbakcjliccckkmfjcblhciilpdcil,ehkhpgapnaalmmbfkiodemgfljmiepih,eifflpnfppfheimpmmagplbanbceajjn,gbofnbeakdognkanffmpldbjgkblljkh,gfmbgpjobmhdlclmnpbcckcikbhmheme,hjfdndbcpceonfinifcggojahlhmindo,honbkcpgfoghpdpjndjkfdjbpihbfchb,jangaedeekciafhlanphhnalogmhefmo,jcjbcgfmgdinmcljnafppclcmckchoca,kgonfdfnfmpilaopkkobcppchpgidojo,mgndgikekgjfcpckkfioiadnlibdjbkf,mpalelnihbfcohbpniljacigfgjmpodb,ocifcklkibdehekfnmflempfgjhbedch,oihiaelacocfiabgpkdggodoofcmhcad");

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
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_revert_auto_header("X-Goog-Update-Updater");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(29);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t9.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t10.inf", 
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
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("JSFormSubmit.js", 
		"URL=http://localhost:1080/WebTours/JSFormSubmit.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("forecast", 
		"URL=https://services.gismeteo.ru/inform-service/inf_chrome/forecast/?city=5089&lang=en", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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
		"Snapshot=t14.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,giekcmmlnklenlaomppkphknjmnnpneh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,llkgjffcdpffmhiakmfcdcblohccpfmo,kiabhabjdbkjdpjbpigfodbdjmbglcoo,laoigpblnllgcgjnjnllmfolckpjlhki,jflookgnkcckhobaglndicnbbgbonegd,efniojlnjndmcbiieegkicadnoecjjef,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,"
		"khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,eeigpngbgcognadeebkilcpcaedhellh,ehgidpndbllacpjalkiimkbadgjfnnmc,neifaoindggfcjicffkgpmnlppeffabd,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.118");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:px97nP5X4Jk1yHS5vo0craZTDVrPXDHGRElLMWwypao&cup2hreq=6cf3467c1e468a65e15d62002f33cb46eff4a7ab046f41eff3249f750b0dafcc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{9951f0c7-ec69-46d4-89a8-4d89517c14a6}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\""
		":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{04f10c71-6dec-410f-88fb-b4f93cdaf358}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{3ce2802c-78f5-4fce-bd04-4429f90b89f9}\",\"rd"
		"\":6143},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{61fc8b14-eaca-44bd-b3c5-a375ce45a3a3}\",\"rd\":6143},\"updatecheck\":{},\"version\":\""
		"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a248a93f9e93263df26dcb397251de32d6a38c77fbe7426a6a6e25850789d759\"}]},\"ping\":{\"ping_freshness\":\"{3c149dca-3e05-4cbf-8c0e-9df434716d24}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"418\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort"
		"\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{3274497f-689c-499e-bd82-2c8b4b4565a5}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{a606c44a-f2c2-4c44-8161-8dc6275dd9c0}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\""
		"ping_freshness\":\"{0cbb8a60-d5d6-4389-b73d-a9c59d573d8f}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{b10b19bf-c0bb-49e6-8b83-37c78cd76b13}\",\"rd\":6143},\"updatecheck\":{},\""
		"version\":\"2023.9.4.1\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{6c176a4b-0bbb-4231-83f0-bfb8635e76f5}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{d05b1472-8227-4b30-9906-17794e2d3443}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3001\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.bead787cfbf33997b1afcd7910fed817f43c1bf44cea828b89a22cbb2f6538ff\"}]},\"ping\":{\"ping_freshness\":\"{6fbe5fd7-4d60-4041-a9be-d7da8509d9ef}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"750\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\""
		"ping\":{\"ping_freshness\":\"{23a511af-0eaa-422d-ab5b-8efa4cf594f4}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{c3a3eaaf-4cbc-4928-9ca0-38166eac600b}\",\"rd\":6143"
		"},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{ec533f82-dec6-4973-9b9e-8754819bc2a9}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\""
		",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{31563c6c-dd3e-4a83-aecb-fbaf2d13a1b2}\",\"rd\":6143},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true"
		",\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.860288505f461cc61910820cfa89e4705876813a4ddbfeaa6de56e42da57b212\"}]},\"ping\":{\"ping_freshness\":\"{5fbbbf7e-377e-4833-b006-39a9c987ef18}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"8324\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a5e0fa6d-a6ba-4263-9a66-32bf8f95c2ae}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{7b92e9c2-a21d-46d9-8ac3-d1ac3667b5fa}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21m9@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9ba8ab825d1ec954a636adc66da9e9dd784096ce83182054ac288daf50c04b46\"}]},\"ping\":{\"ping_freshness\":\"{cea01217-285f-46a1-a5ad-ea65f6930c06}\",\"rd\":6143},\""
		"updatecheck\":{},\"version\":\"1.0.2512.1\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{31503edb-b9e3-4f59-b0c6-37442ba89f58}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\""
		",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6128,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.316c987ccb9e429256c3d174c0fd97842ea47b9ed729064ecbecbbe17acc9858\"}]},\"ping\":{\"ping_freshness\":\"{7f599614-4eb9-46cb-8e89-de074f509fe5}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\""
		"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{0c76ed57-99ce-4467-b2fa-0d4c0fdcf2dd}\",\"sessionid\":\"{74fe8b68-4885-40da-8f27-bb54cab7b4fb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\""
		"version\":\"1.3.36.312\"},\"updaterversion\":\"118.0.5993.118\"}}", 
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
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	lr_think_time(119);

	web_custom_request("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTE4LjAuNTk5My4xMTgaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDdsxMaAhgJ9JXIFSIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQqZ0NGgIYCQxmPGciBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENSUDRoCGAm_rRedIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDdoAcaAhgJJu5FhSIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0TUaAhgJ65QdfyIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQmeABGgIYCWlDP2UiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDAFBoCGAme5JDwIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCv_gEaAhgJbMlbLSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ6uMNGgIYCe__6DAiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIIeGgIYCYLfuT4iBCABIAIoASICCAM=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t17.inf", 
		LAST);

	lr_start_transaction("UC06_01_Home_page");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

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

	lr_think_time(130);

	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t18.inf", 
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
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
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

	lr_end_transaction("UC06_01_Home_page",LR_AUTO);

	lr_start_transaction("UC06_02_Knopka_reg");

	web_add_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(47);

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_custom_request("profileValidate.js", 
		"URL=http://localhost:1080/WebTours/profileValidate.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t25.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("forecast_2", 
		"URL=https://services.gismeteo.ru/inform-service/inf_chrome/forecast/?city=5089&lang=en", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC06_02_Knopka_reg",LR_AUTO);

	lr_start_transaction("UC06_03_Vvod_reg_dannykh");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(151);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"Body=username=test123&password=test123&passwordConfirm=test123&firstName=test123&lastName=test123&address1=test123&address2=test123&register.x=54&register.y=12", 
		LAST);

	lr_end_transaction("UC06_03_Vvod_reg_dannykh",LR_AUTO);

	lr_think_time(26);

	lr_start_transaction("UC06_04_next");

	web_custom_request("button_next.gif_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(31);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t31.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t32.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("login.pl_3", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC06_04_next",LR_AUTO);

	lr_think_time(29);

	lr_start_transaction("UC06_05_Exit");

	web_custom_request("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("home.html_3", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC06_05_Exit",LR_AUTO);

	return 0;
}