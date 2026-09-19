#ifndef UE4SS_SDK_Employee_Garage_HPP
#define UE4SS_SDK_Employee_Garage_HPP

class UEmployee_Garage_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class AActor* NewTargetActor;                                                     // 0x0168 (size: 0x8)
    class AInteractableBuilding* InteractableBuilding;                                // 0x0170 (size: 0x8)
    float Delay;                                                                      // 0x0178 (size: 0x4)
    class AAICharacterBase* Customer;                                                 // 0x0180 (size: 0x8)
    float RandomTimeKamil;                                                            // 0x0188 (size: 0x4)
    class ACarLift* CarLift;                                                          // 0x0190 (size: 0x8)
    bool StartRepair;                                                                 // 0x0198 (size: 0x1)
    FRotator TargetRotation;                                                          // 0x019C (size: 0xC)
    FVector TargetLocation;                                                           // 0x01A8 (size: 0xC)

    void OnNotifyEnd_77482D71445163EAFAD245942CF4B579(FName NotifyName);
    void OnNotifyBegin_77482D71445163EAFAD245942CF4B579(FName NotifyName);
    void OnInterrupted_77482D71445163EAFAD245942CF4B579(FName NotifyName);
    void OnBlendOut_77482D71445163EAFAD245942CF4B579(FName NotifyName);
    void OnCompleted_77482D71445163EAFAD245942CF4B579(FName NotifyName);
    void OnFail_CA0B17244BF87DC56EBD7EBA7D1B25EC(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_CA0B17244BF87DC56EBD7EBA7D1B25EC(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_D25376454F435AD8C15655839946AB23(FName NotifyName);
    void OnNotifyBegin_D25376454F435AD8C15655839946AB23(FName NotifyName);
    void OnInterrupted_D25376454F435AD8C15655839946AB23(FName NotifyName);
    void OnBlendOut_D25376454F435AD8C15655839946AB23(FName NotifyName);
    void OnCompleted_D25376454F435AD8C15655839946AB23(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void Reset();
    void ResetMeshRotation();
    void ExecuteUbergraph_Employee_Garage(int32 EntryPoint);
}; // Size: 0x1B4

#endif
