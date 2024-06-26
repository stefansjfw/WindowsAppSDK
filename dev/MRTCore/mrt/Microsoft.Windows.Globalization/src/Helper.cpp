// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"

bool IsWellFormedLanguageTag(const wchar_t* languageTag)
{
    // Implementation taken from Platform.h, without accepting semi-colon, as it must be a single language tag
    if (languageTag == nullptr || *languageTag == L'\0')
    {
        return FALSE;
    }

    BOOLEAN ok = TRUE;
    PCWSTR test = languageTag;

    while (ok && (*test != L'\0'))
    {
        // we accept letters, numbers, dash and semi-colon (as list separator)
        if (((*test >= L'0') && (*test <= L'9')) || ((*test >= L'a') && (*test <= L'z')) || ((*test >= L'A') && (*test <= L'Z')) ||
            (*test == L'-'))
        {
            test++;
        }
        else
        {
            ok = FALSE;
        }
    }

    return ok && ((test - languageTag) >= 2);
}
