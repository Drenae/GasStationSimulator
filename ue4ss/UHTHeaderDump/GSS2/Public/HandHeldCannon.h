#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "HandHeldCannon.generated.h"

class UAudioComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AHandHeldCannon : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireAudioComponent;
    
public:
    AHandHeldCannon(const FObjectInitializer& ObjectInitializer);

};

