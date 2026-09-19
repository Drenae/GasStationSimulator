#ifndef UE4SS_SDK_WBP_PCGamepadHint_HPP
#define UE4SS_SDK_WBP_PCGamepadHint_HPP

class UWBP_PCGamepadHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* HintText;                                                       // 0x0268 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_1;                                  // 0x0270 (size: 0x8)
    FKey Key;                                                                         // 0x0278 (size: 0x18)
    FVector2D Icon Size;                                                              // 0x0290 (size: 0x8)
    FText InHintText;                                                                 // 0x0298 (size: 0x18)

    void SetData();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_PCGamepadHint(int32 EntryPoint);
}; // Size: 0x2B0

#endif
