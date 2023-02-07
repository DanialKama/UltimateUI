// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsGraphics.generated.h"

/**
 * Used for settings related to graphics
 */
USTRUCT(BlueprintType, meta = (DisplayName = "Graphics Settings"))
struct ULTIMATEUI_API FSettingsGraphics
{
	GENERATED_BODY()

	/** True = Show frame rate indicator */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Graphics")
	bool FrameRate;
	
	/** Default constructor */
	FSettingsGraphics()
		: FrameRate(false)
	{}

	FSettingsGraphics(const bool InFrameRate)
		: FrameRate(InFrameRate)
	{}
};
