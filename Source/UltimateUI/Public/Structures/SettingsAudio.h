// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "SettingsAudio.generated.h"

/**
 * Used for settings related to audio
 */
USTRUCT(BlueprintType)
struct ULTIMATEUI_API FSettingsAudio
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Audio")
	float Master;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Audio")
	float Ambient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Audio")
	float SFX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Audio")
	float Music;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Audio")
    float Menu;
	
	FSettingsAudio()
		: Master(1.0f), Ambient(1.0f), SFX(1.0f), Music(1.0f), Menu(1.0f)
	{}

	FSettingsAudio(const float InMaster, const float InAmbient, const float InSFX, const float InMusic, const float InMenu)
		: Master(InMaster), Ambient(InAmbient), SFX(InSFX), Music(InMusic), Menu(InMenu)
	{}
};
