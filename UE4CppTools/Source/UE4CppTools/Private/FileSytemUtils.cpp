// Fill out your copyright notice in the Description page of Project Settings.


#include "FileSytemUtils.h"
#include <Developer/DesktopPlatform/Public/DesktopPlatformModule.h>

FString UFileSytemUtils::PickDirectory(AActor* actor, FString path) {
	TArray<FString> OpenFileNames;
	FString ExtensionStr = TEXT("*.*");

	FString outDirName;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	DesktopPlatform->OpenDirectoryDialog(nullptr, TEXT("File Browser"), FPaths::ConvertRelativePathToFull(path), outDirName);
	return outDirName;
}