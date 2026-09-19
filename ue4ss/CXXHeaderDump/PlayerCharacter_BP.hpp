#ifndef UE4SS_SDK_PlayerCharacter_BP_HPP
#define UE4SS_SDK_PlayerCharacter_BP_HPP

class APlayerCharacter_BP_C : public AGSSPlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A80 (size: 0x8)
    class UBPC_PhotoMode_C* PhotoModeComponent;                                       // 0x0A88 (size: 0x8)
    class UBP_TechTreeManager_C* BP_TechTreeManager;                                  // 0x0A90 (size: 0x8)
    class UWidgetInteractionComponent* WidgetInteraction;                             // 0x0A98 (size: 0x8)
    class UCineCameraComponent* CinematicCamera;                                      // 0x0AA0 (size: 0x8)
    class UPlayer_AnimationManager_C* Player_AnimationManager;                        // 0x0AA8 (size: 0x8)
    float Timeline_0_Width_272F6C3C41C494CB0ABAB3AD06FA0270;                          // 0x0AB0 (size: 0x4)
    float Timeline_0_Height_272F6C3C41C494CB0ABAB3AD06FA0270;                         // 0x0AB4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_272F6C3C41C494CB0ABAB3AD06FA0270; // 0x0AB8 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0AC0 (size: 0x8)
    float Timeline_1_Width_64FC509D429FEF1C807964A5255EDFCD;                          // 0x0AC8 (size: 0x4)
    float Timeline_1_Height_64FC509D429FEF1C807964A5255EDFCD;                         // 0x0ACC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_64FC509D429FEF1C807964A5255EDFCD; // 0x0AD0 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0AD8 (size: 0x8)
    float Timeline_3_Time_A834B3A44E8027F4B9943C88F3E99DE5;                           // 0x0AE0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_A834B3A44E8027F4B9943C88F3E99DE5; // 0x0AE4 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0AE8 (size: 0x8)
    float SetPlayerPosition_Time_449C712C4486D0F20DD3198116902741;                    // 0x0AF0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SetPlayerPosition__Direction_449C712C4486D0F20DD3198116902741; // 0x0AF4 (size: 0x1)
    class UTimelineComponent* SetPlayerPosition;                                      // 0x0AF8 (size: 0x8)
    class AActor* DisplayedActorOnStartRPM;                                           // 0x0B00 (size: 0x8)
    bool StopPositioning;                                                             // 0x0B08 (size: 0x1)
    class UEconomyDebug_UI_WBP_C* EconomyDebugUI_Ref;                                 // 0x0B10 (size: 0x8)
    class UStatDebug_UI_WBP_C* StatDebugUI_Ref;                                       // 0x0B18 (size: 0x8)
    class UDebugEvents_UI_WBP_C* EventDebugUI_Ref;                                    // 0x0B20 (size: 0x8)
    class UCarWashDebug_WBP_C* CarWashDebugUI_Ref;                                    // 0x0B28 (size: 0x8)
    class UUserWidget* PauseMenuRef;                                                  // 0x0B30 (size: 0x8)
    class UInventoryComponent* CurInventory_0;                                        // 0x0B38 (size: 0x8)
    bool RotateRight;                                                                 // 0x0B40 (size: 0x1)
    float RotationCurrentValue;                                                       // 0x0B44 (size: 0x4)
    bool RotateLeft;                                                                  // 0x0B48 (size: 0x1)
    float RotateValue;                                                                // 0x0B4C (size: 0x4)
    bool ShiftPressed;                                                                // 0x0B50 (size: 0x1)
    float RotationSpeed;                                                              // 0x0B54 (size: 0x4)
    bool IsInAction;                                                                  // 0x0B58 (size: 0x1)
    ECircularMenuChoice ToolState;                                                    // 0x0B59 (size: 0x1)
    FTimerHandle RocketJumpAirControlTimer;                                           // 0x0B60 (size: 0x8)
    float DefaultAirControl;                                                          // 0x0B68 (size: 0x4)
    class UPrimitiveComponent* DisplayedComponent_0;                                  // 0x0B70 (size: 0x8)
    TSoftClassPtr<UUserWidget> InventoryWidgetClass;                                  // 0x0B78 (size: 0x28)
    TMap<UUserWidget*, ESlateVisibility> HidenWidgets;                                // 0x0BA0 (size: 0x50)
    bool bWidgetsWasHide;                                                             // 0x0BF0 (size: 0x1)
    class ACineCameraActor* ActualCineCameraActor;                                    // 0x0BF8 (size: 0x8)
    bool IsShowingDebugCameras;                                                       // 0x0C00 (size: 0x1)
    class UUserWidget* DebugCamerasWidget;                                            // 0x0C08 (size: 0x8)

    void OnValidatorInteractionEnd();
    void OpenPhotoMode(FKey Key, FString OpenCase);
    void SD Try To Use Item On Human Base(class AActor* Actor, bool& Used);
    void GetIsPlayerInWrenchMiniGame(bool& IsInMiniGame);
    float GetRotationValue(bool Right, bool Left, class APlaceableActor* PlaceableActor);
    void Set Event to Start(FName EventName);
    void HitContainsT_NoObstacleCheck(TArray<FHitResult>& HitResults, TSubclassOf<class AActor> ClassToLookFor, TSubclassOf<class UPrimitiveComponent> ComponentClass, bool& bHit, class AActor*& ProductRef, class UPrimitiveComponent*& ComponentRef);
    void PlayerTraceLine(bool& Hit, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, FHitResult& HitResult);
    void HitContainsT_FindLast(TArray<FHitResult>& HitResults, TSubclassOf<class AActor> ClassToLookFor, bool& bHit, class AActor*& ProductRef, class UPrimitiveComponent*& ComponentRef);
    void HitContainsT(TArray<FHitResult>& HitResults, TSubclassOf<class AActor> ClassToLookFor, bool& bHit, class AActor*& ProductRef, class UPrimitiveComponent*& ComponentRef);
    void Handle Opening Of Tool Menu Old();
    void Spawn Tool Old(ECircularMenuChoice ToolChoice);
    void UserConstructionScript();
    void SetPlayerPosition__FinishedFunc();
    void SetPlayerPosition__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InpActEvt_RotateRight_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_RotateRight_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_RotateLeft_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_RotateLeft_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_RPM_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_RPM_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_LPM_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_LPM_K2Node_InputActionEvent_18(FKey Key);
    void OnNotifyEnd_94EB3C26469CDABB116B6E955B067B77(FName NotifyName);
    void OnNotifyBegin_94EB3C26469CDABB116B6E955B067B77(FName NotifyName);
    void OnInterrupted_94EB3C26469CDABB116B6E955B067B77(FName NotifyName);
    void OnBlendOut_94EB3C26469CDABB116B6E955B067B77(FName NotifyName);
    void OnCompleted_94EB3C26469CDABB116B6E955B067B77(FName NotifyName);
    void InpActEvt_Interaction_F_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_One_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Three_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_ChangeInventoryDown_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_ChangeInventoryUp_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Escape_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_LPM_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_LPM_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_RotateSpeedIncrease_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_RotateSpeedIncrease_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Nine_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_F9_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_F5_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_DecreaseSnapRotation_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_IncreaseSnapRotation_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_DecreaseSnapDistance_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_IncreaseSnapDistance_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Two_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_NumPadZero_K2Node_InputKeyEvent_5(FKey Key);
    void OnLoaded_2A391F504EDAD2C074143B92BD56A5F1(UClass* Loaded);
    void InpActEvt_Four_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_B_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_OpenPhotoMode_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Help_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_ReportBug_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Seven_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_NumPadFive_K2Node_InputKeyEvent_1(FKey Key);
    void OnLoaded_1AA1862C4990DC0B26E3C080AAF5DDC0(UClass* Loaded);
    void InpActEvt_HideUI_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_0(FKey Key);
    void Interacted_Minigame();
    void Interacted_PC();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StopOutline();
    void ForceTraceLine();
    void ExitMapEvent();
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53(float AxisValue);
    void PositionPlayer();
    void PrologWakeUpEvent();
    void ToolSelection(int32 ToolNumber);
    void TalkWithEmployee(class AEmployee_Base_C* Employee, bool FromPC);
    void ToggleEconomyDebug();
    void ToggleStatDebug();
    void ForceOutline();
    void SpawnTool(ECircularMenuChoice ToolChoice);
    void HandleOpeningOfToolMenu();
    void RotatePlayerToActorOrLocation(class AActor* ActorTarget, FVector PositionToLookAt);
    void ToggleEventDebug();
    void ToggleCarWashDebug();
    void TriggerEvent(FName EventName);
    void OnEscapeClicked();
    void OnCannonExplosion(FVector ExplosionLocation, class AActor* HitActor);
    void OnLanded(const FHitResult& Hit);
    void OnAirControlExpired();
    void OnStepIntoLava();
    void StartCinemaInteraction(eTicketState InputTicketState, class AAICharacterBase* TargetNPC);
    void EndCinemaInteraction();
    void Action_LPM_Pressed();
    void Action_LPM_Released();
    void Action_RPM_Pressed();
    void Action_RPM_Released();
    void CustomOpenPhotoMode();
    void HideWholeUI();
    void K2_OnBecomeViewTarget(class APlayerController* PC);
    void K2_OnEndViewTarget(class APlayerController* PC);
    void SetJoeCrashTime(int32 Hours);
    void SetHudVisibilityWithOptions(bool IsHudHidden);
    void EnableWidgetInteractionDebugDot(bool bShowRedDot);
    void SetDefaultWidgetInteraction();
    void SetMouseWidgetInteraction();
    void ActivateCinematicCamera();
    void DeactivateCinematicCamera();
    void ExecuteUbergraph_PlayerCharacter_BP(int32 EntryPoint);
}; // Size: 0xC10

#endif
