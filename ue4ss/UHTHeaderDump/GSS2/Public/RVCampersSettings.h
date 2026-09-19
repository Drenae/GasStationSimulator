#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RVCampersSettings.generated.h"

class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API URVCampersSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> CampersClasses;
    
    URVCampersSettings();

};

