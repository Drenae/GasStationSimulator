#ifndef UE4SS_SDK_Time_Widget_HPP
#define UE4SS_SDK_Time_Widget_HPP

class UTime_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Day_Txt;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* HOUERS;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_220;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_286;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* Minutes;                                                        // 0x0290 (size: 0x8)
    class UTextBlock* TimeFormat;                                                     // 0x0298 (size: 0x8)
    bool Using24HoursTimeFormat;                                                      // 0x02A0 (size: 0x1)

    void UpdateHoursFormat(int32 Hours24HFormat);
    void UpdateHoursAndMinutes(int32 Minutes, int32 Hours);
    void UpdateDays(int32 Days);
    void TimeUpdated(const FTimeStruct UpdatedTime);
    void OnInitialized();
    void UpdateTimeConvention(bool bAppliedSetting);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_Time_Widget(int32 EntryPoint);
}; // Size: 0x2A1

#endif
