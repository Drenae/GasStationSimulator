#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlanePart.generated.h"

class AAirplane_TapingMinigame;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API APlanePart : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAirplane_TapingMinigame* ParentPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RootSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMeshComponent;
    
public:
    APlanePart(const FObjectInitializer& ObjectInitializer);

};

