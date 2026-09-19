#ifndef UE4SS_SDK_FuelDeliveryBoat_BP_HPP
#define UE4SS_SDK_FuelDeliveryBoat_BP_HPP

class AFuelDeliveryBoat_BP_C : public AWaterVehicleBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UArrowComponent* FuelEnterArrow;                                            // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* SM_FuelPipe_Oiltruck;                                 // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* Hat;                                                  // 0x0400 (size: 0x8)
    class UAudioComponent* DialogueAudio;                                             // 0x0408 (size: 0x8)
    class UWidgetComponent* Dialog3D;                                                 // 0x0410 (size: 0x8)
    class UStaticMeshComponent* OceanDisplacer;                                       // 0x0418 (size: 0x8)
    class UStaticMeshComponent* OceanMask;                                            // 0x0420 (size: 0x8)
    class UArrowComponent* Bouyancy_point_debug_02;                                   // 0x0428 (size: 0x8)
    class UArrowComponent* Bouyancy_point_debug_01;                                   // 0x0430 (size: 0x8)
    class UArrowComponent* Bouyancy_point_debug_04;                                   // 0x0438 (size: 0x8)
    class UArrowComponent* Bouyancy_point_debug_03;                                   // 0x0440 (size: 0x8)
    class UChildActorComponent* Pistolet;                                             // 0x0448 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0450 (size: 0x8)

    class AFuelPistolMagazineBase* GetFuelPistolMagazine();
    void UserConstructionScript();
    void ReceiveDestroyed();
    void OnTimePassed();
    void ShowNotification(bool bShowNotification);
    void BndEvt__FuelDeliveryBoat_BP_WaterMovementComponent_BP_K2Node_ComponentBoundEvent_1_BeginGoingHomeComponent__DelegateSignature();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FuelDeliveryBoat_BP(int32 EntryPoint);
}; // Size: 0x458

#endif
