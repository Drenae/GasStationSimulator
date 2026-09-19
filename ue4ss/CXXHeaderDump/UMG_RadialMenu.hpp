#ifndef UE4SS_SDK_UMG_RadialMenu_HPP
#define UE4SS_SDK_UMG_RadialMenu_HPP

class UUMG_RadialMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* RadialBackground;                                                   // 0x0268 (size: 0x8)
    class UImage* RadiusDebug;                                                        // 0x0270 (size: 0x8)
    class UOverlay* RootOverlay;                                                      // 0x0278 (size: 0x8)
    int32 Segments;                                                                   // 0x0280 (size: 0x4)
    class UMaterialInterface* MaterialBase;                                           // 0x0288 (size: 0x8)
    float IndexRaw;                                                                   // 0x0290 (size: 0x4)
    int32 Index;                                                                      // 0x0294 (size: 0x4)
    class UMaterialInstanceDynamic* dynaMat;                                          // 0x0298 (size: 0x8)
    TArray<UUserWidget*> Children;                                                    // 0x02A0 (size: 0x10)
    bool AllowResizing;                                                               // 0x02B0 (size: 0x1)
    float ItemOffsetRadius;                                                           // 0x02B4 (size: 0x4)
    FUMG_RadialMenu_CSelectionChanged SelectionChanged;                               // 0x02B8 (size: 0x10)
    void SelectionChanged(int32 NewSelection, int32 OldSelection);
    class APlayerController* InputController;                                         // 0x02C8 (size: 0x8)
    TEnumAsByte<EJoystickTypes::Type> JoystickToUse;                                  // 0x02D0 (size: 0x1)
    float MouseDeadzone;                                                              // 0x02D4 (size: 0x4)
    bool bInDeadzone;                                                                 // 0x02D8 (size: 0x1)
    FUMG_RadialMenu_CEnteredDeadzone EnteredDeadzone;                                 // 0x02E0 (size: 0x10)
    void EnteredDeadzone();
    FUMG_RadialMenu_CExitedDeadzone ExitedDeadzone;                                   // 0x02F0 (size: 0x10)
    void ExitedDeadzone();
    FVector2D CurrentInput;                                                           // 0x0300 (size: 0x8)
    float JoystickDeadzone;                                                           // 0x0308 (size: 0x4)
    bool DefaultToMouseIfNoJoystick;                                                  // 0x030C (size: 0x1)
    int32 DefaultPlayerIndex;                                                         // 0x0310 (size: 0x4)
    bool UseDeadzoneEvents;                                                           // 0x0314 (size: 0x1)
    class USoundBase* SelectionChangedSound;                                          // 0x0318 (size: 0x8)
    bool AutoCenterMouse;                                                             // 0x0320 (size: 0x1)
    bool AutoRotateForUp;                                                             // 0x0321 (size: 0x1)
    bool bUseCustomInput;                                                             // 0x0322 (size: 0x1)
    FVector2D CustomInput;                                                            // 0x0324 (size: 0x8)
    bool UseCustomTexture;                                                            // 0x032C (size: 0x1)
    class UTexture* RadialTexture;                                                    // 0x0330 (size: 0x8)
    bool UseCustomColors;                                                             // 0x0338 (size: 0x1)
    FLinearColor InnterRingColor;                                                     // 0x033C (size: 0x10)
    FLinearColor OuterRingColor;                                                      // 0x034C (size: 0x10)
    FLinearColor RingMainColor;                                                       // 0x035C (size: 0x10)
    FLinearColor UnhighlightColor;                                                    // 0x036C (size: 0x10)
    FTimerHandle OnGamePadCursorVisible;                                              // 0x0380 (size: 0x8)

    void UpdateMaterialVisuals();
    void GetCustomInput(FVector2D& Input, bool& Valid);
    void SetCustomInput(FVector2D CustomInput);
    void UpdateDirectionWithCustomInput();
    void RemoveChildIndexFromRadialMenu(int32 IndexToRemove);
    void RemoveChildWidgetFromRadialMenu(const class UUserWidget*& ItemToFind);
    FText DebugIndex();
    FVector2D FixInputRotation(FVector2D Input);
    void FixMainRotation();
    void AutoRegisterToInput();
    void UpdateInput();
    void RegisterPlayerInput(class APlayerController* Controller, bool& Success);
    void UpdateDirectionWithJoystick();
    void GetCurrentIndex(int32& Index, bool& Valid);
    void GetChild(int32 Index, class UUserWidget*& Output, bool& Success);
    void SetIndex(int32 Index);
    void UpdateAllChildrenPositions();
    void UpdateChildPosition(int32 Index);
    void ClearChildren();
    void GetSelectedWidget(class UUserWidget*& Output);
    void AddChildToRadialMenu(class UUserWidget* Content, bool& Success);
    void UpdateDirectionWithMouseCursor();
    float GetSectionDegreeSize();
    void Construct();
    void UpdateSegments(int32 Segments);
    void SetInputDirection(FVector2D Direction);
    void InDeadZone(bool InDeadZone);
    void UpdateMaterials();
    void PreConstruct(bool IsDesignTime);
    void SetBackgroundColor(FLinearColor NewColor);
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void Destruct();
    void OnConstructHandleCursorVisibility();
    void ExecuteUbergraph_UMG_RadialMenu(int32 EntryPoint);
    void ExitedDeadzone__DelegateSignature();
    void EnteredDeadzone__DelegateSignature();
    void SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
}; // Size: 0x388

#endif
