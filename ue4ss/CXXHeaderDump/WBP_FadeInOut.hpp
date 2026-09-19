#ifndef UE4SS_SDK_WBP_FadeInOut_HPP
#define UE4SS_SDK_WBP_FadeInOut_HPP

class UWBP_FadeInOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeInOut;                                                // 0x0268 (size: 0x8)
    class UImage* Black_To_Fade;                                                      // 0x0270 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_FadeInOut(int32 EntryPoint);
}; // Size: 0x278

#endif
