#pragma once
#include "CoreMinimal.h"
#include "EAirplanePartType.h"
#include "PartStruct.generated.h"

class AActor;
class APlanePart;

USTRUCT(BlueprintType)
struct FPartStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> BrokenPartClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> WorkingPartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlanePart* PartInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAirplanePartType PartType;
    
    GSS2_API FPartStruct();
};

