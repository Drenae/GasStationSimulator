#ifndef UE4SS_SDK_ThrowMiniGameOverlay_HPP
#define UE4SS_SDK_ThrowMiniGameOverlay_HPP

class UThrowMiniGameOverlay_C : public UWBP_ThrowMinigame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UTextBlock* alert;                                                          // 0x02F8 (size: 0x8)
    class UImage* Basketball_ICON;                                                    // 0x0300 (size: 0x8)
    class UImage* Image_414;                                                          // 0x0308 (size: 0x8)
    class UImage* Throwing_ICON;                                                      // 0x0310 (size: 0x8)
    class APlayerCharacter_BP_C* Player;                                              // 0x0318 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Andrzej();
    void SetText();
    void ExecuteUbergraph_ThrowMiniGameOverlay(int32 EntryPoint);
}; // Size: 0x320

#endif
