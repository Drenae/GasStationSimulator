#ifndef UE4SS_SDK_ObjectiveMarker_Arrow_HPP
#define UE4SS_SDK_ObjectiveMarker_Arrow_HPP

class AObjectiveMarker_Arrow_C : public AObjectiveMarker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ObjectiveMarker_Arrow(int32 EntryPoint);
}; // Size: 0x258

#endif
