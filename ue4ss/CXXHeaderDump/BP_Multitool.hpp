#ifndef UE4SS_SDK_BP_Multitool_HPP
#define UE4SS_SDK_BP_Multitool_HPP

class ABP_Multitool_C : public AJunkyardMultitool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* Mus_DLC_JY_Pimp_Cue;                                       // 0x0278 (size: 0x8)
    class UWBP_Multitool_C* OverlayREF;                                               // 0x0280 (size: 0x8)
    float Time;                                                                       // 0x0288 (size: 0x4)
    EJunkyardCarPartType Target Type;                                                 // 0x028C (size: 0x1)
    class AJunkyardCarWreckCustomizable* Target Wreck;                                // 0x0290 (size: 0x8)
    bool Adding Part;                                                                 // 0x0298 (size: 0x1)
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;                               // 0x02A0 (size: 0x10)

    void ToggleLights(bool bMultitoolLights);
    void OnNotifyEnd_53FF32E2416582103D7898A392D064E0(FName NotifyName);
    void OnNotifyBegin_53FF32E2416582103D7898A392D064E0(FName NotifyName);
    void OnInterrupted_53FF32E2416582103D7898A392D064E0(FName NotifyName);
    void OnBlendOut_53FF32E2416582103D7898A392D064E0(FName NotifyName);
    void OnCompleted_53FF32E2416582103D7898A392D064E0(FName NotifyName);
    void ReceiveBeginPlay();
    void OnPickedUp();
    void OnDropped();
    void ReceiveDestroyed();
    void PrimaryAction(EJunkyardCarPartType TargetType, class AJunkyardCarWreckCustomizable* TargetWreck, bool bAddingPart);
    void TimeBeforeIdle_Event();
    void ActivateMultitoolMusic();
    void DeactivateMultitoolMusic();
    void ExecuteUbergraph_BP_Multitool(int32 EntryPoint);
}; // Size: 0x2B0

#endif
