#pragma once
#include "CoreMinimal.h"
#include "ETradingSkill.h"
#include "SkillReadyToUseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkillReadyToUse, ETradingSkill, Skill);

