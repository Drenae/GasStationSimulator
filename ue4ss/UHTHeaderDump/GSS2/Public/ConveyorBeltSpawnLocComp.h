#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ConveyorBeltSpawnLocComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UConveyorBeltSpawnLocComp : public USceneComponent {
    GENERATED_BODY()
public:
    UConveyorBeltSpawnLocComp(const FObjectInitializer& ObjectInitializer);

};

