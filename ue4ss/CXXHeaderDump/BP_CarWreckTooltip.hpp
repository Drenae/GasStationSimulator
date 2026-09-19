#ifndef UE4SS_SDK_BP_CarWreckTooltip_HPP
#define UE4SS_SDK_BP_CarWreckTooltip_HPP

class ABP_CarWreckTooltip_C : public ACarWreckTooltip
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    FVector PositionOffset;                                                           // 0x0230 (size: 0xC)

    void SetupWidget();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CarWreckTooltip(int32 EntryPoint);
}; // Size: 0x23C

#endif
