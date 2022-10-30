// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
		PrivatePCHHeaderFile = "Private/NativizedAssets.h";
		bLegacyPublicIncludePaths = Target.bLegacyPublicIncludePaths;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Niagara", "SunPosition", "MagicLeapARPin", "NavigationSystem", "SlateCore", "UMG", "AnimGraphRuntime", "MovieScene", "MovieSceneTracks", "ClothingSystemRuntimeNv", "PhysicsCore", "InputCore", "Landscape", "ApexDestruction", "Slate", "AIModule", "KawaiiPhysics", "HeadMountedDisplay", "Chaos", "FieldSystemEngine", "StaticMeshDescription", "MeshDescription", "AudioExtensions", "AudioPlatformConfiguration", "GameplayTasks", "GameplayTags", "ClothingSystemRuntimeInterface", "PropertyAccess", "PropertyPath", "AudioMixer", "NiagaraShader", "NiagaraCore", "ChaosSolverEngine", "AnimationCore" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
