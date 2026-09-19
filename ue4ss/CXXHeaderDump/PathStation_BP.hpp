#ifndef UE4SS_SDK_PathStation_BP_HPP
#define UE4SS_SDK_PathStation_BP_HPP

class APathStation_BP_C : public APathStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PathStation_BP(int32 EntryPoint);
}; // Size: 0x250

#endif
