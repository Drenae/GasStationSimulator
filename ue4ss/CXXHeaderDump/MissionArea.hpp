#ifndef UE4SS_SDK_MissionArea_HPP
#define UE4SS_SDK_MissionArea_HPP

class AMissionArea_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UStaticMesh* StaticMeshToSet;                                               // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MissionArea(int32 EntryPoint);
}; // Size: 0x238

#endif
