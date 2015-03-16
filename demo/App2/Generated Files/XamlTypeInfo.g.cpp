﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "MainPage.xaml.h"

#include "App.g.hpp"
#include "MainPage.g.hpp"

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        _otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        ::Windows::UI::Xaml::Markup::IXamlMetadataProvider^ provider;
        provider = ref new ::DesktopAd::DesktopAd_XamlTypeInfo::XamlMetaDataProvider();
        _otherProviders->Append(provider); 
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::Platform::String^ typeName)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(typeName);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(::Windows::UI::Xaml::Interop::TypeName t)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(t);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    if (typeName == L"Windows.UI.Xaml.Controls.UserControl")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"String")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Object")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.Page")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"DesktopAd.Banner")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.UserControl"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::DesktopAd::Banner(); 
            };
        userType->AddMemberName(L"AppKey");
        userType->AddMemberName(L"AppSecret");
        userType->AddMemberName(L"AdStyle");
        return userType;
    }

    if (typeName == L"DesktopAd.BannerStyle")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"System.Enum"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        userType->FromStringConverter =
            [](::XamlTypeInfo::InfoProvider::XamlUserType^ userType, Platform::String^ input) -> Platform::Object^
            {
                uint32 enumValue = userType->CreateEnumUIntFromString(input);
                return ref new Platform::Box<DesktopAd::BannerStyle>((DesktopAd::BannerStyle)enumValue);
            };
        userType->AddEnumValue(L"Transverse", ::Windows::Foundation::PropertyValue::CreateInt32((int)DesktopAd::BannerStyle::Transverse));
        userType->AddEnumValue(L"Vertical", ::Windows::Foundation::PropertyValue::CreateInt32((int)DesktopAd::BannerStyle::Vertical));
        return userType;
    }

    if (typeName == L"System.Enum")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"System.ValueType"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        return userType;
    }

    if (typeName == L"System.ValueType")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Metadata;
        return userType;
    }

    if (typeName == L"App2.MainPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::App2::MainPage(); 
            };
        return userType;
    }

    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    if (longMemberName == L"DesktopAd.Banner.AppKey")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"AppKey", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::DesktopAd::Banner^)instance;
                return that->AppKey;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::DesktopAd::Banner^)instance;
                that->AppKey = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"DesktopAd.Banner.AppSecret")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"AppSecret", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::DesktopAd::Banner^)instance;
                return that->AppSecret;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::DesktopAd::Banner^)instance;
                that->AppSecret = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"DesktopAd.Banner.AdStyle")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"AdStyle", L"DesktopAd.BannerStyle");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::DesktopAd::Banner^)instance;
                auto value = ref new ::Platform::Box<::DesktopAd::BannerStyle>(that->AdStyle);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::DesktopAd::Banner^)instance;
                auto boxedValue = (::Platform::IBox<::DesktopAd::BannerStyle>^)value;
                that->AdStyle = (::DesktopAd::BannerStyle)(boxedValue->Value);
            };
        return xamlMember;
    }

    return nullptr;
}
