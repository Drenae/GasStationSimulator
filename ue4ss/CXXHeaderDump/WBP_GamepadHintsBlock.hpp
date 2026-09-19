#ifndef UE4SS_SDK_WBP_GamepadHintsBlock_HPP
#define UE4SS_SDK_WBP_GamepadHintsBlock_HPP

class UWBP_GamepadHintsBlock_C : public UUserWidget
{
    class UHorizontalBox* MainBox;                                                    // 0x0260 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_1;                                  // 0x0268 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_2;                                  // 0x0270 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_3;                                  // 0x0278 (size: 0x8)
    TMap<FKey, FText> Hints;                                                          // 0x0280 (size: 0x50)

    void Clear();
    void CreateAdditionalHints(TMap<FKey, FText> Hints);
}; // Size: 0x2D0

#endif
