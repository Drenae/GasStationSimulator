#ifndef UE4SS_SDK_PopcornTrash_BP_HPP
#define UE4SS_SDK_PopcornTrash_BP_HPP

class APopcornTrash_BP_C : public ATrashItem_PrologueTrash_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)

    void TryEnablePhysics();
    void ReceiveBeginPlay();
    void OnGameLoaded(const bool GameLoaded);
    void ExecuteUbergraph_PopcornTrash_BP(int32 EntryPoint);
}; // Size: 0x410

#endif
