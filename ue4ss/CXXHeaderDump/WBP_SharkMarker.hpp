#ifndef UE4SS_SDK_WBP_SharkMarker_HPP
#define UE4SS_SDK_WBP_SharkMarker_HPP

class UWBP_SharkMarker_C : public UGSSWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* OpenMarker;                                               // 0x0270 (size: 0x8)
    class AActor* Instiginator;                                                       // 0x0278 (size: 0x8)
    bool IsInMinigameMode;                                                            // 0x0280 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_WBP_SharkMarker(int32 EntryPoint);
}; // Size: 0x281

#endif
