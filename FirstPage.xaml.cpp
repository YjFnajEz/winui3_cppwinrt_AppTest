// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "FirstPage.xaml.h"
#if __has_include("FirstPage.g.cpp")
#include "FirstPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::AppTest::implementation
{
    FirstPage::FirstPage()
    {
        InitializeComponent();
    }

    FirstPage::~FirstPage()
    {
        /* Do something to know that the destructor has been called */
        std::ofstream oFile("firstpage.txt");
        if (oFile.is_open()) {
            oFile << "firstpage";
        }
        oFile.close();
    }
}
