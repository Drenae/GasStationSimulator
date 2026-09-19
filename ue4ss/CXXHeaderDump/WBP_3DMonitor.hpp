#ifndef UE4SS_SDK_WBP_3DMonitor_HPP
#define UE4SS_SDK_WBP_3DMonitor_HPP

class UWBP_3DMonitor_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* IdleAnimation;                                            // 0x0288 (size: 0x8)
    class UBorder* Border_Contract;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02A8 (size: 0x8)
    class UOverlay* NoContract_Overlay;                                               // 0x02B0 (size: 0x8)
    class UWBP_Projector_C* WBP_Projector;                                            // 0x02B8 (size: 0x8)
    class AJunkyardCarWreck* Wreck;                                                   // 0x02C0 (size: 0x8)
    class USpecialContract* ContractRef;                                              // 0x02C8 (size: 0x8)

    void UpdateSelectedContract();
    void OnWreckRemoved();
    void OnWreckPlaced(class AJunkyardCarWreck* Wreck);
    void SetupContract(class USpecialContract* Contract);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_3DMonitor(int32 EntryPoint);
}; // Size: 0x2D0

#endif
