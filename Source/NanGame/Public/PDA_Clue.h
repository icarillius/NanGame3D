// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDA_Clue.generated.h"

/**
 * 
 */
UCLASS()
class NANGAME_API UPDA_Clue : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClueSockets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClueTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClueDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundCue* Audiofile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isGameplayClue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PictureVar;
};
