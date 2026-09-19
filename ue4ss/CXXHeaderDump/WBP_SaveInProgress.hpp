#ifndef UE4SS_SDK_WBP_SaveInProgress_HPP
#define UE4SS_SDK_WBP_SaveInProgress_HPP

class UWBP_SaveInProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Roll;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* EnterAnimation;                                           // 0x0270 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0278 (size: 0x8)
    class UThrobber* Throbber;                                                        // 0x0280 (size: 0x8)
    FWBP_SaveInProgress_CFinish Finish;                                               // 0x0288 (size: 0x10)
    void Finish();

    void Construct();
    void ExecuteUbergraph_WBP_SaveInProgress(int32 EntryPoint);
    void Finish__DelegateSignature();
}; // Size: 0x298

#endif
