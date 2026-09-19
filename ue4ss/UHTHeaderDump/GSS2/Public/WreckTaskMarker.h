#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ECarWreckMarking.h"
#include "WreckTaskMarker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UWreckTaskMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UWreckTaskMarker();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMarkerIcon(ECarWreckMarking NewMarking);
    
};

