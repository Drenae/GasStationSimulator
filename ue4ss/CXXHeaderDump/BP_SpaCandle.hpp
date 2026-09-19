#ifndef UE4SS_SDK_BP_SpaCandle_HPP
#define UE4SS_SDK_BP_SpaCandle_HPP

class ABP_SpaCandle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNiagaraComponent* FireEffect;                                              // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FBP_SpaCandle_COnCandleLit OnCandleLit;                                           // 0x0240 (size: 0x10)
    void OnCandleLit(class ABP_SpaCandle_C* SpaCandle);
    class USpaSettings* SpaSettings;                                                  // 0x0250 (size: 0x8)
    bool bCandleLit;                                                                  // 0x0258 (size: 0x1)

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
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveBeginPlay();
    void OnSpaFinished(FGameplayTag ServiceTag, class ARvGuestServiceSpot* ServiceBuilding, bool bSuccess);
    void ExecuteUbergraph_BP_SpaCandle(int32 EntryPoint);
    void OnCandleLit__DelegateSignature(class ABP_SpaCandle_C* SpaCandle);
}; // Size: 0x259

#endif
