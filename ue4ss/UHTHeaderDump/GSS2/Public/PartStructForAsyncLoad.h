#pragma once
#include "CoreMinimal.h"
#include "PartStruct.h"
#include "PartStructForAsyncLoad.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPartStructForAsyncLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartStruct PartToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetNewSequance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassToSpawn;
    
    GSS2_API FPartStructForAsyncLoad();
};

