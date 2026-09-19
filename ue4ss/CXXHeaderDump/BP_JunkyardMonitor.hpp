#ifndef UE4SS_SDK_BP_JunkyardMonitor_HPP
#define UE4SS_SDK_BP_JunkyardMonitor_HPP

class ABP_JunkyardMonitor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SM_Projector_Roll1;                                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_Projector_Roll;                                    // 0x0230 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0238 (size: 0x8)
    class UChildActorComponent* BP_LGodRay_Projector;                                 // 0x0240 (size: 0x8)
    class UStaticMeshComponent* SM_BeamConnector;                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* SM_Projector;                                         // 0x0250 (size: 0x8)
    class UWidgetComponent* Monitor3DWidget;                                          // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    class ABP_JunkyardPlatform_C* PlatformRef;                                        // 0x0270 (size: 0x8)
    class USpecialContract* SelectedContract;                                         // 0x0278 (size: 0x8)

    FName GetInteractionName();
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void SetSelectedContract(class USpecialContract* Contract);
    void ShowInteractionAlertMessage();
    void DisableInteractionInfo(class APawn* Pawn);
    void OnWreckPlaced(class AActor* Wreck);
    void OnWreckRemoved(class AActor* Wreck);
    void ReceiveDestroyed();
    void SetupMonitor(class ABP_JunkyardPlatform_C* Platform);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_JunkyardMonitor(int32 EntryPoint);
}; // Size: 0x280

#endif
