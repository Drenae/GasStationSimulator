#include "DlFm_Item_Logic.h"

UDlFm_Item_Logic::UDlFm_Item_Logic() : UUserWidget(FObjectInitializer::Get()) {
    this->Button_Background = NULL;
    this->Text_ItemName = NULL;
    this->Text_ItemName_Show = NULL;
    this->Text_ItemPath = NULL;
    this->Text_Extension = NULL;
    this->Image_Icon = NULL;
    this->Text_AccessDate = NULL;
    this->Text_CreationDate = NULL;
    this->Text_ModificationDate = NULL;
    this->WShow_ReadOnly = NULL;
    this->Text_Size = NULL;
    this->Toggle_Selectable_InMultiMode = NULL;
    this->Button_Function = NULL;
}

void UDlFm_Item_Logic::OnInternalCommit_Name(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UDlFm_Item_Logic::OnInternalClicked_FunctionButton() {
}

void UDlFm_Item_Logic::OnInternalClicked_Background(bool Val) {
}

void UDlFm_Item_Logic::OnInternalChanged_Select(bool Val) {
}


