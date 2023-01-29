// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsGraphics.generated.h"

/**
 * Used for settings related to graphics
 */
USTRUCT(BlueprintType)
struct ULTIMATEUI_API FSettingsGraphics
{
	GENERATED_BODY()

	/** True = Show frame rate indicator */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Graphics")
	bool FrameRate;
	
	FSettingsGraphics()
		: FrameRate(false)
	{}

	FSettingsGraphics(const bool InFrameRate)
		: FrameRate(InFrameRate)
	{}
};