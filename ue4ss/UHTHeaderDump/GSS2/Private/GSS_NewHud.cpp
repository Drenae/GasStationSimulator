#include "GSS_NewHud.h"

AGSS_NewHud::AGSS_NewHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->RedDotWidgetClass = NULL;
    this->PlayerOverlayRef = NULL;
    this->InteractionManagerRef = NULL;
    this->ThrowMiniGameRef = NULL;
    this->NotificationManagerRef = NULL;
    this->QuestManagerRef = NULL;
    this->RadialInventoryRef = NULL;
    this->ProductsPreset.AddDefaulted(3);
    this->PartsPreset.AddDefaulted(3);
    this->IceCreamPreset.AddDefaulted(3);
}

UGSSBaseWidget* AGSS_NewHud::TryCreateGSSWidget(TSoftClassPtr<UGSSBaseWidget> WidgetSoftClass, UPanelWidget* ParentObject, bool bSetFocus, bool bDestroyIfExists, FName WidgetName, int32 ZOrder) {
    return NULL;
}

void AGSS_NewHud::ToggleRadialMenu(const EInteractionOutput& InteractionOutput, bool GamepadInitialized) {
}

void AGSS_NewHud::ToggleInputs(bool bActive) {
}

void AGSS_NewHud::ToggleHudWidgets(ESlateVisibility Visibility) {
}

void AGSS_NewHud::SetVisibilityToWidgetBySoftClass(TSoftClassPtr<UGSS_HUD_BaseWidget> WidgetToShow, ESlateVisibility Visibility) {
}

void AGSS_NewHud::SetVisibilityToOtherWidgets(ESlateVisibility Visibility) {
}

void AGSS_NewHud::SetPreviousOrder(ECategoryFilter Type, TArray<FBasketItemStruct> Items) {
}

void AGSS_NewHud::SetPreset(ECategoryFilter Type, FOrderPreset Preset, int32 Index) {
}

void AGSS_NewHud::SetName(FText Name, int32 ButtonIndex, ECategoryFilter Category) {
}

void AGSS_NewHud::RemoveTutorial(UUserWidget* TutorialToRemove) {
}

void AGSS_NewHud::RemoveFromOtherWidgets(UWidget* WidgetToRemove) {
}

void AGSS_NewHud::OnQuestStarted(UQuestBase* QuestStarted) {
}

void AGSS_NewHud::OnGameLoaded() {
}

void AGSS_NewHud::OnEscapeDown(bool IsPressed) {
}

bool AGSS_NewHud::IsTutorialOnTop(UUserWidget* TutorialWidget) {
    return false;
}

UGSSBaseWidget* AGSS_NewHud::GetWidgetBySoftClass(TSoftClassPtr<UGSSBaseWidget> WidgetToFind) {
    return NULL;
}

UGSSThrowMiniGame* AGSS_NewHud::GetThrowMiniGameManager() {
    return NULL;
}

UUI_QuestManager* AGSS_NewHud::GetQuestUIManager() {
    return NULL;
}

TArray<FBasketItemStruct> AGSS_NewHud::GetPreviousOrder(ECategoryFilter Type) {
    return TArray<FBasketItemStruct>();
}

UGSS_PlayerOverlay* AGSS_NewHud::GetPlayerOverlay() {
    return NULL;
}

TArray<FOrderPreset> AGSS_NewHud::GetOrderPresets(ECategoryFilter Type) {
    return TArray<FOrderPreset>();
}

UGSS_Notification_Manager* AGSS_NewHud::GetNotificationManager() {
    return NULL;
}

bool AGSS_NewHud::GetIsFocusedWidgetsEmpty() {
    return false;
}

UGSS_InteractionManager* AGSS_NewHud::GetInteractionManager() {
    return NULL;
}

UGSSBaseWidget* AGSS_NewHud::GetFirstDisplayedWidget() {
    return NULL;
}

TArray<UGSS_HUD_BaseWidget*> AGSS_NewHud::GetBaseWidgets() {
    return TArray<UGSS_HUD_BaseWidget*>();
}

UGSSBaseWidget* AGSS_NewHud::FindCreatedWidget(TSoftClassPtr<UGSSBaseWidget> ClassToFind, EBaseWidgetFocusType FocusType) {
    return NULL;
}

void AGSS_NewHud::DestroyGSSWidget(UGSSBaseWidget* WidegtToDestory) {
}

void AGSS_NewHud::CreateNotificationManager() {
}

UKeyItemWidget* AGSS_NewHud::CreateBindingWidget(const AActor* OwnerObject) {
    return NULL;
}

void AGSS_NewHud::CreateBaseWidgets() {
}

bool AGSS_NewHud::CheckIfWidgetIsCreated(TSoftClassPtr<UGSSBaseWidget> ClassToFind) {
    return false;
}

void AGSS_NewHud::BeginPlay() {
}

void AGSS_NewHud::AddTutorial(UUserWidget* TutorialToAdd) {
}

void AGSS_NewHud::AddToOtherWidgets(UWidget* WidgetToAdd) {
}

void AGSS_NewHud::AddToCreatedWidgets(UGSSBaseWidget* CreatedWidget) {
}


