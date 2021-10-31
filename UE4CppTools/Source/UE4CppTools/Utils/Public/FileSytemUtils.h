// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileSytemUtils.generated.h"

/**
 * 
 */
UCLASS()
class UE4CPPTOOLS_API UFileSytemUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Utils|FileSystem")
	static FString PickDirectory(AActor* actor, FString path = TEXT("./"));
	
	UFUNCTION(BlueprintCallable, Category = "Utils|FileSystem")
	static FString PickFile(AActor* actor, FString path = TEXT("./"));

	UFUNCTION(BlueprintCallable, Category = "Utils|FileSystem")
	static FString ReadFileToString(AActor* actor, FString path = TEXT("./"));
};
