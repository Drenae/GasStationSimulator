#ifndef UE4SS_SDK_WBP_ExitMapEnd_HPP
#define UE4SS_SDK_WBP_ExitMapEnd_HPP

class UWBP_ExitMapEnd_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    float LifeTime;                                                                   // 0x0268 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ExitMapEnd(int32 EntryPoint);
}; // Size: 0x26C

#endif
