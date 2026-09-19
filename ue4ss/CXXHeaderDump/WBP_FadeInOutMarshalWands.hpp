#ifndef UE4SS_SDK_WBP_FadeInOutMarshalWands_HPP
#define UE4SS_SDK_WBP_FadeInOutMarshalWands_HPP

class UWBP_FadeInOutMarshalWands_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeInOut;                                                // 0x0268 (size: 0x8)
    class UImage* Black_To_Fade;                                                      // 0x0270 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_FadeInOutMarshalWands(int32 EntryPoint);
}; // Size: 0x278

#endif
