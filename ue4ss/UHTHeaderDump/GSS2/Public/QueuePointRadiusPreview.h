#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "QueuePointRadiusPreview.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AQueuePointRadiusPreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
public:
    AQueuePointRadiusPreview(const FObjectInitializer& ObjectInitializer);

};

