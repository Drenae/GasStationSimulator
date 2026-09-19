#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "KantanCartesianDatapoint.generated.h"

USTRUCT(BlueprintType)
struct FKantanCartesianDatapoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Coords;
    
    KANTANCHARTSDATASOURCE_API FKantanCartesianDatapoint();
};

