#pragma once
#include "CoreMinimal.h"
#include "AdvertIcon.generated.h"

USTRUCT(BlueprintType)
struct FAdvertIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mask;
    
    GSS2_API FAdvertIcon();
};

