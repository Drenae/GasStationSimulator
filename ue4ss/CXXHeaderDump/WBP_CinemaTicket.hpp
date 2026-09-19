#ifndef UE4SS_SDK_WBP_CinemaTicket_HPP
#define UE4SS_SDK_WBP_CinemaTicket_HPP

class UWBP_CinemaTicket_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_117;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_MovieImage;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_DigitId;                                              // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_MovieNameDraculaUntold;                               // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_Time;                                                 // 0x0298 (size: 0x8)
    FTicketData Ticket Data;                                                          // 0x02A0 (size: 0x90)

    FText ConvertTo12HourFormat(const FText& InText);
    void OnLoaded_B258DE0143E390B2560DAD9050633FEA(class UObject* Loaded);
    void Construct();
    void SetupData(FTicketData TicketData);
    void ExecuteUbergraph_WBP_CinemaTicket(int32 EntryPoint);
}; // Size: 0x330

#endif
