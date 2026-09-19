#include "MainPC.h"

UMainPC::UMainPC() {
    this->CurrentTab = NULL;
    this->Overlay_0 = NULL;
    this->MainBackground = NULL;
    this->ButtonsHolder = NULL;
    this->Cards_WrapBorder = NULL;
    this->Title = NULL;
    this->Border_0 = NULL;
    this->MiniGames_Tutorial = NULL;
    this->Bottom_Overlay = NULL;
    this->FullScreenOverlay = NULL;
    this->bIsTabLoading = false;
}

void UMainPC::UpdateTutorial(bool HasTutorial, EGameActivityType TutorialType) {
}

void UMainPC::TryForceOpenTutorial(FGameplayTag TutorialTag, bool HasTutorial) {
}

void UMainPC::SetBackGroundAsync(TSoftObjectPtr<UTexture2D> BackgroundImager) {
}

void UMainPC::OpenTabByTabToCreate(TSoftClassPtr<UPcBaseTab> ClassToSearch) {
}


UPcBaseTab* UMainPC::GetCurrentTab() {
    return NULL;
}

TArray<UPC_TopMenuButton*> UMainPC::GetButtons() {
    return TArray<UPC_TopMenuButton*>();
}

void UMainPC::FillButtons() {
}



void UMainPC::CreateTabAsync(TSoftClassPtr<UPcBaseTab> TabClass, bool bSetCenterFill) {
}

void UMainPC::CreateButtons(TSoftClassPtr<UPC_TopMenuButton> ButtonClass, const TArray<UDA_MainPCButton*> InButtons) {
}

void UMainPC::ClosePC(bool bIsPressed) {
}

void UMainPC::ChangeTabByCard(UPC_Base_Card* TabRef) {
}

void UMainPC::ChangeTab(UPC_TopMenuButton* ButtonREF) {
}


