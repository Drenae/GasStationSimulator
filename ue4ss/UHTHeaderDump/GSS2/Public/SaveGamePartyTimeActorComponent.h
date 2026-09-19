#pragma once
#include "CoreMinimal.h"
#include "SaveGameDLCActorComponent.h"
#include "SaveGamePartyTimeActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGamePartyTimeActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    USaveGamePartyTimeActorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SavePartyTime();
    
    UFUNCTION(BlueprintCallable)
    void SavePartyTables();
    
    UFUNCTION(BlueprintCallable)
    void SaveIceCreamBuilding();
    
    UFUNCTION(BlueprintCallable)
    void LoadPartyTime();
    
    UFUNCTION(BlueprintCallable)
    void LoadPartyTables();
    
    UFUNCTION(BlueprintCallable)
    void LoadIceCreamBuilding();
    
};

