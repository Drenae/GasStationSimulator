#ifndef UE4SS_SDK_CarPartsTruck_BP_HPP
#define UE4SS_SDK_CarPartsTruck_BP_HPP

class ACarPartsTruck_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x05E8 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x05F0 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x05F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0600 (size: 0x8)
    class UChildActorComponent* SupBox;                                               // 0x0608 (size: 0x8)
    class UChildActorComponent* TruckDoor_R_BP;                                       // 0x0610 (size: 0x8)
    class UChildActorComponent* TruckDoor_L_BP;                                       // 0x0618 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x0620 (size: 0x8)

    void SetTruckDoorsOpen(bool bOpen);
    bool IsPartsDeliveryTruck();
    void Old Load Inventory Truck(class UInventoryComponent* Target);
    void OnLoaded_14E937B343C4AE1D65A9CAA7960CC528(UClass* Loaded);
    void ShowProduct();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void LoadInventoryTruck(class UInventoryComponent* Target);
    void VehicleInteractMode(bool bEnable);
    void ExecuteUbergraph_CarPartsTruck_BP(int32 EntryPoint);
}; // Size: 0x628

#endif
