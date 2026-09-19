#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "JoePlanePropeller.generated.h"

class UNPSmartObjectComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AJoePlanePropeller : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPSmartObjectComponent* SmartObject;
    
    AJoePlanePropeller(const FObjectInitializer& ObjectInitializer);

};

