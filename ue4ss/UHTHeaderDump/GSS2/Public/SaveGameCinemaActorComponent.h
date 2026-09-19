#pragma once
#include "CoreMinimal.h"
#include "SaveGameDLCActorComponent.h"
#include "SaveGameCinemaActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameCinemaActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    USaveGameCinemaActorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SaveCinemaManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadCinemaManager();
    
};

