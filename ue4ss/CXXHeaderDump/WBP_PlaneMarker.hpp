#ifndef UE4SS_SDK_WBP_PlaneMarker_HPP
#define UE4SS_SDK_WBP_PlaneMarker_HPP

class UWBP_PlaneMarker_C : public UGSSWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_153;                                                  // 0x0270 (size: 0x8)
    class AActor* Instiginator;                                                       // 0x0278 (size: 0x8)
    bool IsInMinigameMode;                                                            // 0x0280 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PlaneMarker(int32 EntryPoint);
}; // Size: 0x281

#endif
