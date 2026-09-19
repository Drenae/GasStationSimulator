#ifndef UE4SS_SDK_DLC_ChunchIsl_GoToWindsurfing_HPP
#define UE4SS_SDK_DLC_ChunchIsl_GoToWindsurfing_HPP

class UDLC_ChunchIsl_GoToWindsurfing_C : public UGoToEquipmentRentalBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_DLC_ChunchIsl_GoToWindsurfing(int32 EntryPoint);
}; // Size: 0x158

#endif
