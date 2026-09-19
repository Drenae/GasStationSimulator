#ifndef UE4SS_SDK_BTS_SearchTransport_HPP
#define UE4SS_SDK_BTS_SearchTransport_HPP

class UBTS_SearchTransport_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector TansportMode;                                              // 0x00A0 (size: 0x28)
    FBlackboardKeySelector HumanState;                                                // 0x00C8 (size: 0x28)
    uint8 EHumanState;                                                                // 0x00F0 (size: 0x1)
    class AAICharacterBase* AICharacterBase;                                          // 0x00F8 (size: 0x8)

    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_SearchTransport(int32 EntryPoint);
}; // Size: 0x100

#endif
