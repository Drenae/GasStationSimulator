#pragma once
#include "CoreMinimal.h"
#include "PathPoint.h"
#include "UnlimitedPathPoint.generated.h"

UCLASS(Blueprintable)
class GSS2_API AUnlimitedPathPoint : public APathPoint {
    GENERATED_BODY()
public:
    AUnlimitedPathPoint(const FObjectInitializer& ObjectInitializer);

};

