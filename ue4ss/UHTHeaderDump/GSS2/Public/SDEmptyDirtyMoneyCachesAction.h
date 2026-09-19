#pragma once
#include "CoreMinimal.h"
#include "SDSheriffActionBase.h"
#include "SDEmptyDirtyMoneyCachesAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GSS2_API USDEmptyDirtyMoneyCachesAction : public USDSheriffActionBase {
    GENERATED_BODY()
public:
    USDEmptyDirtyMoneyCachesAction();

};

