#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimalBase.h"
#include "Wolf.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class AWolf : public AAnimalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    AWolf(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* FindEnemyByWolf(TArray<AActor*> Actors, FVector Instaginatorlocation, const float RangeAttack);
    
};

