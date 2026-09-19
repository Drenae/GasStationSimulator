#ifndef UE4SS_SDK_BP_JunkyardTrapdoor_HPP
#define UE4SS_SDK_BP_JunkyardTrapdoor_HPP

class ABP_JunkyardTrapdoor_C : public ATrapDoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* SM_Custom_Wheel_05_Big1;                              // 0x0278 (size: 0x8)
    class UStaticMeshComponent* SM_Custom_Wheel_05_Big;                               // 0x0280 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0288 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0290 (size: 0x8)
    class UBoxComponent* InteractBox;                                                 // 0x0298 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x02A0 (size: 0x8)

    FName GetInteractionName();
    bool CanTeleport();
    void PlayParticle();
    void TurnOffParticle();
    void OnCantTeleport();
    void ExecuteUbergraph_BP_JunkyardTrapdoor(int32 EntryPoint);
}; // Size: 0x2A8

#endif
