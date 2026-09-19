#ifndef UE4SS_SDK_WashableCarMesh_BP_HPP
#define UE4SS_SDK_WashableCarMesh_BP_HPP

class AWashableCarMesh_BP_C : public AWashableCarMesh
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_WashableCarMesh_BP(int32 EntryPoint);
}; // Size: 0x328

#endif
