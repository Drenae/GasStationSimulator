#ifndef UE4SS_SDK_WBP_NextEmployeeTimer_HPP
#define UE4SS_SDK_WBP_NextEmployeeTimer_HPP

class UWBP_NextEmployeeTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Day;                                                            // 0x0268 (size: 0x8)
    class UTextBlock* Hour;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* Minute;                                                         // 0x0278 (size: 0x8)
    class AGSSPlayerState_BP_C* PlayerState;                                          // 0x0280 (size: 0x8)
    FTimeStruct EndTime;                                                              // 0x0288 (size: 0x10)
    bool Finish;                                                                      // 0x0298 (size: 0x1)
    FTimeStruct NewVar_0;                                                             // 0x029C (size: 0x10)

    void Construct();
    void OnGameTimeUpdated_Event_0(const FTimeStruct UpdatedTime);
    void ExecuteUbergraph_WBP_NextEmployeeTimer(int32 EntryPoint);
}; // Size: 0x2AC

#endif
