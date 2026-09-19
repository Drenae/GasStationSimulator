#ifndef UE4SS_SDK_BTT_Drive_HPP
#define UE4SS_SDK_BTT_Drive_HPP

class UBTT_Drive_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    float SaveCarDistance;                                                            // 0x00B0 (size: 0x4)
    class UCurveFloat* SpeedControlCurve;                                             // 0x00B8 (size: 0x8)
    FRotator DeltaRotatorToPoint;                                                     // 0x00C0 (size: 0xC)
    float Velocity;                                                                   // 0x00CC (size: 0x4)
    FRotator FRVehicleAndPoint1;                                                      // 0x00D0 (size: 0xC)
    float Distance;                                                                   // 0x00DC (size: 0x4)
    FTransform FirstControlPoint;                                                     // 0x00E0 (size: 0x30)
    FTransform SecoundControlPoint;                                                   // 0x0110 (size: 0x30)
    FTransform VehicleCurrent;                                                        // 0x0140 (size: 0x30)
    FTransform FollowPoint;                                                           // 0x0170 (size: 0x30)
    float AcceptableRadious;                                                          // 0x01A0 (size: 0x4)
    float Angle;                                                                      // 0x01A4 (size: 0x4)
    bool IsBlocked;                                                                   // 0x01A8 (size: 0x1)
    float SightAngle;                                                                 // 0x01AC (size: 0x4)
    class AGSSWheeledVehicle* BaseVehicle;                                            // 0x01B0 (size: 0x8)
    FLinearColor Color;                                                               // 0x01B8 (size: 0x10)
    class AAICharacterBase* AICharacterBase;                                          // 0x01C8 (size: 0x8)
    float ParkingSpotIsBlockedRadius;                                                 // 0x01D0 (size: 0x4)
    float TimeFromLastTraceCheck;                                                     // 0x01D4 (size: 0x4)
    bool LastCheckState;                                                              // 0x01D8 (size: 0x1)
    float TimeFromLastTrueCheck;                                                      // 0x01DC (size: 0x4)
    float TimeFromLastOverlapCheck;                                                   // 0x01E0 (size: 0x4)
    FTransform ThirdControlPoint;                                                     // 0x01F0 (size: 0x30)
    float MinimalTraceForwardDistance;                                                // 0x0220 (size: 0x4)
    bool bUseShortTraceGrainAtSplineEnd;                                              // 0x0224 (size: 0x1)
    float TimeSinceLastUnstuckProgress;                                               // 0x0228 (size: 0x4)
    bool IsNewDrivingSystemReady;                                                     // 0x022C (size: 0x1)

    void GetMinimalTraceForwardDistance(float& MinimalTraceDistance);
    void FindOtherParkingSpotBecauseThisIsBlockedByCarWithoutDriver(class AGSSWheeledVehicle* OtherVehicle);
    void CalcDirection();
    void CalcControlPoints();
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void StopCar();
    void OnFinishedLoading(const bool GameLoaded);
    void ExecuteUbergraph_BTT_Drive(int32 EntryPoint);
}; // Size: 0x22D

#endif
