#ifndef UE4SS_SDK_00_Mask_HPP
#define UE4SS_SDK_00_Mask_HPP

class A00_Mask_C : public AVehiclePart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UAudioComponent* Garage;                                                    // 0x03C8 (size: 0x8)
    class UArrowComponent* Camera;                                                    // 0x03D0 (size: 0x8)
    float StartDelay;                                                                 // 0x03D8 (size: 0x4)
    TArray<AMask_Decal_C*> DecalDirty;                                                // 0x03E0 (size: 0x10)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void InteractMode(const bool Enabled);
    void ExecuteUbergraph_00_Mask(int32 EntryPoint);
}; // Size: 0x3F0

#endif
