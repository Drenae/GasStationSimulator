#ifndef UE4SS_SDK_IceCreamTruck_BP_HPP
#define UE4SS_SDK_IceCreamTruck_BP_HPP

class AIceCreamTruck_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x05E0 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x05E8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x05F0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x05F8 (size: 0x8)
    class USpotLightComponent* SpotLight1_0;                                          // 0x0600 (size: 0x8)
    class UStaticMeshComponent* vintage_car_Kierownica;                               // 0x0608 (size: 0x8)
    class UChildActorComponent* SupBox;                                               // 0x0610 (size: 0x8)
    class UChildActorComponent* TruckDoor_R_BP;                                       // 0x0618 (size: 0x8)
    class UChildActorComponent* TruckDoor_L_BP;                                       // 0x0620 (size: 0x8)
    class UStaticMeshComponent* SM_Engine_Belt;                                       // 0x0628 (size: 0x8)
    class UStaticMeshComponent* AmericanCar_Kierownica;                               // 0x0630 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x0638 (size: 0x8)

    void SetTruckDoorsOpen(bool bOpen);
    bool IsIceCreamDeliveryTruck();
    void Old Load Inventory Truck(class UInventoryComponent* Target);
    void ReceiveBeginPlay();
    void ShowProduct();
    void OnLoadGameProgressUpdated_Event_0(const float CurrentProgress, const float MaxProgress, const FName LoadedMap, const bool LoadGameCompleted);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void LoadInventoryTruck(class UInventoryComponent* Target);
    void VehicleInteractMode(bool bEnable);
    void ExecuteUbergraph_IceCreamTruck_BP(int32 EntryPoint);
}; // Size: 0x640

#endif
