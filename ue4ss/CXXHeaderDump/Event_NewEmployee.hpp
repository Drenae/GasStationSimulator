#ifndef UE4SS_SDK_Event_NewEmployee_HPP
#define UE4SS_SDK_Event_NewEmployee_HPP

class UEvent_NewEmployee_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<TSoftClassPtr<AEmployee_Base_C>> CurrentEmployee;                          // 0x00B0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_1;                      // 0x00C0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_2;                      // 0x00D0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_3;                      // 0x00E0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_4;                      // 0x00F0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_5;                      // 0x0100 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_6;                      // 0x0110 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_7;                      // 0x0120 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_8;                      // 0x0130 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> Employees_Stage_0_9;                      // 0x0140 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_1;                  // 0x0150 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_2;                  // 0x0160 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_3;                  // 0x0170 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_4;                  // 0x0180 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_5;                  // 0x0190 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_6;                  // 0x01A0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_7;                  // 0x01B0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_8;                  // 0x01C0 (size: 0x10)
    TArray<TSoftClassPtr<AEmployee_Base_C>> NBM_Employees_Stage_0_9;                  // 0x01D0 (size: 0x10)

    void RandomEmployees();
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void CustomEvent_0(const int32 UpdatedTime);
    void OnActorLevelChange_Event_0(const int32 ActorLevel);
    void ExecuteUbergraph_Event_NewEmployee(int32 EntryPoint);
}; // Size: 0x1E0

#endif
