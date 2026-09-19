#ifndef UE4SS_SDK_WBP_GameFinalFade_HPP
#define UE4SS_SDK_WBP_GameFinalFade_HPP

class UWBP_GameFinalFade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)

    void TriggerEndScreen();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_WBP_GameFinalFade(int32 EntryPoint);
}; // Size: 0x270

#endif
