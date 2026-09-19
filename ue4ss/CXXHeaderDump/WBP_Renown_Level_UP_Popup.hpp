#ifndef UE4SS_SDK_WBP_Renown_Level_UP_Popup_HPP
#define UE4SS_SDK_WBP_Renown_Level_UP_Popup_HPP

class UWBP_Renown_Level_UP_Popup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* AnimRenown;                                               // 0x0268 (size: 0x8)
    class UTextBlock* RenownLevel_Text;                                               // 0x0270 (size: 0x8)
    class UImage* TicketIcon;                                                         // 0x0278 (size: 0x8)
    class UImage* TicketIcon_1;                                                       // 0x0280 (size: 0x8)
    class UImage* TicketIcon_2;                                                       // 0x0288 (size: 0x8)
    int32 NewRenownLevel;                                                             // 0x0290 (size: 0x4)

    void Finished_5880999E46911AE5A145BA97818C384A();
    void Construct();
    void ExecuteUbergraph_WBP_Renown_Level_UP_Popup(int32 EntryPoint);
}; // Size: 0x294

#endif
