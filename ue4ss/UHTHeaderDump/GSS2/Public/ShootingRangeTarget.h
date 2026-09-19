#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EShootingRangeDifficulty.h"
#include "ETargetTeam.h"
#include "ShootingRangeTarget.generated.h"

class ARailsForShootingRange;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AShootingRangeTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetTeam TargetTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailsForShootingRange* OwnerREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeShooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainTargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShootingRangeDifficulty TargetType;
    
    AShootingRangeTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayStandAnimation(bool Stand, bool FromFold, bool ShootedByOponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetShooted(bool ShootedByOponent);
    
};

