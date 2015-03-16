//
// MainPage.xaml.cpp
// 
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App2;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;


MainPage::MainPage()
{
	InitializeComponent();
}


void App2::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	
	//MainPage::myad->AdStyle = DesktopAd::BannerStyle::Transverse;
	MainPage::myad->AdStyle = DesktopAd::BannerStyle::Vertical;
	MainPage::myad->Load();
}

void App2::MainPage::Button_Click1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Popup^ p=ref new Popup();
	String^ key("Your appkey");
	String^ appsecret("Your appsecret");
	DesktopAd::BannerPopup::Create(p, 
		key,
		appsecret);
}
