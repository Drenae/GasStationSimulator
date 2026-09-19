#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "MinigolfBallComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UMinigolfBallComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UMinigolfBallComponent(const FObjectInitializer& ObjectInitializer);

};

