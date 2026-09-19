#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MinigolfHole.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API AMinigolfHole : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HoleBox;
    
    AMinigolfHole(const FObjectInitializer& ObjectInitializer);

};

