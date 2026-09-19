#ifndef UE4SS_SDK_BP_VolcanoSandstorm_HPP
#define UE4SS_SDK_BP_VolcanoSandstorm_HPP

class ABP_VolcanoSandstorm_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void AngerTrigger(EChunchumanchuAnger AngerState, const float Value, const float ValueChanged);
    void ExecuteUbergraph_BP_VolcanoSandstorm(int32 EntryPoint);
}; // Size: 0x238

#endif
