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
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(7);

	web_custom_request("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=118", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("NID=511=IwjLKFeEU0ujaX1Ae_WghouYuzYH6SZxViHRo6M9f1cQfDXOsjad7OXNHJWyfqLAPq5oEAndQiZzXpVOawUdJ3Dwjn0Gg2iVCT0_gdlI8eaOybysc8yQWtJYMOxWgmz7Pcim6a09Jm-cE36JB7yeXkuZgb35XQGoCICsCmYkBkw; DOMAIN=safebrowsing.google.com");

	lr_think_time(6);

	web_custom_request("crx-telemetry", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\xCA\\xE0\\xCF\\xC7\\xB51\\x12r\nL\n bfegaehidkkcfaikpaijcdahnpikhobf\\x12\\x053.1.8\\x1A\\x08Gismeteo \\xD4\\xA3\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\"\\x12 \n\\x1E\n\\x18ssl.google-analytics.com\\x10\\x01\\x18\\x01\\x12\\xAE\\x01\n\\x8C\\x01\n cfhdojbkjhnklbpkdaibdccddilifddb\\x12\\x043.19\\x1AIAdblock Plus - \\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 "
		"\\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xA0\\xB0\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x12\\x1B\n\\x19\n\\x13ipm.adblockplus.dev\\x10\\x01\\x18\\x01\\x12\\xA0\\x03\n^\n laddjijkcfpakbbnnedbhnnciecidncp\\x12\\x078.24.14\\x1A\\x18\\xD0\\x9F\\xD0\\xBE\\xD0\\xB8\\xD1\\x81\\xD0\\xBA "
		"\\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81a \\xA1\\x86\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x1A\\x1B\n\\x17\n\\x05ya.ru\\x12\\x04test\\x1A\\x01/2\\x010:\\x00@\\x01\\x10\\x00\\x12\\x9E\\x02\"\\x9B\\x02\n\\x19\n\\x02ys\\x12\\x0Ehttps://ya.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.by/\\x1A\\x010@\\x01\n!\n\\x02ys\\x12\\x16https://yandex.com.tr/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.com/"
		"\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.kz/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.net/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ua/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.uz/\\x1A\\x010@\\x01\\x10\\x00\\x12t\nW\n mihcahmgecmbnbcchbopgniflfhgnkff\\x12\\x054.4.0\\x1A\\x13Google Mail Checker \\xAD\\x89\\xFF\\xF6\\xB31"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x19\\x12\\x17\n\\x15\n\\x0Fmail.google.com\\x10\\x01\\x18\\x01\\x12j\nh\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A&\\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD Chrome \\xA9\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12m\nk\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.69.0\\x1A&Google "
		"\\xD0\\x94\\xD0\\xBE\\xD0\\xBA\\xD1\\x83\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD1\\x8B \\xD0\\xBE\\xD1\\x84\\xD0\\xBB\\xD0\\xB0\\xD0\\xB9\\xD0\\xBD \\xA4\\xBB\\xB1\\xF6\\xB31(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12\\x86\\x01\n\\x83\\x01\n gighmmpiobklfepjocnamgkkbiglidom\\x12\\x065.12.0\\x1A>AdBlock \\xE2\\x80\\x94 \\xD0\\xBB\\xD1\\x83\\xD1\\x87\\xD1\\x88\\xD0\\xB8\\xD0\\xB9 "
		"\\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xBA\\xA6\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12[\nY\n jlhmfgmfgeifomenelglieieghnjghma\\x12\\x052.0.4\\x1A\\x15Cisco Webex Extension \\xA8\\x99\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n "
		"mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xAA\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12\\x93\\x01"
		"\n\\x90\\x01\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1AJ\\xD0\\x9F\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xB6\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 Chrome \\x97\\xB8\\xCE\\x86\\xAD1(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
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

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t157.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"chrome-extension://cfhdojbkjhnklbpkdaibdccddilifddb");

	web_custom_request("stats", 
		"URL=https://ipm.adblockplus.dev/api/stats", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"user\":{\"type\":\"customer\",\"platforms\":[{\"platform\":\"web\",\"active\":\"true\"}],\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\"app_version\":\"3.19\",\"command_library_version\":1,\"install_type\":\"normal\"}},\"device\":{\"type\":\"device\",\"device_id\":\"9be15fd2-9eb5-4f0e-b1eb-c84bf7caa9db\",\"attributes\":{\"app_name\":\"adblockplus\",\"browser_name\":\"chrome\",\"os\":\"win\",\"language_tag\":\"ru\",\""
		"app_version\":\"3.19\",\"command_library_version\":1,\"install_type\":\"normal\",\"blocked_total\":0,\"license_status\":\"inactive\"}},\"events\":[]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("OTZ=7223611_44_44_123780_40_436260; DOMAIN=accounts.google.com");

	web_add_cookie("SID=bQi8bZfE3dBFQtuL9HKiD3a4p2XrwQmN9fFsCkaAb8IIyr3tVTzKyo9AWtzFDuLOv3D4oA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSID=bQi8bZfE3dBFQtuL9HKiD3a4p2XrwQmN9fFsCkaAb8IIyr3tCDPvimdxYX1a3BmSiYSciw.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=bQi8bZfE3dBFQtuL9HKiD3a4p2XrwQmN9fFsCkaAb8IIyr3tEdIavUnEoix19rsAqhEaJg.; DOMAIN=accounts.google.com");

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

	web_add_cookie("NID=511=KOisMIggsH8RLPUsWF0SXeofJLIR8SkmMCtot1YhZSbD68n-BgRGo7d4sZTSG2RtKSlJ2NvvHhOAe7d6f2JptKOFrIbBmptjrZ-jazmLhSNz2kPGVTuDtXe1CZKNLqupBQ3HDErK6h1bF58stkqQsMLSlNMLvdnjueIvsA1gdA1mt4_5Uq-pHZNJhaJmL26FJs4Fd0r9Oei0UH5W4AZrJ5W0Pmu_ymRaoEziJRzNXld4amWx32Z5UWN_EOoqFYMVj_TyWdPqWWdWEoE8mOO7C1DKfyrxDTjzEg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDTS=sidts-CjEB3e41hfsxKec_GyXXBppFj3yNMlsFaxlEDoaeggZdpJllBnwPiU33otywEBVqIHNEEAA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDTS=sidts-CjEB3e41hfsxKec_GyXXBppFj3yNMlsFaxlEDoaeggZdpJllBnwPiU33otywEBVqIHNEEAA; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=ACA-OxN8FtHVmL9CVe7msxxphbnWClRLPSCHp3aaGkFJY4JyLYRzfDaZrnsPNreYsrhhFUGYWQ; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-1PSIDCC=ACA-OxMWFooTJa5abaRhBDohwn2IZySUhsxt_EMBPN9GAnfLvsdELmRasHkXBzjBqYq5amf_oA; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=ACA-OxMYG2h5INfdeNGZxwNgCQ3CSxZQiHnMUn8I1zmrwgCPS9QEAkoEZWWhJ0mO8Fk5dHMKBQ; DOMAIN=accounts.google.com");

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
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(6);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("crx-telemetry_2", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\xB4\\xB1\\x80\\xC7\\xB51\\x12\\x8E\\x01\nL\n bfegaehidkkcfaikpaijcdahnpikhobf\\x12\\x053.1.8\\x1A\\x08Gismeteo \\xD4\\xA3\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12>\\x12<\n\\x1A\n\\x14services.gismeteo.ru\\x10\\x01\\x18\\x01\n\\x1E\n\\x18ssl.google-analytics.com\\x10\\x01\\x18\\x01\\x12\\xAE\\x01\n\\x8C\\x01\n cfhdojbkjhnklbpkdaibdccddilifddb\\x12\\x043.19\\x1AIAdblock Plus - "
		"\\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xA0\\xB0\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x12\\x1B\n\\x19\n\\x13ipm.adblockplus.dev\\x10\\x01\\x18\\x01\\x12\\xA0\\x03\n^\n "
		"laddjijkcfpakbbnnedbhnnciecidncp\\x12\\x078.24.14\\x1A\\x18\\xD0\\x9F\\xD0\\xBE\\xD0\\xB8\\xD1\\x81\\xD0\\xBA \\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81a \\xA1\\x86\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x1A\\x1B\n\\x17\n\\x05ya.ru\\x12\\x04test\\x1A\\x01/2\\x010:\\x00@\\x01\\x10\\x00\\x12\\x9E\\x02\"\\x9B\\x02\n\\x19\n\\x02ys\\x12\\x0Ehttps://ya.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.by/\\x1A\\x010@\\x01\n!\n"
		"\\x02ys\\x12\\x16https://yandex.com.tr/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.com/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.kz/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.net/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ua/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.uz/\\x1A\\x010@\\x01\\x10\\x00\\x12t\nW\n "
		"mihcahmgecmbnbcchbopgniflfhgnkff\\x12\\x054.4.0\\x1A\\x13Google Mail Checker \\xAD\\x89\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x19\\x12\\x17\n\\x15\n\\x0Fmail.google.com\\x10\\x02\\x18\\x01\\x12j\nh\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A&\\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD Chrome \\xA9\\x91\\xCE\\x86\\xAD1"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12m\nk\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.69.0\\x1A&Google \\xD0\\x94\\xD0\\xBE\\xD0\\xBA\\xD1\\x83\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD1\\x8B \\xD0\\xBE\\xD1\\x84\\xD0\\xBB\\xD0\\xB0\\xD0\\xB9\\xD0\\xBD \\xA4\\xBB\\xB1\\xF6\\xB31(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12\\x86\\x01\n\\x83\\x01\n gighmmpiobklfepjocnamgkkbiglidom\\x12\\x065.12.0\\x1A>AdBlock \\xE2\\x80\\x94 "
		"\\xD0\\xBB\\xD1\\x83\\xD1\\x87\\xD1\\x88\\xD0\\xB8\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xBA\\xA6\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12[\nY\n jlhmfgmfgeifomenelglieieghnjghma\\x12\\x052.0.4\\x1A\\x15Cisco Webex Extension \\xA8\\x99\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\n"
		"Q\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xAA\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xAB\\x91\\xCE\\x86\\xAD1"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12\\x93\\x01\n\\x90\\x01\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1AJ\\xD0\\x9F\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xB6\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 Chrome \\x97\\xB8\\xCE\\x86\\xAD1"
		"(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(25);

	web_custom_request("JSFormSubmit.js", 
		"URL=http://localhost:1080/WebTours/JSFormSubmit.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t164.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t165.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t166.inf", 
		LAST);

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t167.inf", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("crx-telemetry_3", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\xE2\\xF4\\xF7\\xC6\\xB51\\x12\\x8E\\x01\nL\n bfegaehidkkcfaikpaijcdahnpikhobf\\x12\\x053.1.8\\x1A\\x08Gismeteo \\xD4\\xA3\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12>\\x12<\n\\x1A\n\\x14services.gismeteo.ru\\x10\\x06\\x18\\x01\n\\x1E\n\\x18ssl.google-analytics.com\\x10\\x01\\x18\\x01\\x12\\xD8\\x04\n\\x8C\\x01\n cfhdojbkjhnklbpkdaibdccddilifddb\\x12\\x043.19\\x1AIAdblock Plus - "
		"\\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xA0\\xB0\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\xA7\\x03\n\\xA4\\x03\n$\n \\x03%#b\\xF77\\xF6T[J\\xAC\\xB5\\x9A\\x92\\xFCY\\x87GhSI5\\xD1e|Q\\x10a\\xA1\\xB1)\\x82\\x10\\x02\n$\n "
		"@h\\xB4\\xA1\\x10X7\\xB1\\xC9\\xC2\\xCB\\xCC\\xA5)\\xACk4\\xDD@8|\\xF1\\xEE\\x16_\\xAC0nM\\x9B\n \\x10\n\n$\n A\\xCFi\\x01\\xC9#r\\x18w')\\xAA\\xEBV\\xCB\\xA9s}/\\xEA\\xB4\\xEC\\x1D\\x90\\xED%\\x110\\xBA\\x14\\x00\\xEB\\x10\\x03\n$\n T[e\\x9D{\\xE2\\x17\\x04\\x0C\\xCFz\\xCC\\xDF\\xDF?\\x06@$\\x8E\\x858R\\xED,)!\\xB5<\\x8CZV\\xA9\\x10\\x06\n$\n X\\xD7oNv\\xEE(K\\xFAv\\xFC\\x94\\xEE\\xFA\\xBC\\xD3z\\xF0\\xE1\\x91\\x01\\xC3\\xF8\\xDF vkv.\\xE1P\\x8D\\x10\\x02\n$\n "
		"pE\\xA3\\xBC\\xE4\\x00\\xBD\\x98n\\xEC\\xEF\\xE6\\xBC\\xC2\\x85\\x88\rA\\x91\\xEFu\\xEE\\xD8\\xE3+r\\x10D\\xE9~\\xB1-\\x10\\x01\n$\n \\xCF\\xE0g\\xB4\\xE7+\\x1E\\x02\\x10\\x9E\\xB4S1N\r \\x99\\xF3:+V\\xC4*/aZ\\x0F\\x94\\x81\\xB2\\xD85\\x10\\x06\n$\n \\xD0\\xB7\\xA13&7\\xC3\\x94\\xD5A\\xFC\\xC4#U\\xDB?\\x06{\\xD7\\xEC\\x03\\xF2\\x1C\\xE9N\\xDA\\xF1\\xD6\\x8D\\x87\\xDD\\xBA\\x10\\x03\n$\n \\xDF\\x9Bj@\\xF9T\\xC7 \\x91\\xB8\\xD2S@\\xA0\n\\x8A\\xC2a\\\\\\x02\\x17\\x0EN\\xCB\\xB9\t"
		"\\xF0\\xE6\\x15\\xCE\\x19Z\\x10\\x06\n$\n \\xE0\\x80\\xF1\\xEC\\xE0\\xDD\\xDB\\xDD\\xE2{\\x06\\xA9&\\x15\\x91\\x9E\\x90\\xA2\n\\xF6\\xC7f\\xB9\\xB4s\\x84\\xAF\\xEF\\x14\\xA0*>\\x10\\x04\n$\n \\xE3\\xB0\\xC4B\\x98\\xFC\\x1C\\x14\\x9A\\xFB\\xF4\\xC8\\x99o\\xB9$'\\xAEA\\xE4d\\x9B\\x93L\\xA4\\x95\\x99\\x1BxR\\xB8U\\x10$\\x10\\x00\\x12\\x1D\\x12\\x1B\n\\x19\n\\x13ipm.adblockplus.dev\\x10\\x01\\x18\\x01\\x12\\xB0\\x04\n\\x83\\x01\n gighmmpiobklfepjocnamgkkbiglidom\\x12\\x065.12.0\\x1A>AdBlock "
		"\\xE2\\x80\\x94 \\xD0\\xBB\\xD1\\x83\\xD1\\x87\\xD1\\x88\\xD0\\xB8\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xBA\\xA6\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\xA7\\x03\n\\xA4\\x03\n$\n \\x1B\\xFF\t\\xC8\\xAA\\xF2EF\\\\3\\x04\\xCE\\xB7\\xC9(\\xAD\\\\Af\\x8A\\xFC\\xD9{\\x8A\\xE6\\x15r\\x98\\x8D\\xFB&\\xF8\\x10\\x02"
		"\n$\n 8D\\xD1\\x15\\x0B\\xC3\\x91\\x0EPC&\\x81x\\xE80(_m\\x08\\x8FbH\\xC8g%\t_\\xA0\\xAB\\x8Av\\x1F\\x10\\x03\n$\n :\\x92\\x8E\\xBD\\x05;d\\x1E\\xA8\\x927i\\xDC\\xCA{\\x10\\xF6`\\xE5Y\\xEE\\xD9KlV\\xB4'\\xE6\\x85\\x11\\xD6\\x99\\x10\\x06\n$\n @h\\xB4\\xA1\\x10X7\\xB1\\xC9\\xC2\\xCB\\xCC\\xA5)\\xACk4\\xDD@8|\\xF1\\xEE\\x16_\\xAC0nM\\x9B\n \\x10\n\n$\n E\\x8Ff^\\x07\\x80\\xCB\\xEC\\x92\\x0E\\x05\\xA8\\xCE\\x94\\xD8\\xF3\\xAD\\xC5\\x1Am\\xA3u\\xCDZ\\x94\\xE0\\xC5\\xF8\\xAD\\xF4\\x9FK\\x10\\x04\n$\n "
		"H\\xD8\\x06\\x81G\\x82\\x8F\\x8F;5'\\x86E\\xB0\\x9E\\x96\\xF3\\xCBn\\xB9\\xFFd!\\x06\\xFB\\xBB\\xB9<\\x90\\xAE7(\\x10\\x06\n$\n w\\x10v\\xB6\\xFEnK\\xE8GW\\x00\\xE9,\\xFA\\x14\\xF2;b\\xDB\\xDD\\xFF\\xCBQ\\xE1\\x1E\\x85\\xAD\\x86\\xE8l\\x8D|\\x10\\x02\n$\n \\xAD\\x89\\x1E\\xD3\\xF2Y9\\xB2*\\xCD\\x1BN\\x99\\xB7s~\\xF5g\\x90\\x82\\xB8.{5xF+\\x00ry2\\xCB\\x10\\x01\n$\n \\xB3\\xD9\\x14\\x0B\\xC5\\x002\\x9Eg\\xD1s\\xA8tK\\x95R0y\\xB16\\x19\\x17\\xCE\\xD2e`\\xFF\\xF7\\xDD!(\\x8D\\x10\\x03\n$\n "
		"\\xCF\\xE0g\\xB4\\xE7+\\x1E\\x02\\x10\\x9E\\xB4S1N\r \\x99\\xF3:+V\\xC4*/aZ\\x0F\\x94\\x81\\xB2\\xD85\\x10\\x06\n$\n \\xE3\\xB0\\xC4B\\x98\\xFC\\x1C\\x14\\x9A\\xFB\\xF4\\xC8\\x99o\\xB9$'\\xAEA\\xE4d\\x9B\\x93L\\xA4\\x95\\x99\\x1BxR\\xB8U\\x10$\\x10\\x00\\x12\\xA0\\x03\n^\n laddjijkcfpakbbnnedbhnnciecidncp\\x12\\x078.24.14\\x1A\\x18\\xD0\\x9F\\xD0\\xBE\\xD0\\xB8\\xD1\\x81\\xD0\\xBA \\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81a \\xA1\\x86\\xFF\\xF6\\xB31"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x1A\\x1B\n\\x17\n\\x05ya.ru\\x12\\x04test\\x1A\\x01/2\\x010:\\x00@\\x01\\x10\\x00\\x12\\x9E\\x02\"\\x9B\\x02\n\\x19\n\\x02ys\\x12\\x0Ehttps://ya.ru/\\x1A\\x010@\\x02\n\\x1D\n\\x02ys\\x12\\x12https://yandex.by/\\x1A\\x010@\\x02\n!\n\\x02ys\\x12\\x16https://yandex.com.tr/\\x1A\\x010@\\x02\n\\x1E\n\\x02ys\\x12\\x13https://yandex.com/\\x1A\\x010@\\x02\n\\x1D\n\\x02ys\\x12\\x12https://yandex.kz/\\x1A\\x010@\\x02\n\\x1E\n"
		"\\x02ys\\x12\\x13https://yandex.net/\\x1A\\x010@\\x02\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ru/\\x1A\\x010@\\x02\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ua/\\x1A\\x010@\\x02\n\\x1D\n\\x02ys\\x12\\x12https://yandex.uz/\\x1A\\x010@\\x02\\x10\\x00\\x12t\nW\n mihcahmgecmbnbcchbopgniflfhgnkff\\x12\\x054.4.0\\x1A\\x13Google Mail Checker \\xAD\\x89\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x19\\x12\\x17\n\\x15\n\\x0Fmail.google.com\\x10\\x06\\x18\\x01\\x12j\nh\n "
		"ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A&\\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD Chrome \\xA9\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12m\nk\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.69.0\\x1A&Google \\xD0\\x94\\xD0\\xBE\\xD0\\xBA\\xD1\\x83\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD1\\x8B "
		"\\xD0\\xBE\\xD1\\x84\\xD0\\xBB\\xD0\\xB0\\xD0\\xB9\\xD0\\xBD \\xA4\\xBB\\xB1\\xF6\\xB31(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12[\nY\n jlhmfgmfgeifomenelglieieghnjghma\\x12\\x052.0.4\\x1A\\x15Cisco Webex Extension \\xA8\\x99\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xAA\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n "
		"neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12\\x93\\x01\n\\x90\\x01\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1AJ\\xD0\\x9F\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xB6\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F "
		"\\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 Chrome \\x97\\xB8\\xCE\\x86\\xAD1(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	web_custom_request("crx-telemetry_4", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\x91\\xC4\\x96\\xC6\\xB51\\x12r\nL\n bfegaehidkkcfaikpaijcdahnpikhobf\\x12\\x053.1.8\\x1A\\x08Gismeteo \\xD4\\xA3\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\"\\x12 \n\\x1E\n\\x18ssl.google-analytics.com\\x10\\x01\\x18\\x01\\x12\\xAE\\x01\n\\x8C\\x01\n cfhdojbkjhnklbpkdaibdccddilifddb\\x12\\x043.19\\x1AIAdblock Plus - \\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 "
		"\\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xA0\\xB0\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x12\\x1B\n\\x19\n\\x13ipm.adblockplus.dev\\x10\\x01\\x18\\x01\\x12\\xA0\\x03\n^\n laddjijkcfpakbbnnedbhnnciecidncp\\x12\\x078.24.14\\x1A\\x18\\xD0\\x9F\\xD0\\xBE\\xD0\\xB8\\xD1\\x81\\xD0\\xBA "
		"\\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81a \\xA1\\x86\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x1A\\x1B\n\\x17\n\\x05ya.ru\\x12\\x04test\\x1A\\x01/2\\x010:\\x00@\\x01\\x10\\x00\\x12\\x9E\\x02\"\\x9B\\x02\n\\x19\n\\x02ys\\x12\\x0Ehttps://ya.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.by/\\x1A\\x010@\\x01\n!\n\\x02ys\\x12\\x16https://yandex.com.tr/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.com/"
		"\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.kz/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.net/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ua/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.uz/\\x1A\\x010@\\x01\\x10\\x00\\x12t\nW\n mihcahmgecmbnbcchbopgniflfhgnkff\\x12\\x054.4.0\\x1A\\x13Google Mail Checker \\xAD\\x89\\xFF\\xF6\\xB31"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x19\\x12\\x17\n\\x15\n\\x0Fmail.google.com\\x10\\x01\\x18\\x01\\x12j\nh\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A&\\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD Chrome \\xA9\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12m\nk\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.69.0\\x1A&Google "
		"\\xD0\\x94\\xD0\\xBE\\xD0\\xBA\\xD1\\x83\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD1\\x8B \\xD0\\xBE\\xD1\\x84\\xD0\\xBB\\xD0\\xB0\\xD0\\xB9\\xD0\\xBD \\xA4\\xBB\\xB1\\xF6\\xB31(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12\\x86\\x01\n\\x83\\x01\n gighmmpiobklfepjocnamgkkbiglidom\\x12\\x065.12.0\\x1A>AdBlock \\xE2\\x80\\x94 \\xD0\\xBB\\xD1\\x83\\xD1\\x87\\xD1\\x88\\xD0\\xB8\\xD0\\xB9 "
		"\\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xBA\\xA6\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12[\nY\n jlhmfgmfgeifomenelglieieghnjghma\\x12\\x052.0.4\\x1A\\x15Cisco Webex Extension \\xA8\\x99\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n "
		"mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xAA\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12\\x93\\x01"
		"\n\\x90\\x01\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1AJ\\xD0\\x9F\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xB6\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 Chrome \\x97\\xB8\\xCE\\x86\\xAD1(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.89");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:tRxayn5GgtvJFx_XMSPCRB5OlhcPq4uOCovDFA5deFg&cup2hreq=4b0e6c7e4eb5710e6ae3ea3d80efd0a001e0e5835741dfabc8a96a66f214ae2f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{a29f5ecd-63e8-44e2-b1a6-abbddd83071a}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9ba8ab825d1ec954a636adc66da9e9dd784096ce83182054ac288daf50c04b46\"}]},\"ping\":{\"ping_freshness\":\"{b959553d-411e-4c00-a3f1-51ff4bcb6164}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"1.0.2512.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\""
		"{d9feb863-64db-4874-969a-a6b9d93285a0}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{384c8395-290d-4a95-984c-c93f9ba21c62}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\""
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{93c5d53c-bad9-4edb-8c94-bc43f5405465}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\""
		":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{3598f451-fb83-4b03-a3d9-6085530b6b70}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.f8601c629002f692b889f6c8412ba34facc48b558801d98958dec8b6a8b35711\"}]},\"ping\":{\"ping_freshness\":\"{f9f17d77-31c3-400d-850c-d339b69ebfb9}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"417\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{8badd151-2172-4c4f-84f6-4a33afa20a6a}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\""
		"ping_freshness\":\"{89b3392a-a07d-44ec-bc91-5ad5e804fcb0}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{deb3123b-5e1c-4faa-922d-94b2b1c7e839}\",\"rd\":6138},\"tag\":\"default\",\""
		"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{e4b2ba5c-5e60-4c3a-b04b-17ac4ff96284}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6112,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{ab043405-01dc-4de4-8ddf-7ec8af818860}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.9988c928b31064c9592abf7831cb7dcc3d2f8d2873533b85dce0d5d1a23ab4a4\"}]},\"ping\":{\"ping_freshness\":\"{2ce8f2aa-5f40-4f92-92f6-ef46ff43235d}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"745\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4f5f4deaad1d54b8caffd9c309a67468c01864311a63e428fb630d8dac329256\"}]},\"ping\":{\"ping_freshness\""
		":\"{ea8ea3c1-9ea6-4779-8391-a1c3dab85573}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"3000\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{f6c753ae-39e0-4e63-ace0-08fbb6bdb6fb}\",\"rd\":6138},\"updatecheck\":{},"
		"\"version\":\"2023.10.13.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{ad87d967-4fba-496a-97fc-12209b8eb95d}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{f3f3a24e-b708-48b6-b8a6-32a8abde4104}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{8f23e5a6-9000-404c-a604-92227769f548}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.e9f0107f59c6f0ad69434b9fe3a1061214de66acf3d183a5644a177bcfc135e5\"}]},\"ping\":{\"ping_freshness\":\"{14f0c188-1a9b-4d0b-9c73-d15441cf5f27}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"8314\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\""
		":\"{eedbb9b8-327a-4732-9d79-f38f96fa0253}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6112,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{675f594c-1817-40da-955b-f987204443e8}\",\"rd\":6138},\"updatecheck\":{},\"version\""
		":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6128,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.45b6743a0b9953528e6d7204391db7642cb3d962cc7119eaea9948d90e12ef5d\"}]},\"ping\":{\"ping_freshness\":\"{e94f95b5-55df-4407-aa5a-f9b995ee52e9}\",\"rd\":6138},\"updatecheck\":{},\"version\":\"2023.10.17.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,"
		"\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.89\",\"protocol\":\"3.1\",\"requestid\":\"{0791f339-b567-43a8-af93-4fe1cdcf0f3f}\",\"sessionid\":\"{ddf98276-7635-49e2-9f6e-f03d22864d51}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked"
		"\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\":\"118.0.5993.89\"}}", 
		LAST);

	web_custom_request("crx-telemetry_5", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\xEC\\xCF\\xCE\\xC7\\xB51\\x12\\x8E\\x01\nL\n bfegaehidkkcfaikpaijcdahnpikhobf\\x12\\x053.1.8\\x1A\\x08Gismeteo \\xD4\\xA3\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12>\\x12<\n\\x1A\n\\x14services.gismeteo.ru\\x10\\x01\\x18\\x01\n\\x1E\n\\x18ssl.google-analytics.com\\x10\\x01\\x18\\x01\\x12\\xAE\\x01\n\\x8C\\x01\n cfhdojbkjhnklbpkdaibdccddilifddb\\x12\\x043.19\\x1AIAdblock Plus - "
		"\\xD0\\xB1\\xD0\\xB5\\xD1\\x81\\xD0\\xBF\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xBD\\xD1\\x8B\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xA0\\xB0\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x12\\x1B\n\\x19\n\\x13ipm.adblockplus.dev\\x10\\x01\\x18\\x01\\x12\\xA0\\x03\n^\n "
		"laddjijkcfpakbbnnedbhnnciecidncp\\x12\\x078.24.14\\x1A\\x18\\xD0\\x9F\\xD0\\xBE\\xD0\\xB8\\xD1\\x81\\xD0\\xBA \\xD0\\xAF\\xD0\\xBD\\xD0\\xB4\\xD0\\xB5\\xD0\\xBA\\xD1\\x81a \\xA1\\x86\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x1D\\x1A\\x1B\n\\x17\n\\x05ya.ru\\x12\\x04test\\x1A\\x01/2\\x010:\\x00@\\x01\\x10\\x00\\x12\\x9E\\x02\"\\x9B\\x02\n\\x19\n\\x02ys\\x12\\x0Ehttps://ya.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.by/\\x1A\\x010@\\x01\n!\n"
		"\\x02ys\\x12\\x16https://yandex.com.tr/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.com/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.kz/\\x1A\\x010@\\x01\n\\x1E\n\\x02ys\\x12\\x13https://yandex.net/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ru/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.ua/\\x1A\\x010@\\x01\n\\x1D\n\\x02ys\\x12\\x12https://yandex.uz/\\x1A\\x010@\\x01\\x10\\x00\\x12t\nW\n "
		"mihcahmgecmbnbcchbopgniflfhgnkff\\x12\\x054.4.0\\x1A\\x13Google Mail Checker \\xAD\\x89\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12\\x19\\x12\\x17\n\\x15\n\\x0Fmail.google.com\\x10\\x01\\x18\\x01\\x12j\nh\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A&\\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD Chrome \\xA9\\x91\\xCE\\x86\\xAD1"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12m\nk\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.69.0\\x1A&Google \\xD0\\x94\\xD0\\xBE\\xD0\\xBA\\xD1\\x83\\xD0\\xBC\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD1\\x8B \\xD0\\xBE\\xD1\\x84\\xD0\\xBB\\xD0\\xB0\\xD0\\xB9\\xD0\\xBD \\xA4\\xBB\\xB1\\xF6\\xB31(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12\\x86\\x01\n\\x83\\x01\n gighmmpiobklfepjocnamgkkbiglidom\\x12\\x065.12.0\\x1A>AdBlock \\xE2\\x80\\x94 "
		"\\xD0\\xBB\\xD1\\x83\\xD1\\x87\\xD1\\x88\\xD0\\xB8\\xD0\\xB9 \\xD0\\xB1\\xD0\\xBB\\xD0\\xBE\\xD0\\xBA\\xD0\\xB8\\xD1\\x80\\xD0\\xBE\\xD0\\xB2\\xD1\\x89\\xD0\\xB8\\xD0\\xBA \\xD1\\x80\\xD0\\xB5\\xD0\\xBA\\xD0\\xBB\\xD0\\xB0\\xD0\\xBC\\xD1\\x8B \\xBA\\xA6\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12[\nY\n jlhmfgmfgeifomenelglieieghnjghma\\x12\\x052.0.4\\x1A\\x15Cisco Webex Extension \\xA8\\x99\\xFF\\xF6\\xB31(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\n"
		"Q\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xAA\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xAB\\x91\\xCE\\x86\\xAD1(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xAB\\x91\\xCE\\x86\\xAD1"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12\\x93\\x01\n\\x90\\x01\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1AJ\\xD0\\x9F\\xD0\\xBB\\xD0\\xB0\\xD1\\x82\\xD0\\xB5\\xD0\\xB6\\xD0\\xBD\\xD0\\xB0\\xD1\\x8F \\xD1\\x81\\xD0\\xB8\\xD1\\x81\\xD1\\x82\\xD0\\xB5\\xD0\\xBC\\xD0\\xB0 \\xD0\\x98\\xD0\\xBD\\xD1\\x82\\xD0\\xB5\\xD1\\x80\\xD0\\xBD\\xD0\\xB5\\xD1\\x82-\\xD0\\xBC\\xD0\\xB0\\xD0\\xB3\\xD0\\xB0\\xD0\\xB7\\xD0\\xB8\\xD0\\xBD\\xD0\\xB0 Chrome \\x97\\xB8\\xCE\\x86\\xAD1"
		"(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	lr_start_transaction("UC01_01_Home_page");

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

	lr_think_time(18);

	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t172.inf", 
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
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(6);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC01_01_Home_page",LR_AUTO);

	lr_start_transaction("UC01_02_Login");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(30);

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		"Body=userSession=137545.933333333HAHfAVipQtfiDDDDtctfApVVDzHf&username=Bob&password=Big&login.x=64&login.y=8&JSFormSubmit=on", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(24);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t180.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t181.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t182.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t183.inf", 
		LAST);

	lr_end_transaction("UC01_02_Login",LR_AUTO);

	lr_start_transaction("UC01_03_Flights");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(23);

	web_custom_request("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(19);

	web_custom_request("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t186.inf", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t187.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t189.inf", 
		LAST);

	lr_end_transaction("UC01_03_Flights",LR_AUTO);

	lr_start_transaction("UC01_04_Vvod_info");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(26);

	web_custom_request("reservations.pl_2", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart=Sydney&departDate=10%2F23%2F2023&arrive=Zurich&returnDate=10%2F24%2F2023&numPassengers=1&seatPref=Window&seatType=Business&findFlights.x=54&findFlights.y=9&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
		LAST);

	lr_end_transaction("UC01_04_Vvod_info",LR_AUTO);

	lr_think_time(33);

	lr_start_transaction("UC01_05_Vybor_reysa");

	web_custom_request("reservations.pl_3", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight=892%3B1471%3B10%2F23%2F2023&numPassengers=1&advanceDiscount=0&seatType=Business&seatPref=Window&reserveFlights.x=29&reserveFlights.y=8", 
		LAST);

	lr_end_transaction("UC01_05_Vybor_reysa",LR_AUTO);

	lr_think_time(35);

	lr_start_transaction("UC01_06_Oplata");

	web_custom_request("reservations.pl_4", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"Body=firstName=Bob&lastName=Big&address1=White+street&address2=Chicago&pass1=Bob+Big&creditCard=11111111111111111111&expDate=11%2F25&oldCCOption=&numPassengers=1&seatType=Business&seatPref=Window&outboundFlight=892%3B1471%3B10%2F23%2F2023&advanceDiscount=0&returnFlight=&JSFormSubmit=off&buyFlights.x=40&buyFlights.y=5&.cgifields=saveCC", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_custom_request("bookanother.gif", 
		"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t193.inf", 
		LAST);

	lr_end_transaction("UC01_06_Oplata",LR_AUTO);

	lr_start_transaction("UC01_07_Broni");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(35);

	web_custom_request("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_5", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(6);

	web_custom_request("in_itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t197.inf", 
		LAST);

	lr_think_time(11);

	web_custom_request("cancelreservation.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t198.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://localhost:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t199.inf", 
		LAST);

	lr_end_transaction("UC01_07_Broni",LR_AUTO);

	lr_start_transaction("UC01_08_Exit");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(19);

	web_custom_request("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_6", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(7);

	web_custom_request("home.html_3", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_revert_auto_header("Sec-Fetch-User");

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

	web_add_auto_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_auto_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_custom_request("ChRDaHJvbWUvMTE4LjAuNTk5My44ORIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTE4LjAuNTk5My44ORIgCU35IjnBRbgwEgUN541ADhIFDc5BTHohSeE1wfpE8PA=?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t203.inf", 
		LAST);

	web_custom_request("ChRDaHJvbWUvMTE4LjAuNTk5My44ORJDCTnKWcjO4LgAEgUNa2iabhIFDU-eJ_gSBQ1jkyeHEgUNolm4SRIFDfi0_qASBQ1XaCyZEgUNbfpmySHlHrXmqaMcGA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTE4LjAuNTk5My44ORJDCTnKWcjO4LgAEgUNa2iabhIFDU-eJ_gSBQ1jkyeHEgUNolm4SRIFDfi0_qASBQ1XaCyZEgUNbfpmySHlHrXmqaMcGA==?alt=proto", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t204.inf", 
		LAST);

	lr_end_transaction("UC01_08_Exit",LR_AUTO);

	return 0;
}