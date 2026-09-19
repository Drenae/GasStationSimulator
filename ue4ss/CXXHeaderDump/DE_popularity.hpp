#ifndef UE4SS_SDK_DE_popularity_HPP
#define UE4SS_SDK_DE_popularity_HPP

class UDE_Popularity_C : public UDE_Skippable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void InitializeEventDisplay(class AGSSGameState* InitGSSGameState);
    void ExecuteUbergraph_DE_Popularity(int32 EntryPoint);
}; // Size: 0xC0

#endif
