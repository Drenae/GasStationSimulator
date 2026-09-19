#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DA_RentalServiceBuilding.generated.h"

class UDA_SpecificItemForRent;

UCLASS(Blueprintable)
class GSS2_API UDA_RentalServiceBuilding : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDA_SpecificItemForRent*> ItemsForRent;
    
    UDA_RentalServiceBuilding();

};

