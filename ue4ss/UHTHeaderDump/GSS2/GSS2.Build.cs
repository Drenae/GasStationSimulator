using UnrealBuildTool;

public class GSS2 : ModuleRules {
    public GSS2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CollectibleItems",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DistanceBasedOptimizer",
            "EOSManagers",
            "Engine",
            "GameplayTags",
            "GenericGraphRuntime",
            "GoogleAnalyticsManager",
            "InputCore",
            "JsonUtilities",
            "LevelSequence",
            "MediaAssets",
            "NavigationSystem",
            "Niagara",
            "NopeAISystem",
            "PhysXVehicles",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "SlateCore",
            "TechTree",
            "UMG",
        });
    }
}
