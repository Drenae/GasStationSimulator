#ifndef UE4SS_SDK_PC_VipCustomer_HPP
#define UE4SS_SDK_PC_VipCustomer_HPP

class UPC_VipCustomer_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_37;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_114;                                                          // 0x02A8 (size: 0x8)
    class UWBP_GradientColor_C* WBP_GradientColor;                                    // 0x02B0 (size: 0x8)
    class UWBP_RoundedCornersRectangle_C* WBP_RoundedCornersRectangle;                // 0x02B8 (size: 0x8)
    class UWBP_VipDestination_C* WBP_VipDestination;                                  // 0x02C0 (size: 0x8)
    class UWBP_VipDestination_C* WBP_VipDestination_1;                                // 0x02C8 (size: 0x8)
    class UWBP_VipDestination_C* WBP_VipDestination_2;                                // 0x02D0 (size: 0x8)
    class UWBP_VipRoute_C* WBP_VipRoute;                                              // 0x02D8 (size: 0x8)
    class UWBP_VipRoute_C* WBP_VipRoute_1;                                            // 0x02E0 (size: 0x8)
    class UWBP_VipRoute_C* WBP_VipRoute_2;                                            // 0x02E8 (size: 0x8)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_PC_VipCustomer(int32 EntryPoint);
}; // Size: 0x2F0

#endif
