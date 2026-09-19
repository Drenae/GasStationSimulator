#ifndef UE4SS_SDK_BP_PlatformLight_HPP
#define UE4SS_SDK_BP_PlatformLight_HPP

class ABP_PlatformLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_FloodLightB_Light;                                 // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    TArray<FColor> LightColor;                                                        // 0x0248 (size: 0x10)
    int32 LightIndex;                                                                 // 0x0258 (size: 0x4)
    bool IsHightlighted;                                                              // 0x025C (size: 0x1)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    FName GetInteractionName();
    void ShowInteractionAlertMessage();
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_BP_PlatformLight(int32 EntryPoint);
}; // Size: 0x25D

#endif
