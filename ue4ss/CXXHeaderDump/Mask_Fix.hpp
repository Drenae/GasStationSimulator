#ifndef UE4SS_SDK_Mask_Fix_HPP
#define UE4SS_SDK_Mask_Fix_HPP

class AMask_Fix_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class AWheel_BP_C* CurrentWheel;                                                  // 0x03C8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void ReceiveBeginPlay();
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void ExecuteUbergraph_Mask_Fix(int32 EntryPoint);
}; // Size: 0x3D0

#endif
