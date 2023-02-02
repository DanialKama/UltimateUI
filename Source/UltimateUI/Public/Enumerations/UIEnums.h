// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "UIEnums.generated.h"

/** Used in settings loading system */
UENUM(BlueprintType, Category = "UI", meta = (DisplayName = "Loading Mode"))
enum class ELoadingMode : uint8
{
	// No loading
	Idle	UMETA(DisplayName = "Idle"),

	// Loading the settings
	Load	UMETA(DisplayName = "Load"),

	// Resetting the settings
	Reset	UMETA(DisplayName = "Reset")
};
