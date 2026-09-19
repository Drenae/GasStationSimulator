#ifndef UE4SS_SDK_WBP_SingleFuelPriceBoardText_HPP
#define UE4SS_SDK_WBP_SingleFuelPriceBoardText_HPP

class UWBP_SingleFuelPriceBoardText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Flip;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* 6Top;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* 7Bottom;                                                        // 0x0278 (size: 0x8)
    class UTextBlock* 7Top;                                                           // 0x0280 (size: 0x8)
    class UImage* BG_Image_1;                                                         // 0x0288 (size: 0x8)
    class UImage* BG_Image_2;                                                         // 0x0290 (size: 0x8)
    class UDragoButton* DownDragoButton;                                              // 0x0298 (size: 0x8)
    class UImage* Image_70;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_107;                                                          // 0x02A8 (size: 0x8)
    class UImage* Image_210;                                                          // 0x02B0 (size: 0x8)
    class URetainerBox* Mask6;                                                        // 0x02B8 (size: 0x8)
    class URetainerBox* MaskTop_Bottom;                                               // 0x02C0 (size: 0x8)
    class URetainerBox* MaskTop_Top;                                                  // 0x02C8 (size: 0x8)
    class UDragoButton* UpDragoButton;                                                // 0x02D0 (size: 0x8)
    float Texture;                                                                    // 0x02D8 (size: 0x4)
    FWBP_SingleFuelPriceBoardText_COnUpArrow OnUpArrow;                               // 0x02E0 (size: 0x10)
    void OnUpArrow();
    FWBP_SingleFuelPriceBoardText_COnDownArrow OnDownArrow;                           // 0x02F0 (size: 0x10)
    void OnDownArrow();
    int32 FrontNumber;                                                                // 0x0300 (size: 0x4)
    int32 BackNumber;                                                                 // 0x0304 (size: 0x4)
    bool IsAnimationActive;                                                           // 0x0308 (size: 0x1)
    TArray<int32> NumberUpdateQueue;                                                  // 0x0310 (size: 0x10)
    int32 CurrentNumberForAnim;                                                       // 0x0320 (size: 0x4)
    float CurrentAnimationSpeed;                                                      // 0x0324 (size: 0x4)

    void SetNewNumberPlus();
    void SetNewNumberMinus();
    void Finished_B0B4582E4355D8296883A2A866D7C5B9();
    void UpdateNumber(int32 NewNumber, bool ShouldAnimate);
    void PlayNumberAnimation();
    void DecreasePrice();
    void IncreasePrice();
    void BndEvt__WBP_SingleFuelPriceBoardText_UpDragoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_SingleFuelPriceBoardText_DownDragoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SetRendering();
    void DisableRendering();
    void ExecuteUbergraph_WBP_SingleFuelPriceBoardText(int32 EntryPoint);
    void OnDownArrow__DelegateSignature();
    void OnUpArrow__DelegateSignature();
}; // Size: 0x328

#endif
