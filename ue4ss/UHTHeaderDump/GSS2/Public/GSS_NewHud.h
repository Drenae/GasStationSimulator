#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BasketItemStruct.h"
#include "EBaseWidgetFocusType.h"
#include "ECategoryFilter.h"
#include "EInteractionOutput.h"
#include "OrderPreset.h"
#include "Templates/SubclassOf.h"
#include "GSS_NewHud.generated.h"

class AActor;
class UGSSBaseWidget;
class UGSSThrowMiniGame;
class UGSS_HUD_BaseWidget;
class UGSS_InteractionManager;
class UGSS_Notification_Manager;
class UGSS_PlayerOverlay;
class UKeyItemWidget;
class UPanelWidget;
class UQuestBase;
class UUI_QuestManager;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class GSS2_API AGSS_NewHud : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentRedDotTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSBaseWidget> RedDotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSS_HUD_BaseWidget> PlayerOverlayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSS_HUD_BaseWidget> NotificationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSS_HUD_BaseWidget> InteractionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSBaseWidget> RadialInventoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSBaseWidget> ThrowMiniGameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSS_HUD_BaseWidget> UIQuestManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGSSBaseWidget*> FocusedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGSSBaseWidget*> NotFocusedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* PlayerOverlayRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* InteractionManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* ThrowMiniGameRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* NotificationManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* QuestManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_HUD_BaseWidget* RadialInventoryRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> OpenTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGSS_HUD_BaseWidget*> BaseWidgets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> OtherWidgets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderPreset> ProductsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderPreset> PartsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderPreset> IceCreamPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasketItemStruct> PreviousOrderProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasketItemStruct> PreviousOrderParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasketItemStruct> PreviousOrderIceCreams;
    
    AGSS_NewHud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UGSSBaseWidget* TryCreateGSSWidget(TSoftClassPtr<UGSSBaseWidget> WidgetSoftClass, UPanelWidget* ParentObject, bool bSetFocus, bool bDestroyIfExists, FName WidgetName, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void ToggleRadialMenu(const EInteractionOutput& InteractionOutput, bool GamepadInitialized);
    
    UFUNCTION(BlueprintCallable)
    void ToggleInputs(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHudWidgets(ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityToWidgetBySoftClass(TSoftClassPtr<UGSS_HUD_BaseWidget> WidgetToShow, ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityToOtherWidgets(ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousOrder(ECategoryFilter Type, TArray<FBasketItemStruct> Items);
    
    UFUNCTION(BlueprintCallable)
    void SetPreset(ECategoryFilter Type, FOrderPreset Preset, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetName(FText Name, int32 ButtonIndex, ECategoryFilter Category);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorial(UUserWidget* TutorialToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromOtherWidgets(UWidget* WidgetToRemove);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestStarted(UQuestBase* QuestStarted);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnEscapeDown(bool IsPressed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialOnTop(UUserWidget* TutorialWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSSBaseWidget* GetWidgetBySoftClass(TSoftClassPtr<UGSSBaseWidget> WidgetToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSSThrowMiniGame* GetThrowMiniGameManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUI_QuestManager* GetQuestUIManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBasketItemStruct> GetPreviousOrder(ECategoryFilter Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSS_PlayerOverlay* GetPlayerOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOrderPreset> GetOrderPresets(ECategoryFilter Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSS_Notification_Manager* GetNotificationManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusedWidgetsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSS_InteractionManager* GetInteractionManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSSBaseWidget* GetFirstDisplayedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGSS_HUD_BaseWidget*> GetBaseWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGSSBaseWidget* FindCreatedWidget(TSoftClassPtr<UGSSBaseWidget> ClassToFind, EBaseWidgetFocusType FocusType);
    
    UFUNCTION(BlueprintCallable)
    void DestroyGSSWidget(UGSSBaseWidget* WidegtToDestory);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateNotificationManager();
    
public:
    UFUNCTION(BlueprintCallable)
    UKeyItemWidget* CreateBindingWidget(const AActor* OwnerObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateBaseWidgets();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckIfWidgetIsCreated(TSoftClassPtr<UGSSBaseWidget> ClassToFind);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTutorial(UUserWidget* TutorialToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddToOtherWidgets(UWidget* WidgetToAdd);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddToCreatedWidgets(UGSSBaseWidget* CreatedWidget);
    
};

