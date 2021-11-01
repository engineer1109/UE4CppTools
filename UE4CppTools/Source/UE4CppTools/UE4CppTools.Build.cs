// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public class UE4CppTools : ModuleRules
{
	public UE4CppTools(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "LibUE4CppTools" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		CppStandard = CppStandardVersion.Cpp17;

		PublicIncludePaths.AddRange(new string[] { 
			Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Plugins/LibUE4CppTools/Source/LibUE4CppTools/Public/Utils")),
		});
		//Console.WriteLine("{0}", PublicIncludePaths[2]);

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
