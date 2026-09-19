#ifndef UE4SS_SDK_WBP_FuelBeforeTanking_HPP
#define UE4SS_SDK_WBP_FuelBeforeTanking_HPP

class UWBP_FuelBeforeTanking_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Best_Score_TXT;                                                 // 0x0268 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0270 (size: 0x8)
    class UImage* Image_278;                                                          // 0x0278 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0280 (size: 0x8)
    class UTextBlock* LAST_Score_TXT;                                                 // 0x0288 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0290 (size: 0x8)
    class UOverlay* StartFuelingInfoPad;                                              // 0x0298 (size: 0x8)
    class UWBP_BuyFuelNotification_C* WBP_BuyFuelNotification;                        // 0x02A0 (size: 0x8)
    class UWBP_FuelStatus_C* WBP_FuelStatus;                                          // 0x02A8 (size: 0x8)
    bool BuyFuelOnScreen;                                                             // 0x02B0 (size: 0x1)
    bool bIsGasStation;                                                               // 0x02B1 (size: 0x1)
    class UInventoryComponent* CurInventory;                                          // 0x02B8 (size: 0x8)
    EGameActivityType TutorialType;                                                   // 0x02C0 (size: 0x1)

    void Construct();
    void UpdateOnFuelStatus(const float CurrentFuelAmount);
    void Destruct();
    void UpdateOnGamePad();
    void ExecuteUbergraph_WBP_FuelBeforeTanking(int32 EntryPoint);
}; // Size: 0x2C1

#endif
