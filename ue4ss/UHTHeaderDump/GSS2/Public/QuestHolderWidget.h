#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "QuestHolderWidget.generated.h"

class UObjectiveBase;
class UQuestBase;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UQuestHolderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UQuestHolderWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestStarted(UQuestBase* QuestStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestFinished(UQuestBase* QuestFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectiveStarted(UObjectiveBase* ObjectiveStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectiveFinished(UObjectiveBase* ObjectiveFinished);
    
};

