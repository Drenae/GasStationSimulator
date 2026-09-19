#ifndef UE4SS_SDK_PC_Home_Tidal_HPP
#define UE4SS_SDK_PC_Home_Tidal_HPP

class UPC_Home_Tidal_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWBP_PC_Home_Card_C* CarWashCard;                                           // 0x0298 (size: 0x8)
    class UWBP_PC_Home_Card_C* GasStationCard;                                        // 0x02A0 (size: 0x8)
    class UWBP_PC_Home_Card_C* WareHouseCard;                                         // 0x02A8 (size: 0x8)
    class UWBP_PC_Home_Card_C* WorkShopCard;                                          // 0x02B0 (size: 0x8)
    class UWrapBox* WrapBox_0;                                                        // 0x02B8 (size: 0x8)
    class UPcBaseTab* CurrentTab;                                                     // 0x02C0 (size: 0x8)
    FString CurrentMoreInfoTab;                                                       // 0x02C8 (size: 0x10)
    int32 GamePadCardIndex;                                                           // 0x02D8 (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void Destruct();
    void OnClicked(TSoftClassPtr<UPcBaseTab> TabToCreate, class UPC_Base_Card* ButtonREF, bool bReplaceExistingWidget);
    void Onremove(TSoftClassPtr<UPcBaseTab> TabToCreate, class UPC_Base_Card* ButtonREF, bool bReplaceExistingWidget);
    void ExecuteUbergraph_PC_Home_Tidal(int32 EntryPoint);
}; // Size: 0x2DC

#endif
