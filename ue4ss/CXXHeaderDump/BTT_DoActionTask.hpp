#ifndef UE4SS_SDK_BTT_DoActionTask_HPP
#define UE4SS_SDK_BTT_DoActionTask_HPP

class UBTT_DoActionTask_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x00B0 (size: 0x8)
    FBlackboardKeySelector AIState;                                                   // 0x00B8 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_DoActionTask(int32 EntryPoint);
}; // Size: 0xE0

#endif
