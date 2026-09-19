#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DecorationStruct.h"
#include "DecorationLevel.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDecorationLevel : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecorationStruct> StandingDecorations;
    
    UDecorationLevel();

};

