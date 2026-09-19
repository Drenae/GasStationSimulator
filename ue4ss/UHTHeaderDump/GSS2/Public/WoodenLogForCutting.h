#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGuestServiceDifficulty.h"
#include "WoodenLogForCutting.generated.h"

class ARvMinigameInWorldWoodChopping;
class UProceduralMeshComponent;
class USceneComponent;
class UStaticMeshComponent;
class UWoodChoppingSettings;

UCLASS(Blueprintable)
class GSS2_API AWoodenLogForCutting : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WoodenLogMainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* ProceduralMeshWoodenLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* ProceduralMeshToCutREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorldWoodChopping* OwnerREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestServiceDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWoodChoppingSettings* WoodChoppingSettings;
    
    AWoodenLogForCutting(const FObjectInitializer& ObjectInitializer);

};

