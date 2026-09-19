#ifndef UE4SS_SDK_WBP_BlackScreen_HPP
#define UE4SS_SDK_WBP_BlackScreen_HPP

class UWBP_BlackScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_WBP_BlackScreen(int32 EntryPoint);
}; // Size: 0x280

#endif
