#ifndef UE4SS_SDK_WBP_ThiefEvent_HPP
#define UE4SS_SDK_WBP_ThiefEvent_HPP

class UWBP_ThiefEvent_C : public UWBP_TimerParent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UTextBlock* AmmountTXT;                                                     // 0x0290 (size: 0x8)
    class UTextBlock* Day;                                                            // 0x0298 (size: 0x8)
    class UTextBlock* Hour;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_281;                                                          // 0x02A8 (size: 0x8)
    class UTextBlock* Minute;                                                         // 0x02B0 (size: 0x8)
    class UImage* ThiefEvent_BG;                                                      // 0x02B8 (size: 0x8)
    class UImage* ThiefEventStrap;                                                    // 0x02C0 (size: 0x8)

    void UpdateTime(FTimeStruct Time);
    void UpdateProgress(int32 Progress, int32 Target);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_ThiefEvent(int32 EntryPoint);
}; // Size: 0x2C8

#endif
