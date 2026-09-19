#ifndef UE4SS_SDK_Stop_HPP
#define UE4SS_SDK_Stop_HPP

class AStop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    TArray<AStopHelp_C*> StopRightSide;                                               // 0x0230 (size: 0x10)
    bool isStopped;                                                                   // 0x0240 (size: 0x1)
    TArray<AStopHelp_C*> StopLeftSide;                                                // 0x0248 (size: 0x10)
    TArray<AStopHelp_C*> StopForwardSide;                                             // 0x0258 (size: 0x10)
    bool CheckBySplinePoints;                                                         // 0x0268 (size: 0x1)
    float SplineDistanceToCheck;                                                      // 0x026C (size: 0x4)

    void CheckCollisionStop(class AGSSWheeledVehicle* Vehicle, bool& isStopped);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Stop(int32 EntryPoint);
}; // Size: 0x270

#endif
