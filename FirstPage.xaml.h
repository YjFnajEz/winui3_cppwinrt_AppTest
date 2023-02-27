// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "FirstPage.g.h"

namespace winrt::AppTest::implementation
{
    struct FirstPage : FirstPageT<FirstPage>
    {
        FirstPage();
        ~FirstPage();
     };
}

namespace winrt::AppTest::factory_implementation
{
    struct FirstPage : FirstPageT<FirstPage, implementation::FirstPage>
    {
    };
}
