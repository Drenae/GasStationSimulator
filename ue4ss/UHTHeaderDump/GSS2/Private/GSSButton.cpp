#include "GSSButton.h"

UGSSButton::UGSSButton() {
    this->NavigationMoveUp = NULL;
    this->NavigationMoveDown = NULL;
    this->NavigationMoveLeft = NULL;
    this->NavigationMoveRight = NULL;
    this->bCustomCondition = true;
    this->CurrentRepeat = 1;
    this->bBlockUnhover = false;
    this->RedDotImage = NULL;
}

void UGSSButton::TryCreateRedDot() {
}

void UGSSButton::SetUnhovered() {
}

void UGSSButton::SetHovered() {
}

void UGSSButton::SetCustomCondition(bool InEnable) {
}

void UGSSButton::OverrideDefaultRedDots(FGameplayTagContainer Tags, FVector2D Offset) {
}

void UGSSButton::LockAddedRedDots() {
}

void UGSSButton::DestroyRedDot() {
}

void UGSSButton::CustomOnClicked() {
}

void UGSSButton::CreateRedDot() {
}


