#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "SavedRenownEntity.generated.h"

class URenownType;

USTRUCT(BlueprintType)
struct FSavedRenownEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URenownType> RenownSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeAtWhichRenownChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownLevel;
    
    GSS2_API FSavedRenownEntity();
};

