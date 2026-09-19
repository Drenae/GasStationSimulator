#ifndef UE4SS_SDK_WBP_CarWreckTooltip_HPP
#define UE4SS_SDK_WBP_CarWreckTooltip_HPP

class UWBP_CarWreckTooltip_C : public UUserWidget
{
    class UPlatformCarStats_C* Aerodynamics_Stat;                                     // 0x0260 (size: 0x8)
    class UScrollBox* CarPartsScrollbox;                                              // 0x0268 (size: 0x8)
    class UPlatformCarStats_C* Control_stat;                                          // 0x0270 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_1001;                                                         // 0x0288 (size: 0x8)
    class UPlatformCarStats_C* Power_stat;                                            // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_44;                                                   // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_49;                                                   // 0x02A8 (size: 0x8)
    class UPlatformCarStats_C* Toughness_stat;                                        // 0x02B0 (size: 0x8)

    void SetupName(FText WreckName, TMap<EJunkyardCarPartType, UActorComponent*>& WreckParts, FCarPartData& WreckStats);
}; // Size: 0x2B8

#endif
