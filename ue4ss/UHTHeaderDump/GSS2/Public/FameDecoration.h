#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FameDecorationStruct.h"
#include "FameDecoration.generated.h"

UCLASS(Blueprintable)
class GSS2_API UFameDecoration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFameDecorationStruct> Decorations;
    
    UFameDecoration();

};

