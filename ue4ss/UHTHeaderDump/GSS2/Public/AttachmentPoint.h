#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AttachmentPoint.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AAttachmentPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    AAttachmentPoint(const FObjectInitializer& ObjectInitializer);

};

