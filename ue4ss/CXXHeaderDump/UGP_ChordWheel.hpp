#ifndef UE4SS_SDK_UGP_ChordWheel_HPP
#define UE4SS_SDK_UGP_ChordWheel_HPP

class UUGP_ChordWheel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Mid;                                                            // 0x0268 (size: 0x8)
    class UUGP_ChordWheelPart_C* N;                                                   // 0x0270 (size: 0x8)
    class UUGP_ChordWheelPart_C* NE;                                                  // 0x0278 (size: 0x8)
    class UUGP_ChordWheelPart_C* NW;                                                  // 0x0280 (size: 0x8)
    class UUGP_ChordWheelPart_C* S;                                                   // 0x0288 (size: 0x8)
    class UUGP_ChordWheelPart_C* SE;                                                  // 0x0290 (size: 0x8)
    class UUGP_ChordWheelPart_C* SW;                                                  // 0x0298 (size: 0x8)
    TArray<FName> KeysToUse;                                                          // 0x02A0 (size: 0x10)
    FLinearColor TextColor;                                                           // 0x02B0 (size: 0x10)
    FLinearColor InsideWheelColor;                                                    // 0x02C0 (size: 0x10)
    FLinearColor OutsideWheelColor;                                                   // 0x02D0 (size: 0x10)
    FName CurrentKey;                                                                 // 0x02E0 (size: 0x8)
    FLinearColor HoverTextColor;                                                      // 0x02E8 (size: 0x10)
    FLinearColor HoverInsideWheelColor;                                               // 0x02F8 (size: 0x10)
    FLinearColor HoverOutsideWheelColor;                                              // 0x0308 (size: 0x10)
    float HoverScaleUpPercentage;                                                     // 0x0318 (size: 0x4)
    FName CurrentChord;                                                               // 0x031C (size: 0x8)

    void GamepadControl();
    void InitializeWheelColor(FLinearColor Inside Color, FLinearColor OutsideColor, FLinearColor ChordTextColor);
    void HoverOnWheel(FString Wheel Part);
    void InitializeCurrentKey();
    void UpdateCurrentKey(bool Increase);
    void UpdateKeyAndChordTexts();
    void MouseWheelRelation();
    void InitializeSettings(TArray<FName>& KeysToUse, FLinearColor TextColor, FLinearColor InsideWheelColor, FLinearColor OutsideWheelColor, FLinearColor HoverTextColor, FLinearColor HoverInsideWheelColor, FLinearColor HoverOutsideWheelColor, float HoverScaleUpPercentage);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UGP_ChordWheel(int32 EntryPoint);
}; // Size: 0x324

#endif
