#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BroomWidget.generated.h"

class UMinigameTutorialWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UBroomWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinigameTutorialWidget* MinigameTutorialWidget;
    
    UBroomWidget();

};

