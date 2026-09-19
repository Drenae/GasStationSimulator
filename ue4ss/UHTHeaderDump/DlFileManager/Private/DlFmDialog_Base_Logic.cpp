#include "DlFmDialog_Base_Logic.h"

UDlFmDialog_Base_Logic::UDlFmDialog_Base_Logic() : UUserWidget(FObjectInitializer::Get()) {
    this->bAutoClose = true;
    this->Button_Close = NULL;
    this->Button_Yes = NULL;
    this->Button_No = NULL;
    this->Button_YesForAll = NULL;
    this->Button_NoForAll = NULL;
    this->Button_Cancel = NULL;
    this->Button_SelectNewerModified = NULL;
    this->Button_SelectNewerModified_ForAll = NULL;
    this->Button_SelectLarger = NULL;
    this->Button_SelectLarger_ForAll = NULL;
}

void UDlFmDialog_Base_Logic::OnInternalClick_YesForAll() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_Yes() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_SelectNewerModified_ForAll() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_SelectNewerModified() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_SelectLarger_ForAll() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_SelectLarger() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_NoForAll() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_No() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_Close() {
}

void UDlFmDialog_Base_Logic::OnInternalClick_Cancel() {
}


