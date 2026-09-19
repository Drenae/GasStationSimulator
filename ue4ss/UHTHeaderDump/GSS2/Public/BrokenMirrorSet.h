#pragma once
#include "CoreMinimal.h"
#include "BrokenMirrorSet.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBrokenMirrorSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> BrokenMirrorSet;
    
    GSS2_API FBrokenMirrorSet();
};

