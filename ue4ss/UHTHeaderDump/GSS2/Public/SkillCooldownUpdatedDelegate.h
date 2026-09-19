#pragma once
#include "CoreMinimal.h"
#include "ETradingSkill.h"
#include "SkillCooldownUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkillCooldownUpdated, ETradingSkill, Skill, int32, CooldownTime);

