#ifndef UE4SS_SDK_BTT_DriverToNextTarget_HPP
#define UE4SS_SDK_BTT_DriverToNextTarget_HPP

class UBTT_DriverToNextTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FTransform CarRotation;                                                           // 0x00B0 (size: 0x30)
    bool StartRotation;                                                               // 0x00E0 (size: 0x1)
    class AAICharacterBase* AICharacterBase;                                          // 0x00E8 (size: 0x8)
    class APathPoint* PathPoint;                                                      // 0x00F0 (size: 0x8)
    float NewVar_0;                                                                   // 0x00F8 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_DriverToNextTarget(int32 EntryPoint);
}; // Size: 0xFC

#endif
