#ifndef UE4SS_SDK_Stophelp_HPP
#define UE4SS_SDK_Stophelp_HPP

class AStopHelp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)

    bool IsOverlapingVehicles(class AActor* CheckedActor, TArray<AActor*>& OverlappingActors);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_StopHelp(int32 EntryPoint);
}; // Size: 0x230

#endif
