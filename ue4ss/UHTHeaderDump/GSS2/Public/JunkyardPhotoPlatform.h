#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "JunkyardPhotoPlatform.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardCarWreck;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardPhotoPlatform : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreck* CurrentWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
public:
    AJunkyardPhotoPlatform(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWreckFromPhotoPlatform();
    
    UFUNCTION(BlueprintCallable)
    void MoveWreckToPhotoPlatform(AJunkyardCarWreck* InWreckToMove, ACarWreckPlaceableArea* AreaFrom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AJunkyardCarWreck* GetCurrentWreck();
    
};

