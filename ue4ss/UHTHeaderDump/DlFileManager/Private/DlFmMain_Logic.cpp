#include "DlFmMain_Logic.h"

UDlFmMain_Logic::UDlFmMain_Logic() : UUserWidget(FObjectInitializer::Get()) {
    this->StartPathType = EDlFm_SysPath::UE_ProjectDir;
    this->DirPathStack_Depth = 10;
    this->bUseSingleClickForConfirm = false;
    this->Text_InternalInfo = NULL;
    this->bAlwaysUseFullPath = true;
    this->Text_FilePath = NULL;
    this->Toggle_MultiSelect = NULL;
    this->Toggle_MultiSelect_SelectAll = NULL;
    this->WShow_IsBusy = NULL;
    this->bSearch_AutoAppendAsterisk = true;
    this->Text_SearchContent = NULL;
    this->Button_GoToSearchedFileLocation = NULL;
    this->Button_DirGoBack = NULL;
    this->Button_DirGoForward = NULL;
    this->Button_SortBy_Name = NULL;
    this->WShow_SortByName_Ascending = NULL;
    this->WShow_SortByName_Descending = NULL;
    this->Button_SortBy_Size = NULL;
    this->WShow_SortBySize_Ascending = NULL;
    this->WShow_SortBySize_Descending = NULL;
    this->Button_SortBy_CreationTime = NULL;
    this->WShow_SortByCreationTime_Ascending = NULL;
    this->WShow_SortByCreationTime_Descending = NULL;
    this->Button_SortBy_AccessTime = NULL;
    this->WShow_SortByAccessTime_Ascending = NULL;
    this->WShow_SortByAccessTime_Descending = NULL;
    this->Button_SortBy_ModifyTime = NULL;
    this->WShow_SortByModifyTime_Ascending = NULL;
    this->WShow_SortByModifyTime_Descending = NULL;
    this->Button_SortBy_FileType = NULL;
    this->WShow_SortByFileType_Ascending = NULL;
    this->WShow_SortByFileType_Descending = NULL;
    this->Toggle_ShowDir = NULL;
    this->Toggle_ShowFile = NULL;
    this->Container_DirectoryContainer = NULL;
    this->Container_FileContainer = NULL;
    this->Button_Delete = NULL;
    this->Type_When_DialogDeleteConfirm_Absent = EDlFm_DialogEventType::Click_Yes;
    this->Dialog_DeleteConfirm = NULL;
    this->Button_Rename = NULL;
    this->Button_Cut = NULL;
    this->Button_Copy = NULL;
    this->Button_Paste = NULL;
    this->Type_When_DialogPasteTargetAlreadyExist_Absent = EDlFm_DialogEventType::Click_NoForAll;
    this->Dialog_PasteTargetAlreadyExist = NULL;
    this->bTryCleanEmptyDirAfterCutPaste = true;
    this->Button_Refresh = NULL;
    this->Button_BrowseTo_ParentDir = NULL;
    this->NewDirDefaultName = TEXT("New Directory");
    this->Button_MakeDir = NULL;
    this->Dialog_MakeDir = NULL;
    this->NewFileDefaultName = TEXT("NewFile.txt");
    this->Button_CreateFile = NULL;
    this->Dialog_CreateFile = NULL;
    this->Combo_ExtensionFilter = NULL;
    this->bSelectCurrentPathWhenNothingSelect = true;
    this->Button_SelectConfirm = NULL;
    this->Container_FunctionButton = NULL;
}

void UDlFmMain_Logic::OnInternalSelectionChanged_ExtensionFilter(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UDlFmMain_Logic::OnInternalDialog_PasteTargetAlreadyExist(EDlFm_DialogEventType Type) {
}

void UDlFmMain_Logic::OnInternalDialog_MakeDir(EDlFm_DialogEventType Type) {
}

void UDlFmMain_Logic::OnInternalDialog_DeleteConfirm(EDlFm_DialogEventType Type) {
}

void UDlFmMain_Logic::OnInternalDialog_CreateFile(EDlFm_DialogEventType Type) {
}

void UDlFmMain_Logic::OnInternalCommit_Search(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UDlFmMain_Logic::OnInternalCommit_FilePath(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UDlFmMain_Logic::OnInternalClicked_SelectConfirm() {
}

void UDlFmMain_Logic::OnInternalClicked_Rename() {
}

void UDlFmMain_Logic::OnInternalClicked_Refresh() {
}

void UDlFmMain_Logic::OnInternalClicked_Paste() {
}

void UDlFmMain_Logic::OnInternalClicked_MakeDir() {
}

void UDlFmMain_Logic::OnInternalClicked_Delete() {
}

void UDlFmMain_Logic::OnInternalClicked_Cut() {
}

void UDlFmMain_Logic::OnInternalClicked_CreateFile() {
}

void UDlFmMain_Logic::OnInternalClicked_Copy() {
}

void UDlFmMain_Logic::OnInternalClicked_BrowseParentDir() {
}

void UDlFmMain_Logic::OnInternalClick_SortBySize() {
}

void UDlFmMain_Logic::OnInternalClick_SortByName() {
}

void UDlFmMain_Logic::OnInternalClick_SortByModifyTime() {
}

void UDlFmMain_Logic::OnInternalClick_SortByFileType() {
}

void UDlFmMain_Logic::OnInternalClick_SortByCreationTime() {
}

void UDlFmMain_Logic::OnInternalClick_SortByAccessTime() {
}

void UDlFmMain_Logic::OnInternalClick_GoToSearchedFileLocation() {
}

void UDlFmMain_Logic::OnInternalClick_DirGoForward() {
}

void UDlFmMain_Logic::OnInternalClick_DirGoBack() {
}

void UDlFmMain_Logic::OnInternalCheckStateChanged_ShowFile(bool Val) {
}

void UDlFmMain_Logic::OnInternalCheckStateChanged_ShowDir(bool Val) {
}

void UDlFmMain_Logic::OnInternalChanged_MultiSelect_SelectAll(bool Val) {
}

void UDlFmMain_Logic::OnInternalChanged_MultiSelect(bool Val) {
}

void UDlFmMain_Logic::OnInternal_ItemRenameCommitted(const int32 Index, EDlUI_FileExplorer_ListSegment Segment, const FText& Name) {
}

void UDlFmMain_Logic::OnInternal_ItemFunctionButtonClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment) {
}

void UDlFmMain_Logic::OnInternal_ItemClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment) {
}


void UDlFmMain_Logic::Func_Refresh() {
}

FString UDlFmMain_Logic::Func_GetCurrentPathName() {
    return TEXT("");
}

void UDlFmMain_Logic::Func_BrowseToPath(const FString& Val) {
}

void UDlFmMain_Logic::Func_BrowseForward() {
}

void UDlFmMain_Logic::Func_BrowseBackward() {
}


