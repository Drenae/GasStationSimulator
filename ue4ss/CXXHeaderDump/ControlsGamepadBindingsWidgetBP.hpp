#ifndef UE4SS_SDK_ControlsGamepadBindingsWidgetBP_HPP
#define UE4SS_SDK_ControlsGamepadBindingsWidgetBP_HPP

class UControlsGamepadBindingsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UOptionsActionBinder_C* AirBrushRotateLeft;                                 // 0x0608 (size: 0x8)
    class UOptionsActionBinder_C* AirBrushScaleDown;                                  // 0x0610 (size: 0x8)
    class UOptionsActionBinder_C* AirBrushScaleUp;                                    // 0x0618 (size: 0x8)
    class UVerticalBox* AirplaneDLC_VB;                                               // 0x0620 (size: 0x8)
    class UVerticalBox* AirSpray_VB;                                                  // 0x0628 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0630 (size: 0x8)
    class UVerticalBox* BasicInput_VB;                                                // 0x0638 (size: 0x8)
    class UScrollBox* Bindings_SB;                                                    // 0x0640 (size: 0x8)
    class UBorder* Border_Hammer;                                                     // 0x0648 (size: 0x8)
    class UBorder* Border_Minigames;                                                  // 0x0650 (size: 0x8)
    class UBorder* Border_Placement;                                                  // 0x0658 (size: 0x8)
    class UBorder* Border_Tools;                                                      // 0x0660 (size: 0x8)
    class UBorder* BorderAirplanes;                                                   // 0x0668 (size: 0x8)
    class UBorder* BorderAirplanes_2;                                                 // 0x0670 (size: 0x8)
    class UBorder* BorderAirplanes_4;                                                 // 0x0678 (size: 0x8)
    class UBorder* BorderAirSpray;                                                    // 0x0680 (size: 0x8)
    class UBorder* BorderCrane;                                                       // 0x0688 (size: 0x8)
    class UBorder* BorderMarshal;                                                     // 0x0690 (size: 0x8)
    class UBorder* BorderTowy;                                                        // 0x0698 (size: 0x8)
    class UBorder* BorderVehicle;                                                     // 0x06A0 (size: 0x8)
    class UOptionsActionBinder_C* ChangeInventoryDown;                                // 0x06A8 (size: 0x8)
    class UOptionsActionBinder_C* ChangeInventoryUp;                                  // 0x06B0 (size: 0x8)
    class UVerticalBox* CinemaDLC_VB;                                                 // 0x06B8 (size: 0x8)
    class UOptionsActionBinder_C* CircularMenu;                                       // 0x06C0 (size: 0x8)
    class UOptionsActionBinder_C* ColorPicker;                                        // 0x06C8 (size: 0x8)
    class UOptionsActionBinder_C* CraneActivateMagnet;                                // 0x06D0 (size: 0x8)
    class UOptionsActionBinder_C* CraneChangeCamera;                                  // 0x06D8 (size: 0x8)
    class UVerticalBox* CraneDLC_VB;                                                  // 0x06E0 (size: 0x8)
    class UOptionsActionBinder_C* CraneExtendArmBackward;                             // 0x06E8 (size: 0x8)
    class UOptionsActionBinder_C* CraneExtendArmForward;                              // 0x06F0 (size: 0x8)
    class UOptionsActionBinder_C* CraneMoveArmLeft;                                   // 0x06F8 (size: 0x8)
    class UOptionsActionBinder_C* CraneMoveArmRight;                                  // 0x0700 (size: 0x8)
    class UOptionsActionBinder_C* CraneMoveOnRailsBackward;                           // 0x0708 (size: 0x8)
    class UOptionsActionBinder_C* CraneMoveOnRailsForward;                            // 0x0710 (size: 0x8)
    class UOptionsActionBinder_C* CraneOpenCloseCrusher;                              // 0x0718 (size: 0x8)
    class UOptionsActionBinder_C* CraneResetWrecks;                                   // 0x0720 (size: 0x8)
    class UOptionsActionBinder_C* DecalPicker;                                        // 0x0728 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0730 (size: 0x8)
    class UOptionsActionBinder_C* DecreaseSnapDistance;                               // 0x0738 (size: 0x8)
    class UOptionsActionBinder_C* DecreaseSnapRotation;                               // 0x0740 (size: 0x8)
    class UOptionsActionBinder_C* Escape;                                             // 0x0748 (size: 0x8)
    class UOptionsActionBinder_C* FollowNextQuestLine;                                // 0x0750 (size: 0x8)
    class UGamepadWidgetBP_C* GamepadWidgetBP;                                        // 0x0758 (size: 0x8)
    class UOptionsActionBinder_C* HammerCash;                                         // 0x0760 (size: 0x8)
    class UOptionsActionBinder_C* HighlightAirplaneHoles;                             // 0x0768 (size: 0x8)
    class UOptionsActionBinder_C* HighlightCinemaTrash;                               // 0x0770 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0778 (size: 0x8)
    class UOptionsActionBinder_C* IncreaseSnapDistance;                               // 0x0780 (size: 0x8)
    class UOptionsActionBinder_C* IncreaseSnapRotation;                               // 0x0788 (size: 0x8)
    class UOptionsActionBinder_C* Interaction_F;                                      // 0x0790 (size: 0x8)
    class UOptionsActionBinder_C* Interaction_R;                                      // 0x0798 (size: 0x8)
    class UOptionsActionBinder_C* Jump;                                               // 0x07A0 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x07A8 (size: 0x8)
    class UBorder* LeftTitleBorder;                                                   // 0x07B0 (size: 0x8)
    class UVerticalBox* MarshalMinigameDLC_VB;                                        // 0x07B8 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x07C0 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x07C8 (size: 0x8)
    class UVerticalBox* Minigames_VB;                                                 // 0x07D0 (size: 0x8)
    class UOptionsActionBinder_C* MuteSounds;                                         // 0x07D8 (size: 0x8)
    class UVerticalBox* ObjectPlacement_VB;                                           // 0x07E0 (size: 0x8)
    class UOptionsActionBinder_C* OpenTrunk;                                          // 0x07E8 (size: 0x8)
    class UVerticalBox* OtherCollapsedInputs_VB;                                      // 0x07F0 (size: 0x8)
    class UOptionsActionBinder_C* PhotoMode;                                          // 0x07F8 (size: 0x8)
    class UOptionsActionBinder_C* PlayerVehicleZoomIn;                                // 0x0800 (size: 0x8)
    class UOptionsActionBinder_C* PlayerVehicleZoomOut;                               // 0x0808 (size: 0x8)
    class UOptionsActionBinder_C* PrimaryAction;                                      // 0x0810 (size: 0x8)
    class UOptionsActionBinder_C* QuitTicketMingame;                                  // 0x0818 (size: 0x8)
    class UOptionsActionBinder_C* RejectCinemaTicket;                                 // 0x0820 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x0828 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0830 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x0838 (size: 0x8)
    class UOptionsActionBinder_C* RotateLeft;                                         // 0x0840 (size: 0x8)
    class UOptionsActionBinder_C* RotateRight;                                        // 0x0848 (size: 0x8)
    class UOptionsActionBinder_C* RotateSpeedIncrease;                                // 0x0850 (size: 0x8)
    class UOptionsActionBinder_C* SecondaryAction;                                    // 0x0858 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x0860 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x0868 (size: 0x8)
    class UOptionsActionBinder_C* SnapToGrid;                                         // 0x0870 (size: 0x8)
    class UOptionsActionBinder_C* SpecialAction;                                      // 0x0878 (size: 0x8)
    class UOptionsActionBinder_C* Sprint;                                             // 0x0880 (size: 0x8)
    class UOptionsActionBinder_C* SteerPlaneLeft;                                     // 0x0888 (size: 0x8)
    class UOptionsActionBinder_C* SteerPlaneRight;                                    // 0x0890 (size: 0x8)
    class UOptionsActionBinder_C* Tip;                                                // 0x0898 (size: 0x8)
    class UOptionsText_NoChoices_C* Title_BasicInput;                                 // 0x08A0 (size: 0x8)
    class UOptionsText_NoChoices_C* Title_Hammer;                                     // 0x08A8 (size: 0x8)
    class UOptionsText_NoChoices_C* Title_Minigames;                                  // 0x08B0 (size: 0x8)
    class UOptionsText_NoChoices_C* Title_Placement;                                  // 0x08B8 (size: 0x8)
    class UOptionsText_NoChoices_C* Title_Tools;                                      // 0x08C0 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleAirplane;                                    // 0x08C8 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleAirSpray;                                    // 0x08D0 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleCrane;                                       // 0x08D8 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleCrane_1;                                     // 0x08E0 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleCrane_4;                                     // 0x08E8 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleMarshalMinigame;                             // 0x08F0 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleTowy;                                        // 0x08F8 (size: 0x8)
    class UOptionsText_NoChoices_C* TitleVehicles;                                    // 0x0900 (size: 0x8)
    class UVerticalBox* Tools_VB;                                                     // 0x0908 (size: 0x8)
    class UVerticalBox* TowyDLC_VB;                                                   // 0x0910 (size: 0x8)
    class UOptionsActionBinder_C* TowyExtandArmBackward;                              // 0x0918 (size: 0x8)
    class UOptionsActionBinder_C* TowyExtendArmForward;                               // 0x0920 (size: 0x8)
    class UOptionsActionBinder_C* TowyLowerMagnetDown;                                // 0x0928 (size: 0x8)
    class UOptionsActionBinder_C* TowyLowerMagnetUp;                                  // 0x0930 (size: 0x8)
    class UOptionsActionBinder_C* TowyMoveArmDown;                                    // 0x0938 (size: 0x8)
    class UOptionsActionBinder_C* TowyMoveArmUp;                                      // 0x0940 (size: 0x8)
    class UOptionsActionBinder_C* TowyMovePlatformLeft;                               // 0x0948 (size: 0x8)
    class UOptionsActionBinder_C* TowyMovePlatformRight;                              // 0x0950 (size: 0x8)
    class UOptionsActionBinder_C* TowySecondaryAction;                                // 0x0958 (size: 0x8)
    class UOptionsActionBinder_C* TowyTurbo;                                          // 0x0960 (size: 0x8)
    class UOptionsActionBinder_C* ValidateCinemaTicket;                               // 0x0968 (size: 0x8)
    class UVerticalBox* Vehicle_VB;                                                   // 0x0970 (size: 0x8)
    class UOptionsActionBinder_C* VehicleHandbrake;                                   // 0x0978 (size: 0x8)
    class UOptionsActionBinder_C* VehicleMoveBackward;                                // 0x0980 (size: 0x8)
    class UOptionsActionBinder_C* VehicleMoveForward;                                 // 0x0988 (size: 0x8)
    class UOptionsActionBinder_C* VehicleMoveTurnLeft;                                // 0x0990 (size: 0x8)
    class UOptionsActionBinder_C* VehiclePrimaryAction;                               // 0x0998 (size: 0x8)
    class UOptionsActionBinder_C* VehicleSecondaryAction;                             // 0x09A0 (size: 0x8)
    class UOptionsActionBinder_C* VehicleTurbo;                                       // 0x09A8 (size: 0x8)
    class UOptionsActionBinder_C* VehicleTurnRight;                                   // 0x09B0 (size: 0x8)
    class UVerticalBox* WrenchDLC_VB;                                                 // 0x09B8 (size: 0x8)
    class UOptionsActionBinder_C* WrenchInspectMode;                                  // 0x09C0 (size: 0x8)
    class UControlsSettingsContainerWidgetBP_C* ControlsSettingsWidgetBP;             // 0x09C8 (size: 0x8)

    void GetPSGamepadButtonImage(class UObject* B, class UTexture2D*& GamePadPlaystation);
    void DLCHandling();
    void LeaveEditMode();
    void ResetGamepadBindings();
    void UpdateBindingsInVisualization();
    void SetGlobalSettings();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnGlobalSettingsApply();
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnPressedReset();
    void BndEvt__PrimaryAction_K2Node_ComponentBoundEvent_15_OnKeyChanged__DelegateSignature();
    void BndEvt__PrimaryAction_K2Node_ComponentBoundEvent_17_OnFocussed__DelegateSignature();
    void BndEvt__SecondaryAction_K2Node_ComponentBoundEvent_48_OnKeyChanged__DelegateSignature();
    void BndEvt__SecondaryAction_K2Node_ComponentBoundEvent_49_OnFocussed__DelegateSignature();
    void BndEvt__FInteraction_1_K2Node_ComponentBoundEvent_50_OnKeyChanged__DelegateSignature();
    void BndEvt__FInteraction_1_K2Node_ComponentBoundEvent_51_OnFocussed__DelegateSignature();
    void BndEvt__CircularMenu_K2Node_ComponentBoundEvent_52_OnKeyChanged__DelegateSignature();
    void BndEvt__CircularMenu_K2Node_ComponentBoundEvent_53_OnFocussed__DelegateSignature();
    void BndEvt__Tip_K2Node_ComponentBoundEvent_54_OnKeyChanged__DelegateSignature();
    void BndEvt__Tip_K2Node_ComponentBoundEvent_55_OnFocussed__DelegateSignature();
    void BndEvt__SpecialAction_1_K2Node_ComponentBoundEvent_56_OnKeyChanged__DelegateSignature();
    void BndEvt__SpecialAction_1_K2Node_ComponentBoundEvent_57_OnFocussed__DelegateSignature();
    void BndEvt__MuteSounds_1_K2Node_ComponentBoundEvent_58_OnKeyChanged__DelegateSignature();
    void BndEvt__MuteSounds_1_K2Node_ComponentBoundEvent_59_OnFocussed__DelegateSignature();
    void BndEvt__OpenTrunk_1_K2Node_ComponentBoundEvent_60_OnKeyChanged__DelegateSignature();
    void BndEvt__OpenTrunk_1_K2Node_ComponentBoundEvent_61_OnFocussed__DelegateSignature();
    void BndEvt__QuitLockpicking_1_K2Node_ComponentBoundEvent_62_OnKeyChanged__DelegateSignature();
    void BndEvt__QuitLockpicking_1_K2Node_ComponentBoundEvent_63_OnFocussed__DelegateSignature();
    void BndEvt__RotateLeft_1_K2Node_ComponentBoundEvent_6_OnKeyChanged__DelegateSignature();
    void BndEvt__RotateLeft_1_K2Node_ComponentBoundEvent_7_OnFocussed__DelegateSignature();
    void BndEvt__RotateRight_1_K2Node_ComponentBoundEvent_12_OnKeyChanged__DelegateSignature();
    void BndEvt__RotateRight_1_K2Node_ComponentBoundEvent_18_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_FollowNextQuestLine_K2Node_ComponentBoundEvent_27_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_FollowNextQuestLine_K2Node_ComponentBoundEvent_29_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_Interaction_R_K2Node_ComponentBoundEvent_34_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_Interaction_R_K2Node_ComponentBoundEvent_39_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneActivateMagnet_K2Node_ComponentBoundEvent_201_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveArmLeft_K2Node_ComponentBoundEvent_204_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveArmRight_K2Node_ComponentBoundEvent_207_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveOnRailsForward_K2Node_ComponentBoundEvent_210_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveOnRailsBackward_K2Node_ComponentBoundEvent_213_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneExtendArmForward_K2Node_ComponentBoundEvent_216_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneExtendArmBackward_K2Node_ComponentBoundEvent_219_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneOpenCloseCrusher_K2Node_ComponentBoundEvent_222_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneResetWrecks_K2Node_ComponentBoundEvent_225_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneChangeCamera_K2Node_ComponentBoundEvent_228_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneOpenCloseCrusher_K2Node_ComponentBoundEvent_224_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneResetWrecks_K2Node_ComponentBoundEvent_227_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneChangeCamera_K2Node_ComponentBoundEvent_230_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveOnRailsBackward_K2Node_ComponentBoundEvent_215_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneExtendArmForward_K2Node_ComponentBoundEvent_218_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneExtendArmBackward_K2Node_ComponentBoundEvent_221_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveArmRight_K2Node_ComponentBoundEvent_209_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveOnRailsForward_K2Node_ComponentBoundEvent_212_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneActivateMagnet_K2Node_ComponentBoundEvent_203_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_CraneMoveArmLeft_K2Node_ComponentBoundEvent_206_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_HighlightAirplaneHoles_K2Node_ComponentBoundEvent_76_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_HighlightAirplaneHoles_K2Node_ComponentBoundEvent_77_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_SteerPlaneLeft_K2Node_ComponentBoundEvent_78_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_SteerPlaneRight_K2Node_ComponentBoundEvent_79_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_SteerPlaneLeft_K2Node_ComponentBoundEvent_80_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_SteerPlaneRight_K2Node_ComponentBoundEvent_81_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyTurbo_K2Node_ComponentBoundEvent_165_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyTurbo_K2Node_ComponentBoundEvent_167_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowySecondaryAction_K2Node_ComponentBoundEvent_164_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowySecondaryAction_K2Node_ComponentBoundEvent_162_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMovePlatformRight_K2Node_ComponentBoundEvent_159_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMovePlatformRight_K2Node_ComponentBoundEvent_161_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyLowerMagnetUp_K2Node_ComponentBoundEvent_147_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMoveArmDown_K2Node_ComponentBoundEvent_150_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMoveArmUp_K2Node_ComponentBoundEvent_153_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMovePlatformLeft_K2Node_ComponentBoundEvent_156_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyLowerMagnetUp_K2Node_ComponentBoundEvent_149_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMoveArmDown_K2Node_ComponentBoundEvent_152_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMoveArmUp_K2Node_ComponentBoundEvent_155_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyMovePlatformLeft_K2Node_ComponentBoundEvent_158_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyLowerMagnetDown_K2Node_ComponentBoundEvent_144_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_TowyLowerMagnetDown_K2Node_ComponentBoundEvent_146_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_TowyExtendArmForward_K2Node_ComponentBoundEvent_82_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_TowyExtendArmForward_K2Node_ComponentBoundEvent_83_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_TowyExtandArmBackward_K2Node_ComponentBoundEvent_84_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_TowyExtandArmBackward_K2Node_ComponentBoundEvent_85_OnFocussed__DelegateSignature();
    void BndEvt__JumpOptionsActionBinder_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature();
    void BndEvt__JumpOptionsActionBinder_K2Node_ComponentBoundEvent_6_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PhotoMode_K2Node_ComponentBoundEvent_86_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PhotoMode_K2Node_ComponentBoundEvent_87_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_DecreaseSnapDistance_K2Node_ComponentBoundEvent_120_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_DecreaseSnapRotation_K2Node_ComponentBoundEvent_123_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_IncreaseSnapDistance_K2Node_ComponentBoundEvent_126_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_IncreaseSnapRotation_1_K2Node_ComponentBoundEvent_129_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_DecreaseSnapDistance_K2Node_ComponentBoundEvent_122_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_DecreaseSnapRotation_K2Node_ComponentBoundEvent_125_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_IncreaseSnapDistance_K2Node_ComponentBoundEvent_128_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_IncreaseSnapRotation_1_K2Node_ComponentBoundEvent_131_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_FastObjectRotate_K2Node_ComponentBoundEvent_106_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_FastObjectRotate_K2Node_ComponentBoundEvent_108_OnFocussed__DelegateSignature();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_ChangeInventoryUp_K2Node_ComponentBoundEvent_88_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_ChangeInventoryUp_K2Node_ComponentBoundEvent_89_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_ChangeInventoryDown_K2Node_ComponentBoundEvent_90_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_ChangeInventoryDown_K2Node_ComponentBoundEvent_91_OnFocussed__DelegateSignature();
    void BndEvt__ColorPicker_K2Node_ComponentBoundEvent_78_OnKeyChanged__DelegateSignature();
    void BndEvt__ColorPicker_K2Node_ComponentBoundEvent_80_OnFocussed__DelegateSignature();
    void BndEvt__DecalPicker_K2Node_ComponentBoundEvent_83_OnFocussed__DelegateSignature();
    void BndEvt__DecalPicker_K2Node_ComponentBoundEvent_81_OnKeyChanged__DelegateSignature();
    void BndEvt__AirBrushRotateLeft_K2Node_ComponentBoundEvent_84_OnKeyChanged__DelegateSignature();
    void BndEvt__AirBrushRotateLeft_K2Node_ComponentBoundEvent_86_OnFocussed__DelegateSignature();
    void BndEvt__AirBrushScaleUp_K2Node_ComponentBoundEvent_90_OnKeyChanged__DelegateSignature();
    void BndEvt__AirBrushScaleDown_K2Node_ComponentBoundEvent_93_OnKeyChanged__DelegateSignature();
    void BndEvt__AirBrushScaleDown_K2Node_ComponentBoundEvent_95_OnFocussed__DelegateSignature();
    void BndEvt__AirBrushScaleUp_K2Node_ComponentBoundEvent_92_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleTurnRight_K2Node_ComponentBoundEvent_192_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleTurnRight_K2Node_ComponentBoundEvent_194_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleTurbo_K2Node_ComponentBoundEvent_191_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleTurbo_K2Node_ComponentBoundEvent_189_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleSecondaryAction_K2Node_ComponentBoundEvent_186_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleSecondaryAction_K2Node_ComponentBoundEvent_188_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveForward_K2Node_ComponentBoundEvent_179_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveTurnLeft_K2Node_ComponentBoundEvent_182_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehiclePrimaryAction_K2Node_ComponentBoundEvent_185_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveForward_K2Node_ComponentBoundEvent_177_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveTurnLeft_K2Node_ComponentBoundEvent_180_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehiclePrimaryAction_K2Node_ComponentBoundEvent_183_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleHandbrake_K2Node_ComponentBoundEvent_173_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveBackward_K2Node_ComponentBoundEvent_176_OnFocussed__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleMoveBackward_K2Node_ComponentBoundEvent_174_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsKeyBindingsWidgetBP_VehicleHandbrake_K2Node_ComponentBoundEvent_171_OnKeyChanged__DelegateSignature();
    void OnPressedBack();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PlayerVehicleZoomOut_K2Node_ComponentBoundEvent_4_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PlayerVehicleZoomOut_K2Node_ComponentBoundEvent_5_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PlayerVehicleZoomIn_K2Node_ComponentBoundEvent_10_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_PlayerVehicleZoomIn_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature();
    void OnChangeInputDeviceUI_Event_0(bool bIsGamepadBeingUsed);
    void BndEvt__ControlsGamepadBindingsWidgetBP_Sprint_K2Node_ComponentBoundEvent_104_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_Sprint_K2Node_ComponentBoundEvent_105_OnFocussed__DelegateSignature();
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void BndEvt__ControlsGamepadBindingsWidgetBP_HammerCash_K2Node_ComponentBoundEvent_2_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_HammerCash_K2Node_ComponentBoundEvent_3_OnFocussed__DelegateSignature();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void BndEvt__ControlsGamepadBindingsWidgetBP_ValidateCinemaTicket_K2Node_ComponentBoundEvent_8_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_ValidateCinemaTicket_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_HighlightCinemaTrash_K2Node_ComponentBoundEvent_16_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_HighlightCinemaTrash_K2Node_ComponentBoundEvent_19_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_RejectCinemaTicket_K2Node_ComponentBoundEvent_20_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_RejectCinemaTicket_K2Node_ComponentBoundEvent_21_OnFocussed__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_QuitTicketMingame_K2Node_ComponentBoundEvent_22_OnKeyChanged__DelegateSignature();
    void BndEvt__ControlsGamepadBindingsWidgetBP_QuitTicketMingame_K2Node_ComponentBoundEvent_23_OnFocussed__DelegateSignature();
    void ExecuteUbergraph_ControlsGamepadBindingsWidgetBP(int32 EntryPoint);
}; // Size: 0x9D0

#endif
