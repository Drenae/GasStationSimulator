#ifndef UE4SS_SDK_AirportFuelWheel_BP_HPP
#define UE4SS_SDK_AirportFuelWheel_BP_HPP

class AAirportFuelWheel_BP_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UAudioComponent* FuelWheelTurn_Cue;                                         // 0x0408 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_55DB069B4AC78E4C379A2DA9D3303DCD; // 0x0410 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0418 (size: 0x8)
    class ABP_AirportFuelMagazine_C* FuelMagazine;                                    // 0x0420 (size: 0x8)
    TSoftObjectPtr<class UStaticMesh> StaticMesh;                                     // 0x0428 (size: 0x28)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_276ECCE648F5CF156636FBA4DA2FCD81(class UObject* Loaded);
    void StartAnimation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AirportFuelWheel_BP(int32 EntryPoint);
}; // Size: 0x450

#endif
