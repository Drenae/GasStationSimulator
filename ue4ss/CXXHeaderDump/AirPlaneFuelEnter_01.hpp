#ifndef UE4SS_SDK_AirPlaneFuelEnter_01_HPP
#define UE4SS_SDK_AirPlaneFuelEnter_01_HPP

class AAirPlaneFuelEnter_01_C : public AFuelEnter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03F8 (size: 0x8)
    float MinTargetFuel;                                                              // 0x0400 (size: 0x4)
    float MaxTargetFuel;                                                              // 0x0404 (size: 0x4)
    TSoftClassPtr<UAirportFuelMinigameWidget> AirportFuelMinigameWidgetClass;         // 0x0408 (size: 0x28)
    bool bFuelingMinigameLoading;                                                     // 0x0430 (size: 0x1)

    FName GetInteractionName();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnLoaded_2922C7124BB74C0D4E6E859A465A0C3A(UClass* Loaded);
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ReceiveBeginPlay();
    void OpenFuelEnter(bool Condition);
    void ShowFuelEnter(bool On);
    void ExecuteUbergraph_AirPlaneFuelEnter_01(int32 EntryPoint);
}; // Size: 0x431

#endif
