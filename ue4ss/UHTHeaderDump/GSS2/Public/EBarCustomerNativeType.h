#pragma once
#include "CoreMinimal.h"
#include "EBarCustomerNativeType.generated.h"

UENUM(BlueprintType)
enum class EBarCustomerNativeType : uint8 {
    None,
    OridnaryBarCustomer,
    Gang_Policemen,
    Gang_Coyotes,
    Gang_Bears,
    Gang_Hatters,
    Gang_Clowns,
    MAX,
};

