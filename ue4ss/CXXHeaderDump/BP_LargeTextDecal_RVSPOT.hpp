#ifndef UE4SS_SDK_BP_LargeTextDecal_RVSPOT_HPP
#define UE4SS_SDK_BP_LargeTextDecal_RVSPOT_HPP

class ABP_LargeTextDecal_RVSPOT_C : public ABP_LargeTextDecal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SM_Street_Light_3;                                    // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_Rv_Spot_Sign;                                      // 0x02A8 (size: 0x8)
    TSoftObjectPtr<class ARVCampSpot> CampSpot;                                       // 0x02B0 (size: 0x28)
    bool IsInitialised;                                                               // 0x02D8 (size: 0x1)
    FTimerHandle InitTimer;                                                           // 0x02E0 (size: 0x8)
    float DefaultTextSize;                                                            // 0x02E8 (size: 0x4)
    TMap<int32, float> TextSizesPerLength;                                            // 0x02F0 (size: 0x50)
    TMap<int32, float> TextLocationAdjustments;                                       // 0x0340 (size: 0x50)
    FVector DefaultSignRelativeLocation;                                              // 0x0390 (size: 0xC)
    FVector DefaultLightRelativeLocation;                                             // 0x039C (size: 0xC)
    FVector OldMeshWorldLocation;                                                     // 0x03A8 (size: 0xC)

    FName GetInteractionName();
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void UserConstructionScript();
    void DisableInteractionInfo(class APawn* Pawn);
    void ShowInteractionAlertMessage();
    void ReceiveBeginPlay();
    void OnCustomNameUpdated(FString NewCustomName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void TryInitCustomName();
    void UpdateCustomName(FString New Custom Name, bool UpdatePosition);
    void UpdateTextLocation(float Adjustment);
    void ExecuteUbergraph_BP_LargeTextDecal_RVSPOT(int32 EntryPoint);
}; // Size: 0x3B4

#endif
