#ifndef UE4SS_SDK_Dirty_Widget_HPP
#define UE4SS_SDK_Dirty_Widget_HPP

class UDirty_Widget_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* ToiletPlus;                                               // 0x0290 (size: 0x8)
    class UWidgetAnimation* ToiletMInus;                                              // 0x0298 (size: 0x8)
    class UWidgetAnimation* ShopPlus;                                                 // 0x02A0 (size: 0x8)
    class UWidgetAnimation* ShopMinus;                                                // 0x02A8 (size: 0x8)
    class USlider* GasStationSlider1;                                                 // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_588;                                                          // 0x02C0 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x02C8 (size: 0x8)
    class UProgressBar* ProgressBar;                                                  // 0x02D0 (size: 0x8)
    class UProgressBar* ProgressBar_95;                                               // 0x02D8 (size: 0x8)
    class UImage* SecondBG;                                                           // 0x02E0 (size: 0x8)
    class UOverlay* Toilet_Slider_Overlay;                                            // 0x02E8 (size: 0x8)
    class USlider* ToiletSlider1;                                                     // 0x02F0 (size: 0x8)
    class UImage* WC_IMG;                                                             // 0x02F8 (size: 0x8)
    float Shop;                                                                       // 0x0300 (size: 0x4)
    float Toilet;                                                                     // 0x0304 (size: 0x4)

    void CheckVisibility();
    void UpdateDecal(float House, float Toilet);
    void Construct();
    void OnQuestSpawned_Event_0(const class UGSSQuest* GSSQuest);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void OnDirtyLevelUpdated_Event_0(const float HouseDirtyPercent, const float ToiletDirtyPercent, const float ShowerDirtyPercent);
    void CheckNotificationVisibility(FUnlockableUIState NewUnlockableUIState);
    void ExecuteUbergraph_Dirty_Widget(int32 EntryPoint);
}; // Size: 0x308

#endif
