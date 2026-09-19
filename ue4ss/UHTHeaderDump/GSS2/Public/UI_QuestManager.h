#pragma once
#include "CoreMinimal.h"
#include "GSS_HUD_BaseWidget.h"
#include "UI_QuestManager.generated.h"

class AActor;
class UCanvasPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UUI_QuestManager : public UGSS_HUD_BaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_0;
    
    UUI_QuestManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMarket(UUserWidget* UserWidget, AActor* TargetActor);
    
};

