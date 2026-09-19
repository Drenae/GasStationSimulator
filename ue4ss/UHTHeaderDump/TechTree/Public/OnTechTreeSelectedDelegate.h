#pragma once
#include "CoreMinimal.h"
#include "OnTechTreeSelectedDelegate.generated.h"

class UTechnologyTree;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTechTreeSelected, UTechnologyTree*, SelectedTechTree);

