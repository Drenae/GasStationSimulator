#ifndef UE4SS_SDK_TrashItem_TrashBag_HPP
#define UE4SS_SDK_TrashItem_TrashBag_HPP

class ATrashItem_TrashBag_C : public A00_TrashItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TrashItem_TrashBag(int32 EntryPoint);
}; // Size: 0x408

#endif
