#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGuestServiceDifficulty.h"
#include "GuestWaitsForServiceDelegate.h"
#include "InteractableBuilding.h"
#include "RvGuestServiceSpot.generated.h"

class AAICharacterBase;
class AActor;
class ARVCampSpot;
class ARvMinigameInWorld;
class UArrowComponent;
class UPrimitiveComponent;
class URvMinigameWidget;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARvGuestServiceSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ExtraPrimarySkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ExtraSecondarySkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ExtraStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ExtraGuestPositioningArrow;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuestWaitsForService OnGuestWaitsForService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GuestServiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckClientReadyWithMinigameInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AdditionalActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVCampSpot> AttachedCampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld* RvMinigameInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URvMinigameWidget* MinigameWidget;
    
    ARvGuestServiceSpot(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGuestWaitsForServiceOnCustomerArrived(AAICharacterBase* Customer, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGuestWaitsForService();
    
    UFUNCTION(BlueprintCallable)
    bool IsClientReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InteractWithGuestService(bool bForceDifficulty, EGuestServiceDifficulty ForcedDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArrowComponent* GetExtraGuestPositioningArrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetComponentToAttachToGuest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetActorForAnimating();
    
};

