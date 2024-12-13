// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Plague : ModuleRules
{
	public Plague(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {"ArticyRuntime", "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
