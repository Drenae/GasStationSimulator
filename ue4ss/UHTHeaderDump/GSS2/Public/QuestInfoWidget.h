#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "QuestInfoWidget.generated.h"

class UCountableObjectiveBase;
class UHorizontalBox;
class UObjectiveBase;
class UProgressBar;
class UQuestBase;
class URichTextBlock;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UQuestInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* CurrentQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectiveBase* CurrentObjective;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ProgressHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* DescriptionTextRich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ObjectiveProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlusOneAnimation;
    
public:
    UQuestInfoWidget();

    UFUNCTION(BlueprintCallable)
    void SetQuestInfo(UQuestBase* _CurrentQuest);
    
    UFUNCTION(BlueprintCallable)
    void RefreshQuestInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCountableObjectiveProgressUpdated(UCountableObjectiveBase* CountableObjective, int32 CurrentValue, bool bShowAnim);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeWidget(UQuestBase* _CurrentQuest);
    
};

