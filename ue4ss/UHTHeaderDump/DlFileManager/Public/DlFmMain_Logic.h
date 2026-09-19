#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DlUI_FileExplorer_ItemInfo.h"
#include "EDlFm_DialogEventType.h"
#include "EDlFm_SysPath.h"
#include "EDlUI_FileExplorer_ListSegment.h"
#include "DlFmMain_Logic.generated.h"

class UComboBoxString;
class UDlFmButton;
class UDlFmFilteredToggleButton;
class UDlFm_DialogDelete_Logic;
class UDlFm_DialogNewItem_Logic;
class UDlFm_DialogPasteOverwrite_Logic;
class UDlFm_Item_Data;
class UEditableText;
class UListView;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DLFILEMANAGER_API UDlFmMain_Logic : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileListSelectConfirmed, TArray<FDlUI_FileExplorer_ItemInfo>, FileNodeList);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileListSelectConfirmed OnFileListSelectConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDlFm_SysPath StartPathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Customized_StartPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartPath_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirPathStack_Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSingleClickForConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Extension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_InternalInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysUseFullPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* Text_FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmFilteredToggleButton* Toggle_MultiSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmFilteredToggleButton* Toggle_MultiSelect_SelectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_IsBusy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearch_AutoAppendAsterisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* Text_SearchContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_GoToSearchedFileLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_DirGoBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_DirGoForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByName_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByName_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortBySize_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortBySize_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByCreationTime_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByCreationTime_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_AccessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByAccessTime_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByAccessTime_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_ModifyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByModifyTime_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByModifyTime_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SortBy_FileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByFileType_Ascending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WShow_SortByFileType_Descending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmFilteredToggleButton* Toggle_ShowDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmFilteredToggleButton* Toggle_ShowFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* Container_DirectoryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDlFm_Item_Data*> ItemPool_Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* Container_FileContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDlFm_Item_Data*> ItemPool_File;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Delete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDlFm_DialogEventType Type_When_DialogDeleteConfirm_Absent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFm_DialogDelete_Logic* Dialog_DeleteConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Rename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Cut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Copy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Paste;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDlFm_DialogEventType Type_When_DialogPasteTargetAlreadyExist_Absent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFm_DialogPasteOverwrite_Logic* Dialog_PasteTargetAlreadyExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryCleanEmptyDirAfterCutPaste;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_Refresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_BrowseTo_ParentDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewDirDefaultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_MakeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFm_DialogNewItem_Logic* Dialog_MakeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewFileDefaultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_CreateFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFm_DialogNewItem_Logic* Dialog_CreateFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* Combo_ExtensionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectCurrentPathWhenNothingSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDlFmButton* Button_SelectConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_FunctionButton;
    
public:
    UDlFmMain_Logic();

private:
    UFUNCTION(BlueprintCallable)
    void OnInternalSelectionChanged_ExtensionFilter(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalDialog_PasteTargetAlreadyExist(EDlFm_DialogEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalDialog_MakeDir(EDlFm_DialogEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalDialog_DeleteConfirm(EDlFm_DialogEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalDialog_CreateFile(EDlFm_DialogEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalCommit_Search(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalCommit_FilePath(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_SelectConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Rename();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Refresh();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Paste();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_MakeDir();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Delete();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Cut();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_CreateFile();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_Copy();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClicked_BrowseParentDir();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortBySize();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortByName();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortByModifyTime();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortByFileType();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortByCreationTime();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_SortByAccessTime();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_GoToSearchedFileLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_DirGoForward();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClick_DirGoBack();
    
    UFUNCTION(BlueprintCallable)
    void OnInternalCheckStateChanged_ShowFile(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalCheckStateChanged_ShowDir(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalChanged_MultiSelect_SelectAll(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalChanged_MultiSelect(bool Val);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInternal_ItemRenameCommitted(const int32 Index, EDlUI_FileExplorer_ListSegment Segment, const FText& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnInternal_ItemFunctionButtonClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment);
    
    UFUNCTION(BlueprintCallable)
    void OnInternal_ItemClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Func_RefreshInternalText(int32 FolderCount, int32 FileCount);
    
    UFUNCTION(BlueprintCallable)
    void Func_Refresh();
    
    UFUNCTION(BlueprintCallable)
    FString Func_GetCurrentPathName();
    
    UFUNCTION(BlueprintCallable)
    void Func_BrowseToPath(const FString& Val);
    
    UFUNCTION(BlueprintCallable)
    void Func_BrowseForward();
    
    UFUNCTION(BlueprintCallable)
    void Func_BrowseBackward();
    
};

