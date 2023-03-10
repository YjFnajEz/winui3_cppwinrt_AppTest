// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "FirstPage.xaml.h"
#include "BlankPage.xaml.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::AppTest::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        this->frameContent().Navigate(winrt::xaml_typename<AppTest::FirstPage>());
    }
}
