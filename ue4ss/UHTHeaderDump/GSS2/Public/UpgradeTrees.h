#pragma once
#include "CoreMinimal.h"
#include "UpgradeTrees.generated.h"

class UTechnologyTree;
class UTexture2D;

USTRUCT(BlueprintType)
struct GSS2_API FUpgradeTrees {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyTree* UpgradeTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FUpgradeTrees();
};

