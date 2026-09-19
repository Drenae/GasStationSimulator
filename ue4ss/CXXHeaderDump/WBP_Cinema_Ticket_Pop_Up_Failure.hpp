#ifndef UE4SS_SDK_WBP_Cinema_Ticket_Pop_Up_Failure_HPP
#define UE4SS_SDK_WBP_Cinema_Ticket_Pop_Up_Failure_HPP

class UWBP_Cinema_Ticket_Pop_Up_Failure_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* IconCash;                                                           // 0x0270 (size: 0x8)
    class UImage* IconRenown;                                                         // 0x0278 (size: 0x8)
    class UImage* PopupBG;                                                            // 0x0280 (size: 0x8)
    class USizeBox* SizeBox_Cash;                                                     // 0x0288 (size: 0x8)
    class USizeBox* SizeBox_Renown;                                                   // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_CashAmount;                                           // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_description;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_RenownAmount;                                         // 0x02A8 (size: 0x8)
    class UImage* TicketIcon;                                                         // 0x02B0 (size: 0x8)
    bool bReject;                                                                     // 0x02B8 (size: 0x1)
    int32 RenownAmount;                                                               // 0x02BC (size: 0x4)
    float CashAmount;                                                                 // 0x02C0 (size: 0x4)

    void Finished_6D4113574166534F156D188FF6A1A358();
    void Construct();
    void ExecuteUbergraph_WBP_Cinema_Ticket_Pop_Up_Failure(int32 EntryPoint);
}; // Size: 0x2C4

#endif
