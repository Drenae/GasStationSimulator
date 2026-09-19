#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RVEmployeeRestPoint.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class GSS2_API ARVEmployeeRestPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RestPosition;
    
    ARVEmployeeRestPoint(const FObjectInitializer& ObjectInitializer);

};

