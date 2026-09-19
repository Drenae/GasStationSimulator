#pragma once
#include "CoreMinimal.h"
#include "SavedRuby.generated.h"

USTRUCT(BlueprintType)
struct FSavedRuby {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoShotGunIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMegaphoneEquipped;
    
    GSS2_API FSavedRuby();
};

