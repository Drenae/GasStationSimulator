#pragma once
#include "CoreMinimal.h"
#include "OnHoleFixedSignatureDelegate.generated.h"

class UStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoleFixedSignature, UStaticMeshComponent*, HoleMesh);

