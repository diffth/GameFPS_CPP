// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameFPS_CPP : ModuleRules
{
	public GameFPS_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
