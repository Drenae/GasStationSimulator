#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "GameplayHelper.generated.h"

class AItem;
class AProduct;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UGameplayHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetItemAmountOnShelves(UObject* WorldContextObject, TSoftClassPtr<AItem> ItemSoft);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetAmountOfItemOnShelf(UObject* WorldContextObject, TSubclassOf<AProduct> ProductClass);
    
};

