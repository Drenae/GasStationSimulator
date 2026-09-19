#pragma once
#include "CoreMinimal.h"
#include "SDSheriffActionBase.h"
#include "SDCloseObjectAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GSS2_API USDCloseObjectAction : public USDSheriffActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeObjectClosedFor;
    
    USDCloseObjectAction();

};

