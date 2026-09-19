#ifndef UE4SS_SDK_Sunbed_BP_HPP
#define UE4SS_SDK_Sunbed_BP_HPP

class ASunbed_BP_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UArrowComponent* ArrowExit;                                                 // 0x0408 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0410 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0418 (size: 0x8)
    float Out Radius;                                                                 // 0x0420 (size: 0x4)
    float Out Half Height;                                                            // 0x0424 (size: 0x4)
    bool isSitting;                                                                   // 0x0428 (size: 0x1)
    bool AreInteractionsBlocked;                                                      // 0x0429 (size: 0x1)
    class ABP_Cigarette_Sunbed_C* Cigarette;                                          // 0x0430 (size: 0x8)
    class ABP_Beer_Sunbed_C* Beer;                                                    // 0x0438 (size: 0x8)
    class UWBP_Sunbed_C* InteractionWidget;                                           // 0x0440 (size: 0x8)
    class AChameleon_C* ChameleonEffect;                                              // 0x0448 (size: 0x8)
    int32 BeersDrankCount;                                                            // 0x0450 (size: 0x4)
    float AlcoholEffectIncrement;                                                     // 0x0454 (size: 0x4)
    FInt32Range BeersDrankRange;                                                      // 0x0458 (size: 0x10)

    void ClearPlayerHandleItem();
    FName GetInteractionName();
    void SetPlayerMeshes_Invis();
    void SetPlayerMeshes();
    void OnNotifyEnd_3266A0494DF0B67DED7D96A441D5E912(FName NotifyName);
    void OnNotifyBegin_3266A0494DF0B67DED7D96A441D5E912(FName NotifyName);
    void OnInterrupted_3266A0494DF0B67DED7D96A441D5E912(FName NotifyName);
    void OnBlendOut_3266A0494DF0B67DED7D96A441D5E912(FName NotifyName);
    void OnCompleted_3266A0494DF0B67DED7D96A441D5E912(FName NotifyName);
    void ReceiveBeginPlay();
    void OnInteractionClicked(bool IsPressed);
    void OnLPMClicked();
    void OnRPMClicked(bool IsPressed);
    void UpdateAlcoholEffect();
    void ExecuteUbergraph_Sunbed_BP(int32 EntryPoint);
}; // Size: 0x468

#endif
