#ifndef UE4SS_SDK_DistanceBasedOptimizer_HPP
#define UE4SS_SDK_DistanceBasedOptimizer_HPP

struct FSignificanceLevel
{
    int32 SignificanceLevel;                                                          // 0x0000 (size: 0x4)
    float FromDistance;                                                               // 0x0004 (size: 0x4)
    float ToDistance;                                                                 // 0x0008 (size: 0x4)
    float TickInterval;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

class ASignificanceActorBase : public AActor
{
    bool bDistanceOptimizationEnabled;                                                // 0x0220 (size: 0x1)
    FName SignificanceCalculationsTag;                                                // 0x0224 (size: 0x8)
    bool bDisableTickWhenNotRendered;                                                 // 0x022C (size: 0x1)
    int32 MaxTickDisableSignificanceLevel;                                            // 0x0230 (size: 0x4)
    bool bOverrideDefaultSignificanceLevels;                                          // 0x0234 (size: 0x1)
    TArray<FSignificanceLevel> SignificanceLevelsDefinitions;                         // 0x0238 (size: 0x10)

}; // Size: 0x248

class ASignificanceCharacterBase : public ACharacter
{
    bool bDistanceOptimizationEnabled;                                                // 0x04B8 (size: 0x1)
    FName SignificanceCalculationsTag;                                                // 0x04BC (size: 0x8)
    bool bDisableTickWhenNotRendered;                                                 // 0x04C4 (size: 0x1)
    int32 MaxTickDisableSignificanceLevel;                                            // 0x04C8 (size: 0x4)
    bool bOverrideDefaultSignificanceLevels;                                          // 0x04CC (size: 0x1)
    bool bOverridePriorityWhenNotRendered;                                            // 0x04CD (size: 0x1)
    int32 NotRenderedOverridePriorityLevel;                                           // 0x04D0 (size: 0x4)
    TArray<FSignificanceLevel> SignificanceLevelsDefinitions;                         // 0x04D8 (size: 0x10)

}; // Size: 0x4F0

class ASignificanceStaticMeshActorBase : public AStaticMeshActor
{
    bool bDistanceOptimizationEnabled;                                                // 0x0231 (size: 0x1)
    FName SignificanceCalculationsTag;                                                // 0x0234 (size: 0x8)
    bool bDisableTickWhenNotRendered;                                                 // 0x023C (size: 0x1)
    int32 MaxTickDisableSignificanceLevel;                                            // 0x0240 (size: 0x4)
    bool bOverridePriorityWhenNotRendered;                                            // 0x0244 (size: 0x1)
    int32 NotRenderedOverridePriorityLevel;                                           // 0x0248 (size: 0x4)
    bool bOverrideDefaultSignificanceLevels;                                          // 0x024C (size: 0x1)
    TArray<FSignificanceLevel> SignificanceLevelsDefinitions;                         // 0x0250 (size: 0x10)

}; // Size: 0x260

class UDistanceOptimizerSettings : public UDeveloperSettings
{
    TArray<FSignificanceLevel> SignificanceLevelsDefinitions;                         // 0x0038 (size: 0x10)

}; // Size: 0x48

class USignificanceGameViewportClient : public UGameViewportClient
{
}; // Size: 0x360

#endif
