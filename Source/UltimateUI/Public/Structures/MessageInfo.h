// Copyright 2023 Danial Kamali. All Rights Reserved.

#pragma once

#include "MessageInfo.generated.h"

/**
 * Used in message widget
 */
USTRUCT(BlueprintType, meta = (DisplayName = "Message Info"))
struct ULTIMATEUI_API FMessageInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Message")
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Message")
	FText Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Message")
	FText Description;

	/** To hide the button, leave it empty. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Message")
	FText ConfirmButton;

	/** To hide the button, leave it empty. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Message")
	FText CancelButton;
	
	/** Default constructor */
	FMessageInfo()
		: Color(FColor::White), Label(FText::GetEmpty()), Description(FText::GetEmpty()), ConfirmButton(FText::GetEmpty()), CancelButton(FText::GetEmpty())
	{}

	FMessageInfo(const FColor InColor, const FText InLabel, const FText InDescription, const FText InConfirmButton, const FText InCancelButton)
		: Color(InColor), Label(InLabel), Description(InDescription), ConfirmButton(InConfirmButton), CancelButton(InCancelButton)
	{}
};
