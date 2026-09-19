#pragma once
#include "CoreMinimal.h"
#include "EJoeTasksPlaces.h"
#include "JoePlaces.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FJoePlaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoeTasksPlaces PlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    GSS2_API FJoePlaces();
};

