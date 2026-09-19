#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CollectiblesLibrary.generated.h"

class UCollectibleItemsManager;
class UObject;

UCLASS(Blueprintable)
class COLLECTIBLEITEMS_API UCollectiblesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCollectiblesLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCollectibleItemsManager* GetCollectibleItemsManager(UObject* WorldContextObject);
    
};

