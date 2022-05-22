// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class thePhilosophersStone : ModuleRules
{
	public thePhilosophersStone(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
