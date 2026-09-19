#ifndef UE4SS_SDK_NewPlaneNotification_WBP_HPP
#define UE4SS_SDK_NewPlaneNotification_WBP_HPP

class UNewPlaneNotification_WBP_C : public UUserWidget
{
    class UWidgetAnimation* AnimationSecondPlaneDebug;                                // 0x0260 (size: 0x8)
    class UWidgetAnimation* AnimationFirstPlaneDebug;                                 // 0x0268 (size: 0x8)
    class UHorizontalBox* AirplaneNotification_Horizontal;                            // 0x0270 (size: 0x8)
    class UTextBlock* FirstAirstripTXT;                                               // 0x0278 (size: 0x8)
    class UImage* FirstPlaneIconArriving;                                             // 0x0280 (size: 0x8)
    class UImage* FirstPlaneIconOnSpot;                                               // 0x0288 (size: 0x8)
    class UImage* FirstRunweyPlane;                                                   // 0x0290 (size: 0x8)
    class UTextBlock* SecondAirstripTXT;                                              // 0x0298 (size: 0x8)
    class UImage* SecondPlaneIconArriving;                                            // 0x02A0 (size: 0x8)
    class UImage* SecondPlaneIconOnSpot;                                              // 0x02A8 (size: 0x8)
    class UImage* SecondRunwayPlane;                                                  // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

#endif
