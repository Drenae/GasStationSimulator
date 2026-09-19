#ifndef UE4SS_SDK_Newspaper_5_HPP
#define UE4SS_SDK_Newspaper_5_HPP

class ANewsPaper_5_C : public ANewsPaper
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewsPaper_5(int32 EntryPoint);
}; // Size: 0x388

#endif
