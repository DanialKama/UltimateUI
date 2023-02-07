// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsControls.generated.h"

/**
 * Used for settings related to controls
 */
USTRUCT(BlueprintType, meta = (DisplayName = "Controls Settings"))
struct ULTIMATEUI_API FSettingsControls
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	uint8 ForceFeedback : 1;

	/** True = Toggle, False = Hold */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	uint8 SprintMode : 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Controls")
	uint8 InvertLook : 1;
	
	/** Default constructor */
	FSettingsControls()
		: ForceFeedback(true), SprintMode(true), InvertLook(false)
	{}

	FSettingsControls(const bool InForceFeedback, const bool InSprintMode, const bool InInvertLook)
		: ForceFeedback(InForceFeedback), SprintMode(InSprintMode), InvertLook(InInvertLook)
	{}
};
