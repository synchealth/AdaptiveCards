// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"
#include "AdaptiveFontStyleDefinition.h"
#include "AdaptiveFontStylesDefinition.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

namespace AdaptiveNamespace
{
    HRESULT AdaptiveFontTypesDefinition::RuntimeClassInitialize() noexcept try
    {
        FontTypesDefinition fontTypesDefinition;
        return RuntimeClassInitialize(fontTypesDefinition);
    }
    CATCH_RETURN;

    HRESULT AdaptiveFontTypesDefinition::RuntimeClassInitialize(FontTypesDefinition fontTypesDefinition) noexcept
    {
        RETURN_IF_FAILED(MakeAndInitialize<AdaptiveFontTypeDefinition>(m_default.GetAddressOf(), fontTypesDefinition.defaultFontType));
        RETURN_IF_FAILED(MakeAndInitialize<AdaptiveFontTypeDefinition>(m_monospace.GetAddressOf(), fontTypesDefinition.monospaceFontType));

        return S_OK;
    }

    HRESULT AdaptiveFontTypesDefinition::get_Default(_COM_Outptr_ ABI::AdaptiveNamespace::IAdaptiveFontTypeDefinition** value)
    {
        return m_default.CopyTo(value);
    }

    HRESULT AdaptiveFontTypesDefinition::put_Default(_In_ ABI::AdaptiveNamespace::IAdaptiveFontTypeDefinition* value)
    {
        m_default = value;
        return S_OK;
    }

    HRESULT AdaptiveFontTypesDefinition::get_Monospace(_COM_Outptr_ ABI::AdaptiveNamespace::IAdaptiveFontTypeDefinition** value)
    {
        return m_monospace.CopyTo(value);
    }

    HRESULT AdaptiveFontTypesDefinition::put_Monospace(_In_ ABI::AdaptiveNamespace::IAdaptiveFontTypeDefinition* value)
    {
        m_monospace = value;
        return S_OK;
    }
}
