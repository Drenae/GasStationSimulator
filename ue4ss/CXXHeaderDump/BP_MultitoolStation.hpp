#ifndef UE4SS_SDK_BP_MultitoolStation_HPP
#define UE4SS_SDK_BP_MultitoolStation_HPP

class ABP_MultitoolStation_C : public AJunkyardMultitoolStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class USpotLightComponent* SpotLight4;                                            // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light1;                                // 0x05A0 (size: 0x8)
    class UMaterialInstanceDynamic* FloodLightMaterial;                               // 0x05A8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ToggleMultitoolLights(bool bOn);
    FName GetInteractionName();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MultitoolStation(int32 EntryPoint);
}; // Size: 0x5B0

#endif
