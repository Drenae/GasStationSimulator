#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ESDGangActivityType.h"
#include "SDSheriffPatrolWaypoint.generated.h"

class ASDSheriffPatrolWaypoint;

UCLASS(Blueprintable)
class GSS2_API ASDSheriffPatrolWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccessible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGangActivityRelated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDGangActivityType RelatedGangActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFallbackWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDSheriffPatrolWaypoint* FallbackWaypoint;
    
public:
    ASDSheriffPatrolWaypoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaticWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFallbackWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDGangActivityType GetRelatedGangActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDSheriffPatrolWaypoint* GetFallbackWaypoint() const;
    
};

