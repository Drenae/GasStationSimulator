#ifndef UE4SS_SDK_BTTask_HandleStuck_HPP
#define UE4SS_SDK_BTTask_HandleStuck_HPP

class UBTTask_HandleStuck_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x00B0 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> MontagesSkeletons;                          // 0x00B8 (size: 0x10)

    void GetCurrentTaskDialogueId(int32& ID);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_HandleStuck(int32 EntryPoint);
}; // Size: 0xC8

#endif
