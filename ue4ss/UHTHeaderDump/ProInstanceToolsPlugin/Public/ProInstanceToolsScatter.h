#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EProInstanceScatterBoxPivotPoint.h"
#include "EProInstanceScatterPlacementType.h"
#include "ProInstanceToolsParent.h"
#include "ProInstanceToolsScatter.generated.h"

UCLASS(Blueprintable)
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsScatter : public AProInstanceToolsParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProInstanceScatterPlacementType> PlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProInstanceScatterBoxPivotPoint> BoxPivotPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    AProInstanceToolsScatter(const FObjectInitializer& ObjectInitializer);

};

