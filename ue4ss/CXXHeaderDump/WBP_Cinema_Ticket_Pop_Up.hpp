#ifndef UE4SS_SDK_WBP_Cinema_Ticket_Pop_Up_HPP
#define UE4SS_SDK_WBP_Cinema_Ticket_Pop_Up_HPP

class UWBP_Cinema_Ticket_Pop_Up_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* IconCash;                                                           // 0x0270 (size: 0x8)
    class UImage* IconCash_1;                                                         // 0x0278 (size: 0x8)
    class UImage* IconRenown;                                                         // 0x0280 (size: 0x8)
    class UImage* IconRushHour;                                                       // 0x0288 (size: 0x8)
    class UImage* PopupBG;                                                            // 0x0290 (size: 0x8)
    class URenown_Multi_Popup_C* Renown_Multi_Popup;                                  // 0x0298 (size: 0x8)
    class USizeBox* SizeBox_Cash;                                                     // 0x02A0 (size: 0x8)
    class USizeBox* SizeBox_Renown;                                                   // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_CashAmount;                                           // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_description;                                          // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_RenownAmount;                                         // 0x02C0 (size: 0x8)
    class UImage* TicketIcon;                                                         // 0x02C8 (size: 0x8)
    class UHorizontalBox* Trending_HorizontalBox;                                     // 0x02D0 (size: 0x8)
    class UWBP_Trending_Pop_Up_C* WBP_Trending_Pop_Up;                                // 0x02D8 (size: 0x8)
    bool bReject;                                                                     // 0x02E0 (size: 0x1)
    int32 RenownAmount;                                                               // 0x02E4 (size: 0x4)
    float CashAmount;                                                                 // 0x02E8 (size: 0x4)

    void Finished_69D70A124AE0477E328113A6A2FBEFA4();
    void Construct();
    void ExecuteUbergraph_WBP_Cinema_Ticket_Pop_Up(int32 EntryPoint);
}; // Size: 0x2EC

#endif
