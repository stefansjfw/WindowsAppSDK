// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once
bool IsResourceNotFound(HRESULT hr);
HRESULT GetDefaultPriFile(winrt::hstring& path);
BOOLEAN _DefIsWellFormedTag(_In_ PCWSTR tag);
