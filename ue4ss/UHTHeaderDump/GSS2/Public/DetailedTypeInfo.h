#pragma once
#include "CoreMinimal.h"
#include "DetailedItemInfo.h"
#include "EItemTypeCategory.h"
#include "DetailedTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDetailedTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory TypeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDetailedItemInfo> ItemsInfo;
    
    FDetailedTypeInfo();
};

