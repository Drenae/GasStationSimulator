#pragma once
#include "CoreMinimal.h"
#include "EDecalUnlockType.h"
#include "SavedFavouritePlayerDecals.generated.h"

USTRUCT(BlueprintType)
struct FSavedFavouritePlayerDecals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SavedUnlockedDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecalUnlockType DecalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFavourite;
    
    GSS2_API FSavedFavouritePlayerDecals();
};

