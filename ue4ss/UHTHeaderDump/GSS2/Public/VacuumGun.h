#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "VacuumGun.generated.h"

class UAudioComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AVacuumGun : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ProjectilesSpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireAudioComponent;
    
public:
    AVacuumGun(const FObjectInitializer& ObjectInitializer);

};

