#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BiomCustomizationCategory.h"
#include "BiomCustomizationsDataAsset.generated.h"

UCLASS(Blueprintable)
class GSS2_API UBiomCustomizationsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomCustomizationCategory> CustomizationCategories;
    
    UBiomCustomizationsDataAsset();

};

