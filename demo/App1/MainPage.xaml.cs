using DesktopAd;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;


namespace App1
{
    /// <summary>
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            myad.Load();

            myad.BannerError += myad_BannerError;
        }

        void myad_BannerError(object sender, ErrorTypeEnum e)
        {
            string errorstr = "";
            switch (e)
            {
                case ErrorTypeEnum.NetworkErrorOrServerError:
                    errorstr = "Network Error";
                    break;
                case ErrorTypeEnum.AppKeyOrAppSecretError:
                    errorstr = "Appkey or Appsecret Error";
                    break;
                case ErrorTypeEnum.ResponseError:
                    errorstr = "Service Error";
                    break;
                case ErrorTypeEnum.Unknown:
                    break;
                default:
                    break;
            }
        }

        private void Button_Transverse_Click(object sender, RoutedEventArgs e)
        {
            myad.AdStyle = BannerStyle.Transverse;
            myad.Load();
        }

        private void Button_HalfTransverse_Click(object sender, RoutedEventArgs e)
        {
            myad.AdStyle = BannerStyle.MinTransverse;
            myad.Load();
        }

        private void Button_Vertical_Click(object sender, RoutedEventArgs e)
        {
            myad.AdStyle = BannerStyle.Vertical;
            myad.Load();
        }

        private void Button_OpenPopup_Click(object sender, RoutedEventArgs e)
        {
            Popup popup = new Popup();
            BannerPopup.Create(popup, "Your appkey", "Your appscret");

        }

      
    }
}
