#ifndef UE4SS_SDK_BP_WreckInfo_HPP
#define UE4SS_SDK_BP_WreckInfo_HPP

class ABP_WreckInfo_C : public ACarWreck_Tooltip
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* RightPoint;                                                // 0x0228 (size: 0x8)
    class USceneComponent* LeftPOint;                                                 // 0x0230 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0238 (size: 0x8)
    class AJunkyardCarWreck* OwnerWreck;                                              // 0x0240 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void SetupWidget(class AJunkyardCarWreck* CarWreck);
    void ExecuteUbergraph_BP_WreckInfo(int32 EntryPoint);
}; // Size: 0x248

#endif
