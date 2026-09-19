#ifndef UE4SS_SDK_TrashItem_PrologueTrash_HPP
#define UE4SS_SDK_TrashItem_PrologueTrash_HPP

class ATrashItem_PrologueTrash_C : public A00_TrashItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_TrashItem_PrologueTrash(int32 EntryPoint);
}; // Size: 0x408

#endif
