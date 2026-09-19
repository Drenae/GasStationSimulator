#ifndef UE4SS_SDK_DLC_ChunchIsl_Windsurf_HPP
#define UE4SS_SDK_DLC_ChunchIsl_Windsurf_HPP

class UDLC_ChunchIsl_Windsurf_C : public URentEquipment
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0158 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void StartService();
    void ExecuteUbergraph_DLC_ChunchIsl_Windsurf(int32 EntryPoint);
}; // Size: 0x160

#endif
