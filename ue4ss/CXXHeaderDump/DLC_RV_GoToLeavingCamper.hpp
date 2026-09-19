#ifndef UE4SS_SDK_DLC_RV_GoToLeavingCamper_HPP
#define UE4SS_SDK_DLC_RV_GoToLeavingCamper_HPP

class UDLC_RV_GoToLeavingCamper_C : public UGoToHome_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    EMovementGroundType DefaultOverrideMovementMode;                                  // 0x0168 (size: 0x1)
    FVector Location Cache;                                                           // 0x016C (size: 0xC)
    float Time Since Last Stuck Check;                                                // 0x0178 (size: 0x4)

    void ActivateHandLayer();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void Tick Stuck Watcher(float Delta Time);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_DLC_RV_GoToLeavingCamper(int32 EntryPoint);
}; // Size: 0x17C

#endif
