#ifndef UE4SS_SDK_OilTruck_BP_HPP
#define UE4SS_SDK_OilTruck_BP_HPP

class AOilTruck_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class USpotLightComponent* SpotLight1_0;                                          // 0x05E0 (size: 0x8)
    class USpotLightComponent* SpotLight_0;                                           // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* SM_FuelPipe_Oiltruck;                                 // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* FuelPlace;                                            // 0x05F8 (size: 0x8)
    class UChildActorComponent* Pistolet;                                             // 0x0600 (size: 0x8)
    class UStaticMeshComponent* SM_Engine_Belt;                                       // 0x0608 (size: 0x8)
    class UStaticMeshComponent* AmericanCar_Kierownica;                               // 0x0610 (size: 0x8)
    class UStaticMeshComponent* cccc;                                                 // 0x0618 (size: 0x8)
    class UAudioComponent* FuelPourSound;                                             // 0x0620 (size: 0x8)

    bool IsFuelDeliveryTruck();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void SpawnPouringSound(FVector Location, class USoundBase* Sound);
    void FadePouringSound();
    void ExecuteUbergraph_OilTruck_BP(int32 EntryPoint);
}; // Size: 0x628

#endif
