#ifndef UE4SS_SDK_DeliveryMarker_BP_HPP
#define UE4SS_SDK_DeliveryMarker_BP_HPP

class ADeliveryMarker_BP_C : public AObjectiveMarker
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class UUserWidget* MarkerRef;                                                     // 0x0258 (size: 0x8)
    TSubclassOf<class UUserWidget> MarkerClass;                                       // 0x0260 (size: 0x8)

    void Find Delivery Marker Class(TSoftClassPtr<AActor> VehicleClass, TSubclassOf<class UUserWidget>& WidgetClass);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void UpdateMarker(bool Show, float Distance);
    void UpdateOutline(bool Show, float Distance);
    void ExecuteUbergraph_DeliveryMarker_BP(int32 EntryPoint);
}; // Size: 0x268

#endif
