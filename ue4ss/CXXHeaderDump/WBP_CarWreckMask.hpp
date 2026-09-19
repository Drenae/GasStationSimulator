#ifndef UE4SS_SDK_WBP_CarWreckMask_HPP
#define UE4SS_SDK_WBP_CarWreckMask_HPP

class UWBP_CarWreckMask_C : public UJunkyardWreckMaskWidget
{
    class UImage* Map_BG;                                                             // 0x0280 (size: 0x8)
    class UVerticalBox* VerticalBox_Slots;                                            // 0x0288 (size: 0x8)
    class AJunkyardCarWreckCustomizable* CarWreck;                                    // 0x0290 (size: 0x8)

    void CustomEscape();
    void Setup(class AJunkyardCarWreckCustomizable* CarWreck);
}; // Size: 0x298

#endif
