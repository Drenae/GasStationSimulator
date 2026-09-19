#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MarshalDifficultyWidget.generated.h"

class AMinigame_MarshalWands;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UMarshalDifficultyWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinigame_MarshalWands* MinigameInstance;
    
public:
    UMarshalDifficultyWidget();

};

