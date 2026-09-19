#ifndef UE4SS_SDK_LoadingScreenWidgetBP_HPP
#define UE4SS_SDK_LoadingScreenWidgetBP_HPP

class ULoadingScreenWidgetBP_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UOverlay* JUNKYARD_Overlay1;                                                // 0x05C8 (size: 0x8)
    class UOverlay* JUNKYARD_Overlay2;                                                // 0x05D0 (size: 0x8)
    class UOverlay* JUNKYARD_Overlay3;                                                // 0x05D8 (size: 0x8)
    class UTextBlock* LoadingText;                                                    // 0x05E0 (size: 0x8)
    class UTextBlock* LoadingText_1;                                                  // 0x05E8 (size: 0x8)
    class UTextBlock* LoadingText_2;                                                  // 0x05F0 (size: 0x8)
    class UTextBlock* LoadingText_3;                                                  // 0x05F8 (size: 0x8)
    class UTextBlock* LoadingText_4;                                                  // 0x0600 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0608 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0610 (size: 0x8)
    class UOverlay* Overlay_2;                                                        // 0x0618 (size: 0x8)
    class UOverlay* Overlay_3;                                                        // 0x0620 (size: 0x8)
    class UOverlay* RV_Camp_Overlay1;                                                 // 0x0628 (size: 0x8)
    class UTextBlock* TextBlock_64;                                                   // 0x0630 (size: 0x8)
    class UOverlay* TIDAL_Overlay1;                                                   // 0x0638 (size: 0x8)
    class UOverlay* TIDAL_Overlay2;                                                   // 0x0640 (size: 0x8)
    class UOverlay* TIDAL_Overlay3;                                                   // 0x0648 (size: 0x8)
    float NewVar_0;                                                                   // 0x0650 (size: 0x4)
    FName MapName;                                                                    // 0x0654 (size: 0x8)
    TArray<int32> LoadingScreen;                                                      // 0x0660 (size: 0x10)

    void Select Loading Screen(int32 RandomItem);
    void SetGlobalSettings();
    void OnGlobalSettingsApply();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void CheckLoadingMap();
    void ExecuteUbergraph_LoadingScreenWidgetBP(int32 EntryPoint);
}; // Size: 0x670

#endif
