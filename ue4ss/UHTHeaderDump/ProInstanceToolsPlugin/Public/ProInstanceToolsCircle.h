#pragma once
#include "CoreMinimal.h"
#include "EProInstanceToolsCircleInstanceRotationType.h"
#include "ProInstanceToolsParent.h"
#include "ProInstanceToolsCircle.generated.h"

UCLASS(Blueprintable)
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsCircle : public AProInstanceToolsParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProInstanceToolsCircleInstanceRotationType> RotationType;
    
    AProInstanceToolsCircle(const FObjectInitializer& ObjectInitializer);

};

