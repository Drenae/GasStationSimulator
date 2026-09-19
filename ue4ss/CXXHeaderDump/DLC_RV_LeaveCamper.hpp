#ifndef UE4SS_SDK_DLC_RV_LeaveCamper_HPP
#define UE4SS_SDK_DLC_RV_LeaveCamper_HPP

class UDLC_RV_LeaveCamper_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class AAICharacterBase* AIChar;                                                   // 0x0158 (size: 0x8)

    void Find Camp Spot(class ARVCampSpot*& Rv Camp Spot);
    void Get NPC Montage Manager(class UNPC_MontageManager_BP_C*& NPC_MontageManager_BP);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_DLC_RV_LeaveCamper(int32 EntryPoint);
}; // Size: 0x160

#endif
