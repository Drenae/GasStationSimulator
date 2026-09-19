#ifndef UE4SS_SDK_00_Mirror_Base_HPP
#define UE4SS_SDK_00_Mirror_Base_HPP

class A00_Mirror_Base_C : public AMirror
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Mirror;                                               // 0x03D8 (size: 0x8)
    float StartDelay;                                                                 // 0x03E0 (size: 0x4)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    void InteractMode(const bool Enabled);
    void StartVehicleMinigame(class APawn* Pawn, bool Success, FString FailReason);
    void ExecuteUbergraph_00_Mirror_Base(int32 EntryPoint);
}; // Size: 0x3E4

#endif
