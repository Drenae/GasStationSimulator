#ifndef UE4SS_SDK_DiggerResetButton_BP_HPP
#define UE4SS_SDK_DiggerResetButton_BP_HPP

class ADiggerResetButton_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* DiggerResetButton;                                    // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ButtonBase;                                           // 0x0230 (size: 0x8)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void ShowInteractionAlertMessage();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_DiggerResetButton_BP(int32 EntryPoint);
}; // Size: 0x238

#endif
