// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "BlankPage.g.h"

namespace winrt::AppTest::implementation
{
    struct BlankPage : BlankPageT<BlankPage>
    {
        BlankPage();
        ~BlankPage();
    };
}

namespace winrt::AppTest::factory_implementation
{
    struct BlankPage : BlankPageT<BlankPage, implementation::BlankPage>
    {
    };
}
