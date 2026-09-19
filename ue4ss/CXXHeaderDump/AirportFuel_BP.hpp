#ifndef UE4SS_SDK_AirportFuel_BP_HPP
#define UE4SS_SDK_AirportFuel_BP_HPP

class AAirportFuel_BP_C : public AFuelStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    class UCableComponent* FuelCable;                                                 // 0x05F8 (size: 0x8)
    class UAudioComponent* FuelPour;                                                  // 0x0600 (size: 0x8)
    class UAudioComponent* FuelInsert;                                                // 0x0608 (size: 0x8)
    class UArrowComponent* JerryCanTransform;                                         // 0x0610 (size: 0x8)
    class UAudioComponent* FuelPickUp;                                                // 0x0618 (size: 0x8)
    class UAudioComponent* FuelPutDown;                                               // 0x0620 (size: 0x8)
    float Timeline_0_NewTrack_0_F405E514444632DFDDACB5BC626746A3;                     // 0x0628 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F405E514444632DFDDACB5BC626746A3; // 0x062C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0630 (size: 0x8)
    bool Electrocity;                                                                 // 0x0638 (size: 0x1)
    FVector StartLocation;                                                            // 0x063C (size: 0xC)
    class AJerryCan* JerryCan;                                                        // 0x0648 (size: 0x8)
    bool PistolInUse;                                                                 // 0x0650 (size: 0x1)
    FTimerHandle StopCableTickTimerHandle;                                            // 0x0658 (size: 0x8)
    class UUserWidget* Tutorial;                                                      // 0x0660 (size: 0x8)
    TSoftClassPtr<AJerryCan> JerryCanClassSoft;                                       // 0x0668 (size: 0x28)

    void PistolUserChanged(bool Condition);
    void DisableCableTick();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool GetElectrocity();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_59C0919443AF20638655C48D822EF076(UClass* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EnableElectrocity(const bool On);
    void DebugCustomer();
    void DebugFinish();
    void PutJerryCan();
    void OnPistolUserchanged(bool PistolInUse);
    void OnExtraMoney(float ExtraMoney);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_AirportFuel_BP(int32 EntryPoint);
}; // Size: 0x690

#endif
