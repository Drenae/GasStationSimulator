#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "KantanCategoryDatasourceInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UKantanCategoryDatasourceInterface : public UInterface {
    GENERATED_BODY()
};

class IKantanCategoryDatasourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCategoryValue(int32 CatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetCategoryName(int32 CatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCategoryId(int32 CatIdx) const;
    
};

