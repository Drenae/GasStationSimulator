#ifndef UE4SS_SDK_FuelStation_Bp_HPP
#define UE4SS_SDK_FuelStation_Bp_HPP

class AFuelStation_Bp_C : public AFuelStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    class UArrowComponent* ArrowComponent2;                                           // 0x05F8 (size: 0x8)
    class UCableComponent* FuelCable;                                                 // 0x0600 (size: 0x8)
    class UAudioComponent* FuelPour;                                                  // 0x0608 (size: 0x8)
    class UAudioComponent* FuelInsert;                                                // 0x0610 (size: 0x8)
    class UArrowComponent* JerryCanTransform;                                         // 0x0618 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0620 (size: 0x8)
    class UAudioComponent* FuelPickUp;                                                // 0x0628 (size: 0x8)
    class UAudioComponent* FuelPutDown;                                               // 0x0630 (size: 0x8)
    float Timeline_0_NewTrack_0_B2AE3F414E9D8904A18B55B2612E2D47;                     // 0x0638 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B2AE3F414E9D8904A18B55B2612E2D47; // 0x063C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0640 (size: 0x8)
    bool Electrocity;                                                                 // 0x0648 (size: 0x1)
    FVector StartLocation;                                                            // 0x064C (size: 0xC)
    class AJerryCan* JerryCan;                                                        // 0x0658 (size: 0x8)
    bool PistolInUse;                                                                 // 0x0660 (size: 0x1)
    FTimerHandle StopCableTickTimerHandle;                                            // 0x0668 (size: 0x8)

    bool IsNotInStationRange(class AFuelPistolBase* Pistol);
    FName GetInteractionName();
    void PistolUserChanged(bool Condition);
    void DisableCableTick();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool GetElectrocity();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_10A9EF94468B96CD083977A2C64A6DD6(UClass* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EnableElectrocity(const bool On);
    void DebugCustomer();
    void DebugFinish();
    void PutJerryCan();
    void OnPistolUserchanged(bool PistolInUse);
    void OnExtraMoney(float ExtraMoney);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ShowInteractionAlertMessage();
    void ExecuteUbergraph_FuelStation_Bp(int32 EntryPoint);
}; // Size: 0x670

#endif
