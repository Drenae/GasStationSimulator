#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ERVResource.h"
#include "OnResourceAmountUpdatedDelegate.h"
#include "OnResourceStateUpdatedDelegate.h"
#include "RVResourceState.h"
#include "TimeStruct.h"
#include "RVResourceManager.generated.h"

class ARVCampManager;
class URVResourceSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVResourceManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceAmountUpdated OnResourceAmountUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceStateUpdated OnResourceStateUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRegenerateResources;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERVResource, FRVResourceState> CurrentResourcesState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVResourceSettings* ResourceSettings;
    
public:
    URVResourceManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentResourceState(ERVResource Resource, FRVResourceState NewState);
    
    UFUNCTION(BlueprintCallable)
    void TryRefillResources(bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void RemoveResources(TMap<ERVResource, int32> Amounts);
    
    UFUNCTION(BlueprintCallable)
    void RemoveResource(ERVResource Resource, int32 Amount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimeUpdated(const FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void InitResources();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRVResourceState GetCurrentResourceState(ERVResource Resource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ERVResource, FRVResourceState> GetCurrentResourcesState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentResourceAmount(ERVResource Resource);
    
    UFUNCTION(BlueprintCallable)
    bool CanAffordResources(TMap<ERVResource, int32> Amounts);
    
    UFUNCTION(BlueprintCallable)
    bool CanAffordResource(ERVResource Resource, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddResources(TMap<ERVResource, int32> Amounts);
    
    UFUNCTION(BlueprintCallable)
    void AddResource(ERVResource Resource, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddRemoveResources(TMap<ERVResource, int32> AddRemoveAmounts);
    
    UFUNCTION(BlueprintCallable)
    void AddRemoveResource(ERVResource Resource, int32 AddRemoveAmount);
    
};

