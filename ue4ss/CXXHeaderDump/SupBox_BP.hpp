#ifndef UE4SS_SDK_SupBox_BP_HPP
#define UE4SS_SDK_SupBox_BP_HPP

class ASupBox_BP_C : public ASupBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UInventoryComponent* TruckInventory;                                        // 0x0348 (size: 0x8)
    bool IsAirplane;                                                                  // 0x0350 (size: 0x1)

    FName GetInteractionName();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void UpdateItemBox();
    void OnInventoryUpdated_Event_0(const class UInventoryComponent* Inventory);
    void ChangeInventory(class UInventoryComponent* Inventory);
    void ExecuteUbergraph_SupBox_BP(int32 EntryPoint);
}; // Size: 0x351

#endif
