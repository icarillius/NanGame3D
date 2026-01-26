// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDA_Interact.generated.h"

/**
 * 
 */
UCLASS()
class NANGAME_API UPDA_Interact : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* InteractableObject = CreateDefaultSubobject<UStaticMesh>(TEXT("Mesh"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ScaleModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ClueSockets;
};
