#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "Templates/SubclassOf.h"
#include "VehiclePart.generated.h"

class AActor;
class AGSSWheeledVehicle;
class APawn;
class AVehiclePart;

UCLASS(Blueprintable)
class GSS2_API AVehiclePart : public AProduct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehiclePart> RequirmentVehiclePartToFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsFixing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplacementFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAcumulatorVehiclePart;
    
    AVehiclePart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVehiclePart(bool Broken, bool WasFixedSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    bool TryBroke(float ChanceToBroke, int32 RequirmentGarageLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartVehicleMinigame(APawn* Pawn, bool Success, const FString& FailReason);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerHasCompatibileItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedToVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractMode(const bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerWaterVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWheeledVehicle* GetOwnerVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerFlyingVehicle();
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToVehicle(AGSSWheeledVehicle* NewGSSWheeledVehicle);
    
};

