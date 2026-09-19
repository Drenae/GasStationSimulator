#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnLogSlicedDelegate.generated.h"

class AWoodenLogForCutting;
class UProceduralMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnLogSliced, AWoodenLogForCutting*, WoodenLog, UProceduralMeshComponent*, SlicedMesh1, UProceduralMeshComponent*, SlicedMesh2, FVector, SlicePosition, FVector, SliceNormal);

