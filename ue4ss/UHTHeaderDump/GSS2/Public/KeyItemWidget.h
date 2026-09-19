#pragma once
#include "CoreMinimal.h"
#include "BindingRow.h"
#include "GSSGamePlayWidget.h"
#include "KeyItemWidget.generated.h"

class AActor;
class UAdditionalKeyItemWidget;
class UCanvasPanel;
class UKeyItemBindWidget;
class UMinigameTutorialWidget;
class UOverlay;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UKeyItemWidget : public UGSSGamePlayWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKeyItemBindWidget> KeyItemBindClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BindingsHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinigameTutorialWidget* MiniGames_Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_ConstructionSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAdditionalKeyItemWidget* MainKeyWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKeyItemBindWidget*> BindWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindingRow CurrentRow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMode;
    
public:
    UKeyItemWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateTutorialWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMode(const int32 InCurrentMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetBindings(bool bSetDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetActivate() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnKeybindingsReset();
    
    UFUNCTION(BlueprintCallable)
    void OnKeybindingChange(const FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInteractCreateBindings(TSoftClassPtr<AActor> CurrentInteraction);
    
    UFUNCTION(BlueprintCallable)
    FString GetKeyItemRowName();
    
private:
    UFUNCTION(BlueprintCallable)
    void GetAndSetBindingData(const FString& KeyItemName);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateTutorial(const AActor* OwnerObject);
    
    UFUNCTION(BlueprintCallable)
    void CreateBasicBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSnapRotationValue(int32 NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSnapDistanceValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBindings(const FString& KeyItemName);
    
};

