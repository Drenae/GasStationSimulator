#ifndef UE4SS_SDK_BP_BBQTongs_HPP
#define UE4SS_SDK_BP_BBQTongs_HPP

class ABP_BBQTongs_C : public AItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_Tongs;                                             // 0x0338 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0340 (size: 0x8)
    float Timeline_0_NewTrack_0_DD610E5D473EDFCC54BF5F9307102E09;                     // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DD610E5D473EDFCC54BF5F9307102E09; // 0x034C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0350 (size: 0x8)
    class ABP_MinigameInWorld_BBQ_C* BBQ Minigame In World;                           // 0x0358 (size: 0x8)
    bool Closed;                                                                      // 0x0360 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void On Minigame End(class ARvMinigameInWorld* minigame, bool bSuccess);
    void ReceiveTick(float DeltaSeconds);
    void Set Target Location(FVector Target Location);
    void Set Tongs Closed(bool bClosed);
    void ExecuteUbergraph_BP_BBQTongs(int32 EntryPoint);
}; // Size: 0x361

#endif
