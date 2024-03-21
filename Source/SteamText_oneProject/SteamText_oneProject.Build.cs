// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SteamText_oneProject : ModuleRules
{
	public SteamText_oneProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
