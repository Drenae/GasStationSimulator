#ifndef UE4SS_SDK_WBP_NewFameLevelPopup_HPP
#define UE4SS_SDK_WBP_NewFameLevelPopup_HPP

class UWBP_NewFameLevelPopup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CloseAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* OpenAnim;                                                 // 0x0270 (size: 0x8)
    class UTextBlock* LvlUnlocked;                                                    // 0x0278 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0280 (size: 0x8)

    void Finished_789D055C472153F15A4E1482E59AF1D9();
    void Finished_AEE68886459F3ACF7891EAA1D9D6E9CD();
    void Construct();
    void OnNewLevelUnlocked_Event(const int32 NewLevel);
    void ExecuteUbergraph_WBP_NewFameLevelPopup(int32 EntryPoint);
}; // Size: 0x288

#endif
