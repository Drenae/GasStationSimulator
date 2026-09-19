#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CarWreckType.h"
#include "DA_JunkyardWrecks.generated.h"

class AJunkyardCarWreck;

UCLASS(Blueprintable)
class GSS2_API UDA_JunkyardWrecks : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckType> CarWrecks;
    
    UDA_JunkyardWrecks();

    UFUNCTION(BlueprintCallable)
    FCarWreckType FindWreckDataFromClass(TSoftClassPtr<AJunkyardCarWreck> CarWreck);
    
};

