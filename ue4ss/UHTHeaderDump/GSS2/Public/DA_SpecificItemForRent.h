#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DA_SpecificItemForRent.generated.h"

class ARentableItem;

UCLASS(Blueprintable)
class GSS2_API UDA_SpecificItemForRent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARentableItem> Item;
    
    UDA_SpecificItemForRent();

};

