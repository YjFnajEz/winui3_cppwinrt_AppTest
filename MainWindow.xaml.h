// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"

namespace winrt::AppTest::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
    };
}

namespace winrt::AppTest::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
