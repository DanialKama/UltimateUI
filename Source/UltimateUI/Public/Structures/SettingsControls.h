// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsControls.generated.h"

/**
 * Used for settings related to controls
 */
USTRUCT(BlueprintType)
struct ULTIMATEUI_API FSettingsControls
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	bool ForceFeedback;

	/** True = Toggle, False = Hold */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	bool SprintMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	bool InvertLookX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	bool InvertLookY;
	
	FSettingsControls()
		: ForceFeedback(true), SprintMode(true), InvertLookX(false), InvertLookY(false)
	{}

	FSettingsControls(const bool InForceFeedback, const bool InSprintMode, const bool InInvertLookX, const bool InInvertLookY)
		: ForceFeedback(InForceFeedback), SprintMode(InSprintMode), InvertLookX(InInvertLookX), InvertLookY(InInvertLookY)
	{}
};
