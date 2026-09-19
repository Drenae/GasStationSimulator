#ifndef UE4SS_SDK_Event_RV_Denis_HPP
#define UE4SS_SDK_Event_RV_Denis_HPP

class UEvent_RV_Denis_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSoftClassPtr<AAICharacterBase> DenisClass;                                       // 0x00B0 (size: 0x28)
    TSoftClassPtr<UDenisTask> DennisAttackTask;                                       // 0x00D8 (size: 0x28)
    bool bIsDenisForceSpawnedFromQuest;                                               // 0x0100 (size: 0x1)

    bool CalcTime();
    void SpawnDenis();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void ExecuteUbergraph_Event_RV_Denis(int32 EntryPoint);
}; // Size: 0x101

#endif
