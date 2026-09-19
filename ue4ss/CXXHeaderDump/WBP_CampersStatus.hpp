#ifndef UE4SS_SDK_WBP_CampersStatus_HPP
#define UE4SS_SDK_WBP_CampersStatus_HPP

class UWBP_CampersStatus_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UTextBlock* AllAvaibleCampers;                                              // 0x0288 (size: 0x8)
    class UOverlay* Blocker1;                                                         // 0x0290 (size: 0x8)
    class UOverlay* Blocker2;                                                         // 0x0298 (size: 0x8)
    class UOverlay* Blocker3;                                                         // 0x02A0 (size: 0x8)
    class UOverlay* Blocker4;                                                         // 0x02A8 (size: 0x8)
    class UOverlay* Blocker5;                                                         // 0x02B0 (size: 0x8)
    class UOverlay* Blocker6;                                                         // 0x02B8 (size: 0x8)
    class UOverlay* Blocker7;                                                         // 0x02C0 (size: 0x8)
    class UOverlay* Blocker8;                                                         // 0x02C8 (size: 0x8)
    class UOverlay* BuyButtonOverlay;                                                 // 0x02D0 (size: 0x8)
    class UGSSButton* BuyCamperButton;                                                // 0x02D8 (size: 0x8)
    class UTextBlock* BuyTXT;                                                         // 0x02E0 (size: 0x8)
    class UImage* Camper1;                                                            // 0x02E8 (size: 0x8)
    class UImage* Camper2;                                                            // 0x02F0 (size: 0x8)
    class UImage* Camper3;                                                            // 0x02F8 (size: 0x8)
    class UImage* Camper4;                                                            // 0x0300 (size: 0x8)
    class UImage* Camper5;                                                            // 0x0308 (size: 0x8)
    class UImage* Camper6;                                                            // 0x0310 (size: 0x8)
    class UImage* Camper7;                                                            // 0x0318 (size: 0x8)
    class UImage* Camper8;                                                            // 0x0320 (size: 0x8)
    class UTextBlock* CaravanaDescriptionTXT;                                         // 0x0328 (size: 0x8)
    class UImage* CaravanasImage;                                                     // 0x0330 (size: 0x8)
    class UHorizontalBox* HorizontalBox_62;                                           // 0x0338 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0340 (size: 0x8)
    class UImage* Image_212;                                                          // 0x0348 (size: 0x8)
    class UImage* Image_298;                                                          // 0x0350 (size: 0x8)
    class UImage* Image_647;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_lock1;                                                        // 0x0360 (size: 0x8)
    class UImage* Image_lock2;                                                        // 0x0368 (size: 0x8)
    class UImage* Image_lock3;                                                        // 0x0370 (size: 0x8)
    class UImage* Image_lock4;                                                        // 0x0378 (size: 0x8)
    class UImage* Image_lock5;                                                        // 0x0380 (size: 0x8)
    class UImage* Image_lock6;                                                        // 0x0388 (size: 0x8)
    class UImage* Image_lock7;                                                        // 0x0390 (size: 0x8)
    class UImage* Image_lock8;                                                        // 0x0398 (size: 0x8)
    class UTextBlock* InhabitedCampersTXT;                                            // 0x03A0 (size: 0x8)
    class UTextBlock* PriceTXT;                                                       // 0x03A8 (size: 0x8)
    class UTextBlock* SetCaravanaNametTXT;                                            // 0x03B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x03B8 (size: 0x8)
    FName CurrentMap;                                                                 // 0x03C0 (size: 0x8)
    TArray<FName> Maps;                                                               // 0x03C8 (size: 0x10)
    class ACentralShop* Shop;                                                         // 0x03D8 (size: 0x8)
    int32 MaxCaravanas;                                                               // 0x03E0 (size: 0x4)
    class UPC_Employe_C* EmployeRef;                                                  // 0x03E8 (size: 0x8)
    TArray<FName> MapsToLoad;                                                         // 0x03F0 (size: 0x10)
    TArray<FName> MapsToUnload;                                                       // 0x0400 (size: 0x10)
    bool bCanLoad;                                                                    // 0x0410 (size: 0x1)
    TArray<FCamperStruct> Campers;                                                    // 0x0418 (size: 0x10)
    FCamperStruct CurrentCamper;                                                      // 0x0428 (size: 0x40)
    TArray<UWBP_CamperSlot_C*> CamperSlots;                                           // 0x0468 (size: 0x10)
    TArray<AActor*> ArrayOfLoadedCaravanas;                                           // 0x0478 (size: 0x10)
    TSoftClassPtr<UGSSEvent> NewEmployeeEventClass;                                   // 0x0488 (size: 0x28)
    FTimerHandle NewEmployeeEventTimer;                                               // 0x04B0 (size: 0x8)
    class UWBP_SequenceSkip_C* SequenceWidget;                                        // 0x04B8 (size: 0x8)
    class ULevelSequencePlayer* SequencePlayer;                                       // 0x04C0 (size: 0x8)
    ECharacterState PrevMinigameState;                                                // 0x04C8 (size: 0x1)

    void HintsVisibility(bool Visible);
    void CheckIfLastCamperIsOwned();
    void HandleAchievement();
    void SetCurrentCamperPrice();
    void OnLoaded_7E011BDB450C250E96C1F185D1DB83FC(class UObject* Loaded);
    void Construct();
    void BndEvt__BuyCamperButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Refresh();
    void BndEvt__BuyCamperButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BuyCamperButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void RefreshCounter();
    void HandleLoadingMaps(const TArray<FName>& Maps);
    void FinishBuyingTrailer();
    void HandleUnloadingMaps(const TArray<FName>& MapsUnload);
    void SetVisuals();
    void LoadCamperLevels();
    void OnTimePassed();
    void SkipCutscene();
    void GamePadBuyCamper();
    void CustomEvent();
    void CustomEvent_1();
    void ExecuteUbergraph_WBP_CampersStatus(int32 EntryPoint);
}; // Size: 0x4C9

#endif
