#ifndef UE4SS_SDK_Newspaper_2_HPP
#define UE4SS_SDK_Newspaper_2_HPP

class ANewsPaper_2_C : public ANewsPaper
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewsPaper_2(int32 EntryPoint);
}; // Size: 0x388

#endif
