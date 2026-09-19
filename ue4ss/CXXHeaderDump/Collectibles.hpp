#ifndef UE4SS_SDK_Collectibles_HPP
#define UE4SS_SDK_Collectibles_HPP

class ACollectibles_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Collectibles(int32 EntryPoint);
}; // Size: 0x230

#endif
