#pragma once
#include "CoreMinimal.h"
#include "ETradingSkill.h"
#include "SkillUsedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillUsed, ETradingSkill, UsedSkill);

