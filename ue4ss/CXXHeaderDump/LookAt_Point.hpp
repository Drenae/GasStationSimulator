#ifndef UE4SS_SDK_LookAt_Point_HPP
#define UE4SS_SDK_LookAt_Point_HPP

class ALookAt_Point_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0228 (size: 0x8)
    class UNPSmartObjectComponent* NPSmartObject;                                     // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LookAt_Point(int32 EntryPoint);
}; // Size: 0x238

#endif
