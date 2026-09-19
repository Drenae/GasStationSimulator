#pragma once
#include "CoreMinimal.h"
#include "SnapPoint.h"
#include "AnyLocationSnapPoint.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAnyLocationSnapPoint : public ASnapPoint {
    GENERATED_BODY()
public:
    AAnyLocationSnapPoint(const FObjectInitializer& ObjectInitializer);

};

