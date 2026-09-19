#ifndef UE4SS_SDK_BTT_BackToWork_HPP
#define UE4SS_SDK_BTT_BackToWork_HPP

class UBTT_BackToWork_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x00B0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_BackToWork(int32 EntryPoint);
}; // Size: 0xB8

#endif
