#ifndef UE4SS_SDK_00_DirtyActor_HPP
#define UE4SS_SDK_00_DirtyActor_HPP

class A00_DirtyActor_C : public ADirtyDecal
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)

    void ReceiveDestroyed();
    void ExecuteUbergraph_00_DirtyActor(int32 EntryPoint);
}; // Size: 0x270

#endif
