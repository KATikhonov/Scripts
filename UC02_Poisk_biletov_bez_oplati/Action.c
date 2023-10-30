Action()
{

	lr_start_transaction("UC02_Poisk_biletov_bez_oplati");


lr_start_transaction("UC02_01_Home_page");
	

	
	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	

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

	
	

/*Correlation comment - Do not change!  Original value='137577.491130012HAHzztcpctctfQpifDc' Name ='userSession' Type ='RecordReplay'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		LAST);

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

	

	
	lr_end_transaction("UC02_01_Home_page",LR_AUTO);

	lr_think_time(6);
	
	lr_start_transaction("UC02_02_Login");

	

	lr_think_time(41);

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
		"Body=userSession={userSession}&username={Login}&password={Password}&login.x=62&login.y=12&JSFormSubmit=on",
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

	

	lr_think_time(44);


	lr_start_transaction("UC02_03_Flight");

	
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

	
	web_custom_request("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t33.inf", 
		LAST);

	

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

	


	lr_start_transaction("UC02_04_Vvod_info");

	

	lr_think_time(38);

		web_reg_save_param_ex(
		"ParamName=outboundFlight",
		"LB/IC=name\=\"outboundFlight\" value\=\"",
		"RB/IC=\"",
		"NotFound=warning",
		"Ordinal=1",
		"SaveLen=-1",
		SEARCH_FILTERS,
		LAST);
	
		web_reg_find("Fail=NotFound",
		"Text/IC= from <B>{depart}</B> to <B>{arrive}</B",
		LAST);
	
	web_custom_request("reservations.pl_2", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart={depart}&departDate=10%2F28%2F2023&arrive={arrive}&returnDate=10%2F29%2F2023&numPassengers=1&seatPref={seatPref}&seatType={seatType}&findFlights.x=56&findFlights.y=7&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
		LAST);

	lr_end_transaction("UC02_04_Vvod_info",LR_AUTO);

	

	lr_think_time(57);


	lr_start_transaction("UC02_05_Vybor_reysa");

	

	lr_think_time(21);

	
	
	web_custom_request("reservations.pl_3", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight={outboundFlight}&numPassengers=1&advanceDiscount=0&seatType={seatType}&seatPref={seatPref}&reserveFlights.x=46&reserveFlights.y=10", 
		LAST);

	lr_end_transaction("UC02_05_Vybor_reysa",LR_AUTO);
	
	lr_end_transaction("UC02_Poisk_biletov_bez_oplati",LR_AUTO);

	return 0;
}