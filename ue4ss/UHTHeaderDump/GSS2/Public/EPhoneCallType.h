#pragma once
#include "CoreMinimal.h"
#include "EPhoneCallType.generated.h"

UENUM(BlueprintType)
enum class EPhoneCallType : uint8 {
    PHONE_NOTIFICATION,
    PHONE_PROLOGUE,
    PHONE_SECOND,
    PHONE_THIRD,
    PHONE_POPULARITY,
    PHONE_EMPLOYEE,
    PHONE_BEFORE_SANDSTAROM,
    PHONE_LAST_DEBT,
    OPEN_TRUNK,
    PHONE_SEAN_FIRST,
    NOT_SET,
    MAX,
};

