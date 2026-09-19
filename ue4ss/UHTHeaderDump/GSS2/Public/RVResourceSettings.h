#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ERVResource.h"
#include "RVResourceProperties.h"
#include "RVResourceSettings.generated.h"

UCLASS(Blueprintable)
class GSS2_API URVResourceSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVResourceProperties ResourceProperties[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefillResourcesCost;
    
    URVResourceSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceRegenMinutesAtLevel(ERVResource Resource, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRVResourceProperties GetResourceProperties(ERVResource Resource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxResourceReserveAtLevel(ERVResource Resource, int32 Level);
    
};

