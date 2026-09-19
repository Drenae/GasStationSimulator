#ifndef UE4SS_SDK_ControlsSettingsContainerWidgetBP_HPP
#define UE4SS_SDK_ControlsSettingsContainerWidgetBP_HPP

class UControlsSettingsContainerWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UControlsGamepadBindingsWidgetBP_C* ControlsGamepadBindingsWidgetBP;        // 0x0608 (size: 0x8)
    class UControlsKeyBindingsWidgetBP_C* ControlsKeyBindingsWidgetBP;                // 0x0610 (size: 0x8)
    class UControlsOverviewWidgetBP_C* ControlsOverviewWidgetBP;                      // 0x0618 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0620 (size: 0x8)
    FControlsSettingsContainerWidgetBP_COnClickedBack OnClickedBack;                  // 0x0628 (size: 0x10)
    void OnClickedBack();
    bool InvertLookXDefault;                                                          // 0x0638 (size: 0x1)
    bool InvertLookYDefault;                                                          // 0x0639 (size: 0x1)
    float CameraSpeedXDefault;                                                        // 0x063C (size: 0x4)
    float CameraSpeedYDefault;                                                        // 0x0640 (size: 0x4)
    bool RumbleDefault;                                                               // 0x0644 (size: 0x1)
    bool bIsDirty;                                                                    // 0x0645 (size: 0x1)
    bool LoadedInvertLookX;                                                           // 0x0646 (size: 0x1)
    bool LoadedInvertLookY;                                                           // 0x0647 (size: 0x1)
    float LoadedCameraSpeedX;                                                         // 0x0648 (size: 0x4)
    float LoadedCameraSpeedY;                                                         // 0x064C (size: 0x4)
    bool LoadedRumble;                                                                // 0x0650 (size: 0x1)
    bool LoadDefaultGamepad;                                                          // 0x0651 (size: 0x1)
    bool LoadedToggleSprintMode;                                                      // 0x0652 (size: 0x1)
    bool DisableConttolerDefault;                                                     // 0x0653 (size: 0x1)
    bool LoadedToggleInspectMode;                                                     // 0x0654 (size: 0x1)

    void ResetDeviceBindingsAndRestoreUnboundDRAGO(TArray<UInteractableUserWidget_C*>& InteractableUserWidget, bool IsGamepad);
    void ImprovedResetBindingsDRAGO(TArray<UInteractableUserWidget_C*>& InteractableUserWidget, bool IsGamepad, bool bRebuildAndSaveKmaps);
    void ForceRemove_Axis(bool IsGamepad, bool bForceRebuildKeymaps);
    void ForceRemove_Actions(bool IsGamepad, bool bForceRebuildKeymaps);
    void ForceRemoveAllMappings(bool IsGamepad, bool bForceRebuildKeymaps);
    void RemoveActionMappingByName(FName InActionName, bool bIsGamepadMapping, bool bForceRebuildKeymaps);
    void RemoveAxisMappingByName(FName InAxisName, float InScale, bool bIsGamepadMapping, bool bForceRebuildKeymaps);
    void SaveDefaultBindings();
    void GetSavedControlsSettings();
    void DirtyCheck(bool& bIsReallyDirty);
    void SetSensivitySliderValue(class UOptionsSlider_C* InOptionsSlider, float InValue);
    void ResetControlsSettings();
    void ApplyControlsSettings();
    void LoadControlsSettings();
    void MarkSettingsAsDirty();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void Construct();
    void ExecuteUbergraph_ControlsSettingsContainerWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x655

#endif
