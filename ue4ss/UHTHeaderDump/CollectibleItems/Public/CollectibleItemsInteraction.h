#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CollectibleItemsInteraction.generated.h"

class UCollectibleItemsManager;

UINTERFACE(Blueprintable)
class COLLECTIBLEITEMS_API UCollectibleItemsInteraction : public UInterface {
    GENERATED_BODY()
};

class COLLECTIBLEITEMS_API ICollectibleItemsInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCollectibleItemsManager* GetCollectibleItemsManager();
    
};

