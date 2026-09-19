#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Collectible.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class COLLECTIBLEITEMS_API ACollectible : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComp;
    
    ACollectible(const FObjectInitializer& ObjectInitializer);

};

