#ifndef UE4SS_SDK_BP_AirstripTrapdoor_HPP
#define UE4SS_SDK_BP_AirstripTrapdoor_HPP

class ABP_AirstripTrapdoor_C : public ATrapDoor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0278 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0280 (size: 0x8)
    class UBoxComponent* InteractBox;                                                 // 0x0288 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0290 (size: 0x8)

    FName GetInteractionName();
    bool CanTeleport();
    void PlayParticle();
    void TurnOffParticle();
    void OnCantTeleport();
    void ExecuteUbergraph_BP_AirstripTrapdoor(int32 EntryPoint);
}; // Size: 0x298

#endif
