#pragma once
#include "CoreMinimal.h"
#include "SavedAirstripStorage.generated.h"

USTRUCT(BlueprintType)
struct FSavedAirstripStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirstripStorageLevel;
    
    GSS2_API FSavedAirstripStorage();
};

