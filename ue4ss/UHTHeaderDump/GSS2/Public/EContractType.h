#pragma once
#include "CoreMinimal.h"
#include "EContractType.generated.h"

UENUM(BlueprintType)
enum class EContractType : uint8 {
    WRECKS_COLLECTION,
    PARTS_DISASSEMBLY,
    MOBILE_REPAIR,
    SPECIAL_CONTRACT,
    MAX,
};

