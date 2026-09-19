#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "KantanCategoryStyle.h"
#include "KantanCategoryStyleSet.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanCategoryStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKantanCategoryStyle> Styles;
    
    UKantanCategoryStyleSet();

};

