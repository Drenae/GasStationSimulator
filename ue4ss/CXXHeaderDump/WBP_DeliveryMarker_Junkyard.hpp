#ifndef UE4SS_SDK_WBP_DeliveryMarker_Junkyard_HPP
#define UE4SS_SDK_WBP_DeliveryMarker_Junkyard_HPP

class UWBP_DeliveryMarker_Junkyard_C : public UDeliveryMarkerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_153;                                                  // 0x0290 (size: 0x8)
    class AActor* Instiginator;                                                       // 0x0298 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DeliveryMarker_Junkyard(int32 EntryPoint);
}; // Size: 0x2A0

#endif
