#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "SignificanceGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class DISTANCEBASEDOPTIMIZER_API USignificanceGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USignificanceGameViewportClient();

};

