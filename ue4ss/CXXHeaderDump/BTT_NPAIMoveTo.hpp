#ifndef UE4SS_SDK_BTT_NPAIMoveTo_HPP
#define UE4SS_SDK_BTT_NPAIMoveTo_HPP

class UBTT_NPAIMoveTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ANPAICharacterBase* NPAICharacter;                                          // 0x00B0 (size: 0x8)
    FTimerHandle DistanceMeasurementTimer;                                            // 0x00B8 (size: 0x8)
    TArray<FVector> PreviousPositions;                                                // 0x00C0 (size: 0x10)
    TArray<FVector> TargetLocations;                                                  // 0x00D0 (size: 0x10)
    int32 CurrentPointIndex;                                                          // 0x00E0 (size: 0x4)
    TMap<int32, bool> PointsReachedWithUnstuck;                                       // 0x00E8 (size: 0x50)
    bool ReachedWaypointsProvided;                                                    // 0x0138 (size: 0x1)

    void OnFail_8B3809624DBF526060E1499C9213DD98(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_8B3809624DBF526060E1499C9213DD98(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void UpdateDistanceTravelled();
    void MoveToPoint(int32 PointIndex);
    void ExecuteUbergraph_BTT_NPAIMoveTo(int32 EntryPoint);
}; // Size: 0x139

#endif
