// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "BlankPage.xaml.h"
#if __has_include("BlankPage.g.cpp")
#include "BlankPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::AppTest::implementation
{
    BlankPage::BlankPage()
    {
        InitializeComponent();
    }

    BlankPage::~BlankPage()
    {
        /* Do something to know that the destructor has been called */
        std::ofstream oFile("blankpage.txt");
        if (oFile.is_open()) {
            oFile << "blankpage";
        }
        oFile.close();
    }

}
