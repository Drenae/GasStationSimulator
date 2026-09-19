#ifndef UE4SS_SDK_BP_IceCreamBuildingNew_HPP
#define UE4SS_SDK_BP_IceCreamBuildingNew_HPP

class ABP_IceCreamBuildingNew_C : public AIceCreamBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C60 (size: 0x8)
    class UStaticMeshComponent* InteractionBlockerBig;                                // 0x0C68 (size: 0x8)
    class UStaticMeshComponent* InteractionBlockerSmall;                              // 0x0C70 (size: 0x8)
    class UAudioComponent* SFX_IceCream_freezer_loop_01_Cue;                          // 0x0C78 (size: 0x8)
    class UAudioComponent* SFX_IceCream_freezer_loop_02_Cue;                          // 0x0C80 (size: 0x8)
    class UAudioComponent* SFX_IceCream_Scooping_loop_Cue;                            // 0x0C88 (size: 0x8)
    class UArrowComponent* ArrowComponent8;                                           // 0x0C90 (size: 0x8)
    class UArrowComponent* ArrowComponent7;                                           // 0x0C98 (size: 0x8)
    class UArrowComponent* ArrowComponent6;                                           // 0x0CA0 (size: 0x8)
    class UArrowComponent* ArrowComponent5;                                           // 0x0CA8 (size: 0x8)
    class UArrowComponent* ArrowComponent4;                                           // 0x0CB0 (size: 0x8)
    class UArrowComponent* ArrowComponent3;                                           // 0x0CB8 (size: 0x8)
    class UArrowComponent* ArrowComponent2;                                           // 0x0CC0 (size: 0x8)
    class UArrowComponent* ArrowComponent1;                                           // 0x0CC8 (size: 0x8)
    class UIceCreamMinigame_C* IceCreamMinigameUI;                                    // 0x0CD0 (size: 0x8)
    class UIceCreamOrderHB_C* OrderHBWidget;                                          // 0x0CD8 (size: 0x8)
    bool CanShowAllert;                                                               // 0x0CE0 (size: 0x1)

    FName GetInteractionName();
    void OnNotifyEnd_02B8E433487678AF3026438FA21D79EF(FName NotifyName);
    void OnNotifyBegin_02B8E433487678AF3026438FA21D79EF(FName NotifyName);
    void OnInterrupted_02B8E433487678AF3026438FA21D79EF(FName NotifyName);
    void OnBlendOut_02B8E433487678AF3026438FA21D79EF(FName NotifyName);
    void OnCompleted_02B8E433487678AF3026438FA21D79EF(FName NotifyName);
    void ReceiveBeginPlay();
    void UI_OnStartMinigame();
    void UI_OnEndMinigame();
    void UI_OnOrderCheck(bool bShowInfo, const TArray<FIceCreamOrders>& UIOrder);
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void PlayBellMontage();
    void PlaySoundIdleBig(bool bPlay);
    void PlaySoundIdleSmall(bool bPlay);
    void PlaySoundScooping(bool bPressed);
    void UI_ShowTutorial();
    void UI_ShowNotify();
    void PostLoadMapsBlueprintEvent();
    void ShowInteractionAlertMessage();
    void UnlockMessage();
    void UI_OnCannotTakeNextScoop();
    void OnSpoonChanged(bool bVisibility);
    void ExecuteUbergraph_BP_IceCreamBuildingNew(int32 EntryPoint);
}; // Size: 0xCE1

#endif
