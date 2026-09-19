#pragma once
#include "CoreMinimal.h"
#include "ProInstanceLocation.h"
#include "ProInstanceRotation.h"
#include "ProInstanceScale.h"
#include "ProInstanceInstanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FProInstanceInstanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProInstanceLocation Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProInstanceRotation Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProInstanceScale Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstanceLength;
    
    PROINSTANCETOOLSPLUGIN_API FProInstanceInstanceSettings();
};

