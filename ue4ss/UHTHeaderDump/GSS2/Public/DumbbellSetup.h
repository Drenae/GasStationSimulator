#pragma once
#include "CoreMinimal.h"
#include "DumbbellSetup.generated.h"

class ADumbbellItem;

USTRUCT(BlueprintType)
struct FDumbbellSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADumbbellItem> DumbbellItemSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    GSS2_API FDumbbellSetup();
};

