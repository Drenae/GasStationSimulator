#ifndef UE4SS_SDK_BTD_CheckHome_HPP
#define UE4SS_SDK_BTD_CheckHome_HPP

class UBTD_CheckHome_C : public UBTDecorator_BlueprintBase
{
    bool Checkhome;                                                                   // 0x00A0 (size: 0x1)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA1

#endif
