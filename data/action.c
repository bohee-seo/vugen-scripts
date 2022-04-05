Action()
{

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.eot?", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.eot?", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.eot?", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.eot?", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.eot?", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j96&a=603717092&t=pageview&_s=2&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1794x1091&je=1&_u=IEBAAEQAAAAAAC~&jid=&gjid=&cid=1284002495.1649133827&tid=UA-81334227-1&_gid=1384948611.1649133827&z=1753333606", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/arrow_right.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("api", 
		"URL=https://whatfix.com/api?service=admin&action=extension_config", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ent_id\":\"9ac8fa80-57d3-11ea-a224-bacbbe07b880\"}", 
		LAST);

	web_custom_request("api_2", 
		"URL=https://whatfix.com/api?service=admin&action=extension_config", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ent_id\":\"9ac8fa80-57d3-11ea-a224-bacbbe07b880\"}", 
		LAST);

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("api_3", 
		"URL=https://whatfix.com/api?service=admin&action=extension_config", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ent_id\":\"9ac8fa80-57d3-11ea-a224-bacbbe07b880\"}", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j96&a=603717092&t=pageview&_s=1&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1794x1091&je=1&_u=IEBAAEQAAAAAAC~&jid=793151084&gjid=851630677&cid=1284002495.1649133827&tid=UA-81334227-1&_gid=1384948611.1649133827&_r=1&_slc=1&z=59244304", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_custom_request("api_4", 
		"URL=https://whatfix.com/api?service=admin&action=extension_config", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ent_id\":\"9ac8fa80-57d3-11ea-a224-bacbbe07b880\"}", 
		LAST);

	return 0;
}