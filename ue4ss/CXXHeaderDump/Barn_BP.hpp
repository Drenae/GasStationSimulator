#ifndef UE4SS_SDK_Barn_BP_HPP
#define UE4SS_SDK_Barn_BP_HPP

class ABarn_BP_C : public ABarn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void PostLoadMapsBlueprintEvent();
    void ExecuteUbergraph_Barn_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
