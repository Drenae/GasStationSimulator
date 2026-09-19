#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EJunkyardCarPartType.h"
#include "EJunkyardCarWreckType.h"
#include "EmptyCarPartData.generated.h"

class UJunkyardCarPartBase;

USTRUCT(BlueprintType)
struct GSS2_API FEmptyCarPartData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarPartType CarPartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType WreckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UJunkyardCarPartBase> PartClass;
    
    FEmptyCarPartData();
};

