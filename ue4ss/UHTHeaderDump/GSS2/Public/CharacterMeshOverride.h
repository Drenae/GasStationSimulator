#pragma once
#include "CoreMinimal.h"
#include "CharacterMeshOverride.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct GSS2_API FCharacterMeshOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    FCharacterMeshOverride();
};

