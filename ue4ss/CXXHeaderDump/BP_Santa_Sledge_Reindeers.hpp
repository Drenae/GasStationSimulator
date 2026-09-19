#ifndef UE4SS_SDK_BP_Santa_Sledge_Reindeers_HPP
#define UE4SS_SDK_BP_Santa_Sledge_Reindeers_HPP

class ABP_Santa_Sledge_Reindeers_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNiagaraComponent* NS_SnowSanta;                                            // 0x0228 (size: 0x8)
    class UArrowComponent* VFX_Template;                                              // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UAudioComponent* ChristmasSantaShaker;                                      // 0x0240 (size: 0x8)
    class UAudioComponent* ChristmasSantaAmbient;                                     // 0x0248 (size: 0x8)
    float SantaMover_Alpha_5581CFE94F2B3744FF241B9B01905F69;                          // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SantaMover__Direction_5581CFE94F2B3744FF241B9B01905F69; // 0x0254 (size: 0x1)
    class UTimelineComponent* SantaMover;                                             // 0x0258 (size: 0x8)
    float alpha;                                                                      // 0x0260 (size: 0x4)
    class APlane_Track_BP_C* TrackRef;                                                // 0x0268 (size: 0x8)
    float SantaStartOffset;                                                           // 0x0270 (size: 0x4)
    float Duration;                                                                   // 0x0274 (size: 0x4)
    bool ActiveSanta;                                                                 // 0x0278 (size: 0x1)
    bool IsFlying;                                                                    // 0x0279 (size: 0x1)

    void SantaMover__FinishedFunc();
    void SantaMover__UpdateFunc();
    void OnGameplaySettingsApplied(bool bAppliedSetting);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void ReceiveBeginPlay();
    void StartFlying();
    void ExecuteUbergraph_BP_Santa_Sledge_Reindeers(int32 EntryPoint);
}; // Size: 0x27A

#endif
