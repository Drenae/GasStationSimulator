#ifndef UE4SS_SDK_BP_PartInfo_HPP
#define UE4SS_SDK_BP_PartInfo_HPP

class ABP_PartInfo_C : public ACarPart_Tooltip
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* RightPoint;                                                // 0x0230 (size: 0x8)
    class USceneComponent* LeftPOint;                                                 // 0x0238 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0240 (size: 0x8)
    class UJunkyardCarPartCustomizable* Owner Part;                                   // 0x0248 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void SetupWidget(class UJunkyardCarPartCustomizable* OwnerPart);
    void ExecuteUbergraph_BP_PartInfo(int32 EntryPoint);
}; // Size: 0x250

#endif
