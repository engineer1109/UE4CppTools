// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE4CppToolsGameModeBase.h"

#include "FileSytemUtils.h"

void AUE4CppToolsGameModeBase::test() {
	UFileSytemUtils::PickDirectory(nullptr, TEXT("./"));
}