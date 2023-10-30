Action()
{

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Dest", 
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

	web_custom_request("webtours", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(18);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"bfegaehidkkcfaikpaijcdahnpikhobf,cfhdojbkjhnklbpkdaibdccddilifddb,ghbmnnjooekpmoecnnnilnnbdlolhkhi,gighmmpiobklfepjocnamgkkbiglidom,jlhmfgmfgeifomenelglieieghnjghma,laddjijkcfpakbbnnedbhnnciecidncp,mihcahmgecmbnbcchbopgniflfhgnkff,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-118.0.5993.118");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:bSlXjXMeXtKlzDBbjoYuX0MZxdFpr2NjnsmXO3jCmDA&cup2hreq=d39d9b0ef0ac89e2776ced7265116b50e3c2944609932ae077072e78c9e44f5e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"bfegaehidkkcfaikpaijcdahnpikhobf\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.3.1.8\"}]},\"ping\":{\"ping_freshness\":\"{93801a1c-7ce8-42ed-86be-f8128fc1d5aa}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"3.1.8\"},{\"appid\":\"cfhdojbkjhnklbpkdaibdccddilifddb\",\"cohort\":\"1::\",\""
		"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.71ebb5b7c402bd3ad92b0c687a5d17f7ff0810c3bdfba59c39de65cf9daa1ca1\"}]},\"ping\":{\"ping_freshness\":\"{158230b7-f654-4db8-a429-309aef7afd82}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"3.20\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"external\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":"
		"\"1.b5bb8d8da998d1496bb46c128a152e907e51bffc3d9cc7d44765e2260984cdcc\"}]},\"ping\":{\"ping_freshness\":\"{724365b0-1a9e-4914-a8ca-c057de414ef8}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"1.69.0\"},{\"appid\":\"gighmmpiobklfepjocnamgkkbiglidom\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.5.12.0\"}]},\"ping\":{\"ping_freshness\":\"{9bad6d2d-6390-4619-99ce-e4d9e19c3d6c}\",\"rd\":6142},\"updatecheck"
		"\":{},\"version\":\"5.12.0\"},{\"appid\":\"jlhmfgmfgeifomenelglieieghnjghma\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.2.0.4\"}]},\"ping\":{\"ping_freshness\":\"{b206b111-5bed-4609-8ff3-f8b53e9ebdd5}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"2.0.4\"},{\"appid\":\"laddjijkcfpakbbnnedbhnnciecidncp\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"2.8.24.14\"}]},\"ping\":{\"ping_freshness\":\"{894f8174-dba0-4421-a0d1-4091fd6c0351}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"8.24.14\"},{\"appid\":\"mihcahmgecmbnbcchbopgniflfhgnkff\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6133,\"installedby\":\"internal\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.4.4.0\"}]},\"ping\":{\"ping_freshness\":\"{a306fd44-4207-4d5f-ad58-19dd4a74023a}\",\"rd\":6142},\"updatecheck\":{},\"version\""
		":\"4.4.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"installedby\":\"other\",\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{0557e7a9-88a9-440e-acde-3c15deaad0dc}\",\"rd\":6142},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\""
		":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{1ebe190d-2057-43e2-bd30-eaacc85e96d2}\",\"sessionid\":\"{8f61b252-e9b1-424c-a88d-18f14ae1a7e0}\",\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"chrome-extension://cfhdojbkjhnklbpkdaibdccddilifddb");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("stats", 
		"URL=https://ipm.adblockplus.dev/api/stats", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"user\":{\"type\":\"customer\",\"platforms\":[{\"platform\":\"web\",\"active\":\"true\"}],\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\"app_version\":\"3.20\",\"command_library_version\":1,\"install_type\":\"normal\"}},\"device\":{\"type\":\"device\",\"device_id\":\"9be15fd2-9eb5-4f0e-b1eb-c84bf7caa9db\",\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\""
		"app_version\":\"3.20\",\"command_library_version\":1,\"install_type\":\"normal\",\"blocked_total\":0,\"license_status\":\"inactive\"}},\"events\":[]}", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0cwy5GMM6QfizCgYIARAAGAwSNwF-L9IrVwNYagkgnayQbEV5sdFKfQO9K4STfWdXafkbYnxUVjQzJLliGC1jxBHCQkN1l0BNP7o&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

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

	lr_think_time(12);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t8.inf", 
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
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
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
		"Snapshot=t11.inf", 
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
		"Snapshot=t12.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,jflookgnkcckhobaglndicnbbgbonegd,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,hfnkpimlhhgieaddgfemjhofmfblmnib,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.118");

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:me57o_Ntxs2r9g24hrahu23D8Mrjem8o5zPDKbqxzHI&cup2hreq=33b1565de299a49611c9c9f29594f27ef024117da7e32e5cd01130768748f0c8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{457a7a73-6a76-43b5-b45d-eca801e5b3ba}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21m9@0.025\",\"cohortname\":\"Auto\",\"enabled"
		"\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9ba8ab825d1ec954a636adc66da9e9dd784096ce83182054ac288daf50c04b46\"}]},\"ping\":{\"ping_freshness\":\"{54c79aaa-c1d0-4d8a-88cc-fff98a0a0585}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.2512.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\""
		"{26575ece-3558-407d-a940-504a3d963e9c}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{4739b3e7-7bc4-4c3e-a619-6228cf8a362e}\",\"rd\":6143},\"updatecheck\":{},\"version\":\""
		"9.49.1\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{b27d9a46-e7bc-453f-9cdb-91e95026afac}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\""
		":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{bd7a1f2f-5fa8-428e-b90f-d1f015323443}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a248a93f9e93263df26dcb397251de32d6a38c77fbe7426a6a6e25850789d759\"}]},\"ping\":{\"ping_freshness\":\"{91386f7f-c6c2-466e-8e71-3bde93f71d53}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"418\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{f8ee819f-bb46-4b97-bccb-37eca2a82dfa}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{a5bcfe9b-8309-463a-98fe-76acd60ad0c8}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{8d1c50b4-9fef-4556-8901-c436593be9a1}\",\"rd\":6143},\"tag\":\"default\",\""
		"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{252d10c2-943a-44f8-ba05-0ce6a6701a26}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr"
		":\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{1261ce8d-b9dc-4a25-a577-77cefa5c3c72}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\""
		"ping\":{\"ping_freshness\":\"{50251360-3f8b-4226-81a1-daf4c7db0bd4}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.bead787cfbf33997b1afcd7910fed817f43c1bf44cea828b89a22cbb2f6538ff\"}]},\"ping\":{\"ping_freshness\":\"{e5878c14-9b2c-4ab0-879c-4bd6c3a9c0c1}\",\"rd\":6143},\""
		"updatecheck\":{},\"version\":\"750\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{ae6d2d65-2053-487b-87df-01aa11149589}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3001\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{7679314d-943b-46f9-9943-e51050110260}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{3dfc6e55-6950-44fb-ac6e-9e9bec7c9d68}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\""
		":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{678195d4-ecda-4245-bbad-31f5fb425103}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\""
		":\"{16e53c38-973f-4ce2-98e0-c8b3f7482000}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.860288505f461cc61910820cfa89e4705876813a4ddbfeaa6de56e42da57b212\"}]},\"ping\":{\"ping_freshness\":\"{42c45518-179b-4c45-82a4-6b1db01b5aa5}\",\"rd\":6143},\"updatecheck\":{},\"version\""
		":\"8324\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{efe54eb4-5d7c-46dd-bdff-cc9c452f8e9c}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6128,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.316c987ccb9e429256c3d174c0fd97842ea47b9ed729064ecbecbbe17acc9858\"}]},\"ping\":{\"ping_freshness\":\"{95ddcf01-4773-45f9-b215-22fc6d888e7b}\",\"rd\":6143},\"updatecheck\":{},\"version\":\"2023.10.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\""
		"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{0e9daaae-4f10-482f-b2ed-d2ca4363907e}\",\"sessionid\":\"{e22da77c-de53-4baa-bb29-3d4671cfbf27}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\""
		"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
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
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"cffjjlhdhdcmaailglcedackabgpjbfa,dldcbakcjliccckkmfjcblhciilpdcil,ehkhpgapnaalmmbfkiodemgfljmiepih,eifflpnfppfheimpmmagplbanbceajjn,gbofnbeakdognkanffmpldbjgkblljkh,gfmbgpjobmhdlclmnpbcckcikbhmheme,hjfdndbcpceonfinifcggojahlhmindo,honbkcpgfoghpdpjndjkfdjbpihbfchb,jangaedeekciafhlanphhnalogmhefmo,jcjbcgfmgdinmcljnafppclcmckchoca,kgonfdfnfmpilaopkkobcppchpgidojo,mgndgikekgjfcpckkfioiadnlibdjbkf,mpalelnihbfcohbpniljacigfgjmpodb,ocifcklkibdehekfnmflempfgjhbedch,oihiaelacocfiabgpkdggodoofcmhcad");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-118.0.5993.118");

	lr_think_time(27);

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
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("UC02_01_Home_page");

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

	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t16.inf", 
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
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
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

	web_add_cookie("SIDCC=ACA-OxOnytaxPVk6kaGevlO6zWoCg7ztdNdoWi2iROTB8xUhIIurlNAsLuDGETUqy7TVPyO40Q; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=ACA-OxMWBPeJ9oaEY_ZqKhNh2DcGJPxFCootLRiPTxMrlLb2MeG2gfCGLrdIRtbGCr3Jip55vg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=ACA-OxOxYs4fJrE6SRRj3gRU377Stt4Zhk5IWtudqKSnQW4r7OiwrlHOcQOvWaldifH88bkV3A; DOMAIN=accounts.google.com");

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

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		"Body= ", 
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

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(6);

	web_custom_request("forecast", 
		"URL=https://services.gismeteo.ru/inform-service/inf_chrome/forecast/?city=5089&lang=en", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC02_01_Home_page",LR_AUTO);

	lr_start_transaction("UC02_02_Login");

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

	lr_think_time(41);

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"Body=userSession=137577.491130012HAHzztcpctctfQpifDc&username=Bob&password=Big&login.x=62&login.y=12&JSFormSubmit=on", 
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

	web_custom_request("nav.pl_3", 
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

	lr_think_time(12);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t28.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t29.inf", 
		LAST);

	lr_end_transaction("UC02_02_Login",LR_AUTO);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	lr_think_time(44);

	web_custom_request("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTE4LjAuNTk5My4xMTgaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDUsxMaAhgJiUooISIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQpp0NGgIYCRueXj4iBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENGUDRoCGAkOTHjsIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDdoAcaAhgJJu5FhSIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0TUaAhgJ65QdfyIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQluABGgIYCU_ZzRYiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDAFBoCGAme5JDwIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCt_gEaAhgJjsEbviIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ5-MNGgIYCeEdxQwiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIIeGgIYCYLfuT4iBCABIAIoASICCAM=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t30.inf", 
		LAST);

	lr_start_transaction("UC02_03_Flight");

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

	lr_think_time(21);

	web_custom_request("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC02_03_Flight",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(12);

	web_custom_request("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t35.inf", 
		LAST);

	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t36.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_custom_request("ChVDaHJvbWUvMTE4LjAuNTk5My4xMTgSNQlBQlOibcsVChIFDVRiKa0SBQ17ncSlEgUNHzs5hRIFDdqFmWESBQ2pjkq9IZDGj2szX6mz", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTE4LjAuNTk5My4xMTgSNQlBQlOibcsVChIFDVRiKa0SBQ17ncSlEgUNHzs5hRIFDdqFmWESBQ2pjkq9IZDGj2szX6mz?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t37.inf", 
		LAST);

	lr_start_transaction("UC02_04_Vvod_info");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

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

	lr_think_time(38);

	web_custom_request("reservations.pl_2", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Paris&departDate=10%2F28%2F2023&arrive=Los+Angeles&returnDate=10%2F29%2F2023&numPassengers=1&seatPref=Window&seatType=Business&findFlights.x=56&findFlights.y=7&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
		LAST);

	lr_end_transaction("UC02_04_Vvod_info",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(57);

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=118", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("UC02_05_Vybor_reysa");

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

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(21);

	web_custom_request("reservations.pl_3", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=431%3B566%3B10%2F28%2F2023&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=46&reserveFlights.y=10", 
		LAST);

	lr_end_transaction("UC02_05_Vybor_reysa",LR_AUTO);

	return 0;
}