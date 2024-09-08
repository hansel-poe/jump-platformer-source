// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Final_Proj_Hansel : ModuleRules
{
	public Final_Proj_Hansel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
