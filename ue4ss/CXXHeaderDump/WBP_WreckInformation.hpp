#ifndef UE4SS_SDK_WBP_WreckInformation_HPP
#define UE4SS_SDK_WBP_WreckInformation_HPP

class UWBP_WreckInformation_C : public UUserWidget
{
    class UImage* Image_21;                                                           // 0x0260 (size: 0x8)
    class UImage* Logo_IMG;                                                           // 0x0268 (size: 0x8)
    class UOverlay* Overlay_Sale;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* PartHeadline_NonCustomizable;                                   // 0x0278 (size: 0x8)
    class UTextBlock* PartHeadline_Text;                                              // 0x0280 (size: 0x8)
    class UTextBlock* PartHeadline_Tier;                                              // 0x0288 (size: 0x8)

    void SetupName(FText WreckName, bool bCustomizable, EJunkyardPartRarity Rarity, EJunkyardCarWreckType WreckType, bool bOnSale);
}; // Size: 0x290

#endif
