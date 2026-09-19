#ifndef UE4SS_SDK_BP_Volcano_HPP
#define UE4SS_SDK_BP_Volcano_HPP

class ABP_Volcano_C : public AVolcano
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* RumblingSFX;                                               // 0x0230 (size: 0x8)
    class UNiagaraComponent* NS_VolcanoSmoke;                                         // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Volcano;                                              // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float EmmisiveGradient_NewTrack_0_71EF030B40845F73510ABFA592CFA6D0;               // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> EmmisiveGradient__Direction_71EF030B40845F73510ABFA592CFA6D0; // 0x0254 (size: 0x1)
    class UTimelineComponent* EmmisiveGradient;                                       // 0x0258 (size: 0x8)
    TArray<FVector> TrashRocksPoints;                                                 // 0x0260 (size: 0x10)
    TArray<FVector> DirtDecalsPoints;                                                 // 0x0270 (size: 0x10)
    FTimeStruct RockSpawnDelay;                                                       // 0x0280 (size: 0x10)
    bool IsRumblePlaying;                                                             // 0x0290 (size: 0x1)

    void StartEruption(float Delay);
    void ToggleRumble(float Value);
    void EmmisiveGradient__FinishedFunc();
    void EmmisiveGradient__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void AngerTrigger(EChunchumanchuAnger AngerState, const float Value, const float ValueChanged);
    void ReloadVolcano();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Volcano(int32 EntryPoint);
}; // Size: 0x291

#endif
