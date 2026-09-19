#pragma once
#include "CoreMinimal.h"
#include "PathStationsBuildingUpdate.generated.h"

class AInteractableActor;
class APathStation;

USTRUCT(BlueprintType)
struct FPathStationsBuildingUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AInteractableActor>> ActorsToAddPathStationsTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<APathStation>> PathStationsToAdd;
    
    GSS2_API FPathStationsBuildingUpdate();
};

