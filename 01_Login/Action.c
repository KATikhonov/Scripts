Action()
{

	lr_start_transaction("UC01_Login");

	lr_start_transaction("UC01_01_Home_page");

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


	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t14.inf", 
		LAST);

	web_reg_find("Text=Welcome to the Web Tours site.",
		LAST);
	
	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webtours/header.html", 
		"Snapshot=t16.inf", 
		LAST);



/*Correlation comment - Do not change!  Original value='137577.385500203HAHzzDzpHzzzzzzHtctfQpicAz' Name ='userSession' Type ='RecordReplay'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		LAST);

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t18.inf", 
		LAST);

	


	web_custom_request("JSFormSubmit.js", 
		"URL=http://localhost:1080/WebTours/JSFormSubmit.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t19.inf", 
		LAST);



	lr_end_transaction("UC01_01_Home_page", LR_AUTO);


	lr_start_transaction("UC01_02_Login");


	lr_think_time(17);

	
		web_reg_find("Fail=NotFound",
		"Text/IC=User password was correct",
		LAST);
	
	
	web_custom_request("login.pl",
		"URL=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t23.inf",
		"Mode=HTTP",
		"Body=userSession={userSession}&username={Login}&password={Password}&login.x=53&login.y=12&JSFormSubmit=on",
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



	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t30.inf", 
		LAST);


	lr_end_transaction("UC01_02_Login", LR_AUTO);

	

	lr_start_transaction("UC01_03_EXIT");

	
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

	lr_end_transaction("UC01_03_EXIT",LR_AUTO);
	
lr_end_transaction("UC01_Login", LR_AUTO);


	return 0;
}