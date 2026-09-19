#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "QuestTipWidget.generated.h"

class AGSSGameState;
class UQuestBase;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UQuestTipWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TipDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TipDescriptionRich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GameStateRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TipPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* TipQuest;
    
    UQuestTipWidget();

    UFUNCTION(BlueprintCallable)
    void SetTipInfo(UQuestBase* NewTipQuest);
    
    UFUNCTION(BlueprintCallable)
    void RefreshTipInfo();
    
};

