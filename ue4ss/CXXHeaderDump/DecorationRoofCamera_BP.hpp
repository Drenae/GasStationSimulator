#ifndef UE4SS_SDK_DecorationRoofCamera_BP_HPP
#define UE4SS_SDK_DecorationRoofCamera_BP_HPP

class ADecorationRoofCamera_BP_C : public ADecorationCamera
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DecorationRoofCamera_BP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
