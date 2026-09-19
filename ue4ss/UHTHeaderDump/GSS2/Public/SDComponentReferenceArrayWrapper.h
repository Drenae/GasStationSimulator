#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "SDComponentReferenceArrayWrapper.generated.h"

USTRUCT(BlueprintType)
struct FSDComponentReferenceArrayWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ComponentReference;
    
    GSS2_API FSDComponentReferenceArrayWrapper();
};

