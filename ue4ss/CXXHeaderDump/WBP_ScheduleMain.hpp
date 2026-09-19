#ifndef UE4SS_SDK_WBP_ScheduleMain_HPP
#define UE4SS_SDK_WBP_ScheduleMain_HPP

class UWBP_ScheduleMain_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UScrollBox* EmployeeScroll;                                                 // 0x0268 (size: 0x8)
    class UImage* Image_246;                                                          // 0x0270 (size: 0x8)
    TArray<AAICharacterBase*> OwnedEmployeeArrayNew;                                  // 0x0278 (size: 0x10)
    TArray<UWBP_ScheduleEmployee_C*> AllWidgetsInScroll;                              // 0x0288 (size: 0x10)
    class UWBP_ScheduleEmployee_C* ScheduleWidget;                                    // 0x0298 (size: 0x8)

    void Construct();
    void Refresh();
    void ExecuteUbergraph_WBP_ScheduleMain(int32 EntryPoint);
}; // Size: 0x2A0

#endif
