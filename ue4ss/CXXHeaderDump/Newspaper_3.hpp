#ifndef UE4SS_SDK_Newspaper_3_HPP
#define UE4SS_SDK_Newspaper_3_HPP

class ANewsPaper_3_C : public ANewsPaper
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewsPaper_3(int32 EntryPoint);
}; // Size: 0x388

#endif
