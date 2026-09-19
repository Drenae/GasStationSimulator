#ifndef UE4SS_SDK_FuelEnter_00_HPP
#define UE4SS_SDK_FuelEnter_00_HPP

class AFuelEnter_00_C : public AFuelEnter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ReceiveBeginPlay();
    void OpenFuelEnter(bool Condition);
    void ShowFuelEnter(bool On);
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_FuelEnter_00(int32 EntryPoint);
}; // Size: 0x3F8

#endif
