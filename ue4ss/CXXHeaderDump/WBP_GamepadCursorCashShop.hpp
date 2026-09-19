#ifndef UE4SS_SDK_WBP_GamepadCursorCashShop_HPP
#define UE4SS_SDK_WBP_GamepadCursorCashShop_HPP

class UWBP_GamepadCursorCashShop_C : public UUserWidget
{
    class UImage* ClosedHand;                                                         // 0x0260 (size: 0x8)
    class UImage* Image_106;                                                          // 0x0268 (size: 0x8)
    class UImage* OpenHand;                                                           // 0x0270 (size: 0x8)

    void Set Open Hand(bool Hand Open);
    void Set World Location(FVector World Location);
}; // Size: 0x278

#endif
