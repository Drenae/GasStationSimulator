#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InteractableBuilding.h"
#include "JunkyardMultitoolStation.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardMultitoolStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Multitool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedTag;
    
public:
    AJunkyardMultitoolStation(const FObjectInitializer& ObjectInitializer);

};

