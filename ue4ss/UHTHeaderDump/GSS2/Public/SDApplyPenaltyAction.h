#pragma once
#include "CoreMinimal.h"
#include "ESDPenaltyType.h"
#include "SDSheriffActionBase.h"
#include "SDApplyPenaltyAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GSS2_API USDApplyPenaltyAction : public USDSheriffActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDPenaltyType PenaltyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PenaltyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedPenalty;
    
    USDApplyPenaltyAction();

};

