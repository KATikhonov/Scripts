Action()
{
	lr_start_transaction("03_Pokypka_biletov");

lr_start_transaction("03_01_Home_page");

	web_custom_request("webtours_2", 
		"URL=http://localhost:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_custom_request("header.html_2", 
		"URL=http://localhost:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);



	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webtours/", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);


/*Correlation comment - Do not change!  Original value='137545.933333333HAHfAVipQtfiDDDDtctfApVVDzHf' Name ='userSession' Type ='RecordReplay'*/
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
lr_end_transaction("03_01_Home_page", LR_AUTO);



	lr_think_time(30);
	lr_start_transaction("03_02_Login");

		web_reg_find("Fail=NotFound",
		"Text/IC=User password was correct",
		LAST);

	web_custom_request("login.pl",
		"URL=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t177.inf",
		"Mode=HTTP",
		"Body=userSession={userSession}&username={Login}&password={Password}&login.x=64&login.y=8&JSFormSubmit=on",
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

lr_end_transaction("03_02_Login", LR_AUTO);


	lr_think_time(24);
	
	lr_start_transaction("03_03_Flights");


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
	



		web_reg_find("Fail=NotFound",
		"Text/IC= User has returned to the search page.",
		LAST);
	
	
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



	web_custom_request("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	
	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t189.inf", 
		LAST);


lr_end_transaction("03_03_Flights", LR_AUTO);
	

lr_start_transaction("03_04_Vvod_info");

	

	lr_think_time(26);

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
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart={depart}&departDate=10%2F25%2F2023&arrive={arrive}&returnDate=10%2F26%2F2023&numPassengers=1&seatPref={seatPref}&seatType={seatType}&findFlights.x=54&findFlights.y=9&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
		LAST);



	lr_end_transaction("03_04_Vvod_info", LR_AUTO);



	lr_think_time(33);



	lr_start_transaction("03_05_Vybor_reisov");


	
	
	web_custom_request("reservations.pl_3", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"Body=outboundFlight={outboundFlight}&numPassengers=1&advanceDiscount=0&seatType={seatType}&seatPref={seatPref}&reserveFlights.x=29&reserveFlights.y=8", 
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
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		"Body=advanceDiscount=0&depart={depart}&departDate=10%2F25%2F2023&arrive={arrive}&returnDate=10%2F26%2F2023&numPassengers=1&seatPref={seatPref}&seatType={seatType}&findFlights.x=54&findFlights.y=9&.cgifields=roundtrip&.cgifields=seatType&.cgifields=seatPref", 
		LAST);

	lr_end_transaction("03_05_Vybor_reisov", LR_AUTO);


	lr_think_time(35);

lr_start_transaction("03_06_Oplata");


	web_custom_request("reservations.pl_4", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"Body=firstName={Login}&lastName={Password}&address1={address1}&address2={address2}&pass1={pass1}&creditCard={creditCard}&expDate={expDate}&oldCCOption=&numPassengers=1&seatType={seatType}&seatPref={seatPref}&outboundFlight={outboundFlight}&advanceDiscount=0&returnFlight=&JSFormSubmit=off&buyFlights.x=40&buyFlights.y=5&.cgifields=saveCC", 
		LAST);

	
	web_custom_request("bookanother.gif", 
		"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t193.inf", 
		LAST);


lr_end_transaction("03_06_Oplata", LR_AUTO);

	

	lr_think_time(35);
	
	lr_start_transaction("03_07_Broni");


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

	

	web_custom_request("itinerary.pl", 
		"URL=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);





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
lr_end_transaction("03_07_Broni", LR_AUTO);


	lr_think_time(19);
	
	lr_start_transaction("03_08_Exit");

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
	lr_end_transaction("03_08_Exit", LR_AUTO);


lr_end_transaction("03_Pokypka_biletov", LR_AUTO);


	return 0;
}