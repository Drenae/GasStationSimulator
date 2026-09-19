#ifndef UE4SS_SDK_BTS_CheckDriverState_HPP
#define UE4SS_SDK_BTS_CheckDriverState_HPP

class UBTS_CheckDriverState_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector DriverState;                                               // 0x00A0 (size: 0x28)
    class AAICharacterBase* AICharacterBase;                                          // 0x00C8 (size: 0x8)
    bool bIsCharAttachedToVehicle;                                                    // 0x00D0 (size: 0x1)

    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_CheckDriverState(int32 EntryPoint);
}; // Size: 0xD1

#endif
