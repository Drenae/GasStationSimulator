#ifndef UE4SS_SDK_WBP_WareHouseProduct_HPP
#define UE4SS_SDK_WBP_WareHouseProduct_HPP

class UWBP_WareHouseProduct_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* AmmountShelfTXT;                                                // 0x0268 (size: 0x8)
    class UTextBlock* AmmountTXT;                                                     // 0x0270 (size: 0x8)
    class UBorder* BG_Border;                                                         // 0x0278 (size: 0x8)
    class UHorizontalBox* ButtonsHorizontal;                                          // 0x0280 (size: 0x8)
    class UDragoButton* DragoButton_SellThrow;                                        // 0x0288 (size: 0x8)
    class UDragoButton* DragoButton_ThrowAll;                                         // 0x0290 (size: 0x8)
    class UImage* GamePadAllFrame;                                                    // 0x0298 (size: 0x8)
    class UImage* GamePadSingleFrame;                                                 // 0x02A0 (size: 0x8)
    class UBorder* HovBorder;                                                         // 0x02A8 (size: 0x8)
    class UTextBlock* NameTXT;                                                        // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_Throw;                                                // 0x02B8 (size: 0x8)
    class UImage* ThrowImage;                                                         // 0x02C0 (size: 0x8)
    class UImage* ThrowImage_1;                                                       // 0x02C8 (size: 0x8)
    class UTextBlock* TotalSupply_TXT;                                                // 0x02D0 (size: 0x8)
    int32 Color;                                                                      // 0x02D8 (size: 0x4)
    TSoftClassPtr<AItem> Item;                                                        // 0x02E0 (size: 0x28)
    int32 Ammount;                                                                    // 0x0308 (size: 0x4)
    bool IsProductRelated;                                                            // 0x030C (size: 0x1)
    int32 ShelfItemsAmmount;                                                          // 0x0310 (size: 0x4)
    int32 AmountToMoveBetweenInventory;                                               // 0x0314 (size: 0x4)
    int32 GamePadButtonIndex;                                                         // 0x0318 (size: 0x4)

    void CheckNoDlcIfCanBeDropped(TSoftClassPtr<AItem> ItemToCheck, TSoftClassPtr<AItem> ItemThatCantBeRemovedTillQUest, bool& Completed);
    void OnHover(bool IsHovered);
    void OnThrowAll();
    void OnSellThrow();
    void OnLoaded_F5466FD94745A9CACFAA0CA8AC8943BC(UClass* Loaded);
    void Construct();
    void BndEvt__DragoButton_SellThrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DragoButton_ThrowAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void GamePadButtonClick();
    void GamePadHovered(bool Hover);
    void GamePadSwitchButtons(bool Increase);
    void ExecuteUbergraph_WBP_WareHouseProduct(int32 EntryPoint);
}; // Size: 0x31C

#endif
