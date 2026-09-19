#ifndef UE4SS_SDK_Allertmessage_HPP
#define UE4SS_SDK_Allertmessage_HPP

class UAllertMessage_C : public UGSSAlertWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* alert;                                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0278 (size: 0x8)
    FText AlertInfo;                                                                  // 0x0280 (size: 0x18)
    float Time;                                                                       // 0x0298 (size: 0x4)
    FTimerHandle NewVar_0;                                                            // 0x02A0 (size: 0x8)
    FLinearColor TextColor;                                                           // 0x02A8 (size: 0x10)

    void UpdateText(FText InText);
    void Construct();
    void Destroy();
    void Destroy_LMB();
    void SetAlertValues(const FText& TextToEnter, float TimeToShow);
    void ExecuteUbergraph_AllertMessage(int32 EntryPoint);
}; // Size: 0x2B8

#endif
