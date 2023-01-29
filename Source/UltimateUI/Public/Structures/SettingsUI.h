// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsUI.generated.h"

/**
 * Used for settings related to UI
 */
USTRUCT(BlueprintType)
struct ULTIMATEUI_API FSettingsUI
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|UI")
	float CursorSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|UI")
	float CrosshairSize;
	
	FSettingsUI()
		: CursorSize(30.0f), CrosshairSize(4.0f)
	{}

	FSettingsUI(const float InCursorSize, const float InCrosshairSize)
		: CursorSize(InCursorSize), CrosshairSize(InCrosshairSize)
	{}
};
