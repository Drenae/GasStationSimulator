#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InteractableBuilding.h"
#include "GrinderStation.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API AGrinderStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Grinder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedTag;
    
public:
    AGrinderStation(const FObjectInitializer& ObjectInitializer);

};

