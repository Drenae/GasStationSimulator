#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "InteractableBuilding.h"
#include "PickableToolStation.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API APickableToolStation : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PickableTool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedTag;
    
public:
    APickableToolStation(const FObjectInitializer& ObjectInitializer);

};

