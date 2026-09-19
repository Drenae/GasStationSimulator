#pragma once
#include "CoreMinimal.h"
#include "NetworkRoles.generated.h"

UENUM(BlueprintType)
enum class NetworkRoles : uint8 {
    None,
    Owner,
    Server,
    Client,
    ClientSpawned,
};

