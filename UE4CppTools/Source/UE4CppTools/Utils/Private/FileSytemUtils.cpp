// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/FileSytemUtils.h"
#include <Developer/DesktopPlatform/Public/DesktopPlatformModule.h>

FString UFileSytemUtils::PickDirectory(AActor* actor, FString path) {
	FString outDirName;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform) {
		return FString();
	}
	DesktopPlatform->OpenDirectoryDialog(nullptr, TEXT("File Browser"), FPaths::ConvertRelativePathToFull(path), outDirName);
	return outDirName;
}

FString UFileSytemUtils::PickFile(AActor* actor, FString path)
{
	TArray<FString> outFileNames;
	FString ExtensionStr = TEXT("*.*");

	FString outDirName;
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform) {
		return FString();
	}
	DesktopPlatform->OpenFileDialog(nullptr, TEXT("File Browser"), FPaths::ConvertRelativePathToFull(path), TEXT(""), ExtensionStr, 0, outFileNames);
	if (outFileNames.Num() > 0) {
		return outFileNames[0];
	}
	else {
		return FString();
	}
}

FString UFileSytemUtils::ReadFileToString(AActor* actor, FString path)
{
	return FString();
}
