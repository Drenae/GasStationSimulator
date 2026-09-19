#ifndef UE4SS_SDK_DlFileManager_HPP
#define UE4SS_SDK_DlFileManager_HPP

#include "DlFileManager_enums.hpp"

struct FDlUI_FileExplorer_ItemInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FDateTime CreationTime;                                                           // 0x0010 (size: 0x8)
    FDateTime AccessTime;                                                             // 0x0018 (size: 0x8)
    FDateTime ModificationTime;                                                       // 0x0020 (size: 0x8)
    int64 FileSize;                                                                   // 0x0028 (size: 0x8)
    bool bIsDirectory;                                                                // 0x0030 (size: 0x1)
    bool bIsReadOnly;                                                                 // 0x0031 (size: 0x1)
    bool bIsValid;                                                                    // 0x0032 (size: 0x1)

}; // Size: 0x60

class UDlFmButton : public UContentWidget
{
    float GapTime;                                                                    // 0x0120 (size: 0x4)
    FVector2D Paint_OverflowPercent;                                                  // 0x0124 (size: 0x8)
    FVector2D Paint_OffsetPercent;                                                    // 0x012C (size: 0x8)
    class USlateWidgetStyleAsset* Style;                                              // 0x0138 (size: 0x8)
    FButtonStyle WidgetStyle;                                                         // 0x0140 (size: 0x278)
    FLinearColor ColorAndOpacity;                                                     // 0x03B8 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x03C8 (size: 0x10)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;                                // 0x03D8 (size: 0x1)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;                                // 0x03D9 (size: 0x1)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;                                // 0x03DA (size: 0x1)
    bool IsFocusable;                                                                 // 0x03DB (size: 0x1)
    FDlFmButtonOnFilteredReleased OnFilteredReleased;                                 // 0x03E0 (size: 0x10)
    void OnButtonFilteredReleasedEvent();
    FDlFmButtonOnFilteredClicked OnFilteredClicked;                                   // 0x03F0 (size: 0x10)
    void OnButtonFilteredClickedEvent();
    FDlFmButtonOnFilteredPressed OnFilteredPressed;                                   // 0x0400 (size: 0x10)
    void OnButtonFilteredPressedEvent();
    FDlFmButtonOnClicked OnClicked;                                                   // 0x0410 (size: 0x10)
    void OnButtonClickedEvent();
    FDlFmButtonOnPressed OnPressed;                                                   // 0x0420 (size: 0x10)
    void OnButtonPressedEvent();
    FDlFmButtonOnReleased OnReleased;                                                 // 0x0430 (size: 0x10)
    void OnButtonReleasedEvent();
    FDlFmButtonOnHovered OnHovered;                                                   // 0x0440 (size: 0x10)
    void OnButtonHoverEvent();
    FDlFmButtonOnUnhovered OnUnhovered;                                               // 0x0450 (size: 0x10)
    void OnButtonHoverEvent();

    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetStyle(const FButtonStyle& InStyle);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    void OnButtonFilteredReleasedEvent__DelegateSignature();
    void OnButtonFilteredPressedEvent__DelegateSignature();
    void OnButtonFilteredClickedEvent__DelegateSignature();
    bool IsPressed();
}; // Size: 0x480

class UDlFmButtonSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UDlFmDialog_Base_Logic : public UUserWidget
{
    bool bAutoClose;                                                                  // 0x0260 (size: 0x1)
    class UDlFmButton* Button_Close;                                                  // 0x0278 (size: 0x8)
    class UDlFmButton* Button_Yes;                                                    // 0x0280 (size: 0x8)
    class UDlFmButton* Button_No;                                                     // 0x0288 (size: 0x8)
    class UDlFmButton* Button_YesForAll;                                              // 0x0290 (size: 0x8)
    class UDlFmButton* Button_NoForAll;                                               // 0x0298 (size: 0x8)
    class UDlFmButton* Button_Cancel;                                                 // 0x02A0 (size: 0x8)
    class UDlFmButton* Button_SelectNewerModified;                                    // 0x02A8 (size: 0x8)
    class UDlFmButton* Button_SelectNewerModified_ForAll;                             // 0x02B0 (size: 0x8)
    class UDlFmButton* Button_SelectLarger;                                           // 0x02B8 (size: 0x8)
    class UDlFmButton* Button_SelectLarger_ForAll;                                    // 0x02C0 (size: 0x8)

    void OnInternalClick_YesForAll();
    void OnInternalClick_Yes();
    void OnInternalClick_SelectNewerModified_ForAll();
    void OnInternalClick_SelectNewerModified();
    void OnInternalClick_SelectLarger_ForAll();
    void OnInternalClick_SelectLarger();
    void OnInternalClick_NoForAll();
    void OnInternalClick_No();
    void OnInternalClick_Close();
    void OnInternalClick_Cancel();
}; // Size: 0x2C8

class UDlFmFilteredEditableText : public UEditableText
{
    FDlFmFilteredEditableTextOnFilteredTextCommitted OnFilteredTextCommitted;         // 0x0460 (size: 0x10)
    void OnEditableTextCommittedEvent(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    float GapTime;                                                                    // 0x0470 (size: 0x4)

    void OnFilteredTextCommitted_InternalHandle(const FText& TextVal, TEnumAsByte<ETextCommit::Type> CommitMethodVal);
}; // Size: 0x478

class UDlFmFilteredToggleButton : public UDlFmButton
{
    FDlFmFilteredToggleButtonOnCheckStateChanged OnCheckStateChanged;                 // 0x0480 (size: 0x10)
    void OnCheckBoxComponentStateChanged(bool bIsChecked);
    FSlateBrush whenTrue;                                                             // 0x0490 (size: 0x88)
    FSlateBrush whenHoveredTrue;                                                      // 0x0518 (size: 0x88)
    FSlateBrush whenDisabledTrue;                                                     // 0x05A0 (size: 0x88)
    FSlateBrush whenFalse;                                                            // 0x0628 (size: 0x88)
    FSlateBrush whenHoveredFalse;                                                     // 0x06B0 (size: 0x88)
    FSlateBrush whenDisabledFalse;                                                    // 0x0738 (size: 0x88)
    bool initBool;                                                                    // 0x07C0 (size: 0x1)

    void SetIsChecked(bool InIsChecked);
    bool IsChecked();
    void DlFilteredClick_UpperHandle();
}; // Size: 0xA40

class UDlFmMain_Logic : public UUserWidget
{
    FDlFmMain_LogicOnFileListSelectConfirmed OnFileListSelectConfirmed;               // 0x0260 (size: 0x10)
    void OnFileListSelectConfirmed(TArray<FDlUI_FileExplorer_ItemInfo> FileNodeList);
    EDlFm_SysPath StartPathType;                                                      // 0x0280 (size: 0x1)
    FString Customized_StartPath;                                                     // 0x0288 (size: 0x10)
    FString StartPath_Offset;                                                         // 0x0298 (size: 0x10)
    int32 DirPathStack_Depth;                                                         // 0x02A8 (size: 0x4)
    bool bUseSingleClickForConfirm;                                                   // 0x02AC (size: 0x1)
    FString Extension;                                                                // 0x02B0 (size: 0x10)
    class UTextBlock* Text_InternalInfo;                                              // 0x02C0 (size: 0x8)
    bool bAlwaysUseFullPath;                                                          // 0x02C8 (size: 0x1)
    class UEditableText* Text_FilePath;                                               // 0x02D0 (size: 0x8)
    class UDlFmFilteredToggleButton* Toggle_MultiSelect;                              // 0x02D8 (size: 0x8)
    class UDlFmFilteredToggleButton* Toggle_MultiSelect_SelectAll;                    // 0x02E0 (size: 0x8)
    class UWidget* WShow_IsBusy;                                                      // 0x02E8 (size: 0x8)
    bool bSearch_AutoAppendAsterisk;                                                  // 0x02F0 (size: 0x1)
    class UEditableText* Text_SearchContent;                                          // 0x02F8 (size: 0x8)
    class UDlFmButton* Button_GoToSearchedFileLocation;                               // 0x0300 (size: 0x8)
    class UDlFmButton* Button_DirGoBack;                                              // 0x0308 (size: 0x8)
    class UDlFmButton* Button_DirGoForward;                                           // 0x0310 (size: 0x8)
    class UDlFmButton* Button_SortBy_Name;                                            // 0x0318 (size: 0x8)
    class UWidget* WShow_SortByName_Ascending;                                        // 0x0320 (size: 0x8)
    class UWidget* WShow_SortByName_Descending;                                       // 0x0328 (size: 0x8)
    class UDlFmButton* Button_SortBy_Size;                                            // 0x0330 (size: 0x8)
    class UWidget* WShow_SortBySize_Ascending;                                        // 0x0338 (size: 0x8)
    class UWidget* WShow_SortBySize_Descending;                                       // 0x0340 (size: 0x8)
    class UDlFmButton* Button_SortBy_CreationTime;                                    // 0x0348 (size: 0x8)
    class UWidget* WShow_SortByCreationTime_Ascending;                                // 0x0350 (size: 0x8)
    class UWidget* WShow_SortByCreationTime_Descending;                               // 0x0358 (size: 0x8)
    class UDlFmButton* Button_SortBy_AccessTime;                                      // 0x0360 (size: 0x8)
    class UWidget* WShow_SortByAccessTime_Ascending;                                  // 0x0368 (size: 0x8)
    class UWidget* WShow_SortByAccessTime_Descending;                                 // 0x0370 (size: 0x8)
    class UDlFmButton* Button_SortBy_ModifyTime;                                      // 0x0378 (size: 0x8)
    class UWidget* WShow_SortByModifyTime_Ascending;                                  // 0x0380 (size: 0x8)
    class UWidget* WShow_SortByModifyTime_Descending;                                 // 0x0388 (size: 0x8)
    class UDlFmButton* Button_SortBy_FileType;                                        // 0x0390 (size: 0x8)
    class UWidget* WShow_SortByFileType_Ascending;                                    // 0x0398 (size: 0x8)
    class UWidget* WShow_SortByFileType_Descending;                                   // 0x03A0 (size: 0x8)
    class UDlFmFilteredToggleButton* Toggle_ShowDir;                                  // 0x03A8 (size: 0x8)
    class UDlFmFilteredToggleButton* Toggle_ShowFile;                                 // 0x03B0 (size: 0x8)
    class UListView* Container_DirectoryContainer;                                    // 0x03B8 (size: 0x8)
    TArray<UDlFm_Item_Data*> ItemPool_Directory;                                      // 0x03C0 (size: 0x10)
    class UListView* Container_FileContainer;                                         // 0x03D0 (size: 0x8)
    TArray<UDlFm_Item_Data*> ItemPool_File;                                           // 0x03D8 (size: 0x10)
    class UDlFmButton* Button_Delete;                                                 // 0x03E8 (size: 0x8)
    EDlFm_DialogEventType Type_When_DialogDeleteConfirm_Absent;                       // 0x03F0 (size: 0x1)
    class UDlFm_DialogDelete_Logic* Dialog_DeleteConfirm;                             // 0x03F8 (size: 0x8)
    class UDlFmButton* Button_Rename;                                                 // 0x0400 (size: 0x8)
    class UDlFmButton* Button_Cut;                                                    // 0x0408 (size: 0x8)
    class UDlFmButton* Button_Copy;                                                   // 0x0410 (size: 0x8)
    class UDlFmButton* Button_Paste;                                                  // 0x0418 (size: 0x8)
    EDlFm_DialogEventType Type_When_DialogPasteTargetAlreadyExist_Absent;             // 0x0420 (size: 0x1)
    class UDlFm_DialogPasteOverwrite_Logic* Dialog_PasteTargetAlreadyExist;           // 0x0428 (size: 0x8)
    bool bTryCleanEmptyDirAfterCutPaste;                                              // 0x0434 (size: 0x1)
    class UDlFmButton* Button_Refresh;                                                // 0x0438 (size: 0x8)
    class UDlFmButton* Button_BrowseTo_ParentDir;                                     // 0x0440 (size: 0x8)
    FString NewDirDefaultName;                                                        // 0x0448 (size: 0x10)
    class UDlFmButton* Button_MakeDir;                                                // 0x0458 (size: 0x8)
    class UDlFm_DialogNewItem_Logic* Dialog_MakeDir;                                  // 0x0460 (size: 0x8)
    FString NewFileDefaultName;                                                       // 0x0468 (size: 0x10)
    class UDlFmButton* Button_CreateFile;                                             // 0x0478 (size: 0x8)
    class UDlFm_DialogNewItem_Logic* Dialog_CreateFile;                               // 0x0480 (size: 0x8)
    class UComboBoxString* Combo_ExtensionFilter;                                     // 0x0488 (size: 0x8)
    bool bSelectCurrentPathWhenNothingSelect;                                         // 0x0490 (size: 0x1)
    class UDlFmButton* Button_SelectConfirm;                                          // 0x0498 (size: 0x8)
    class UWidget* Container_FunctionButton;                                          // 0x04A0 (size: 0x8)

    void OnInternalSelectionChanged_ExtensionFilter(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnInternalDialog_PasteTargetAlreadyExist(EDlFm_DialogEventType Type);
    void OnInternalDialog_MakeDir(EDlFm_DialogEventType Type);
    void OnInternalDialog_DeleteConfirm(EDlFm_DialogEventType Type);
    void OnInternalDialog_CreateFile(EDlFm_DialogEventType Type);
    void OnInternalCommit_Search(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnInternalCommit_FilePath(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnInternalClicked_SelectConfirm();
    void OnInternalClicked_Rename();
    void OnInternalClicked_Refresh();
    void OnInternalClicked_Paste();
    void OnInternalClicked_MakeDir();
    void OnInternalClicked_Delete();
    void OnInternalClicked_Cut();
    void OnInternalClicked_CreateFile();
    void OnInternalClicked_Copy();
    void OnInternalClicked_BrowseParentDir();
    void OnInternalClick_SortBySize();
    void OnInternalClick_SortByName();
    void OnInternalClick_SortByModifyTime();
    void OnInternalClick_SortByFileType();
    void OnInternalClick_SortByCreationTime();
    void OnInternalClick_SortByAccessTime();
    void OnInternalClick_GoToSearchedFileLocation();
    void OnInternalClick_DirGoForward();
    void OnInternalClick_DirGoBack();
    void OnInternalCheckStateChanged_ShowFile(bool Val);
    void OnInternalCheckStateChanged_ShowDir(bool Val);
    void OnInternalChanged_MultiSelect_SelectAll(bool Val);
    void OnInternalChanged_MultiSelect(bool Val);
    void OnInternal_ItemRenameCommitted(const int32 Index, EDlUI_FileExplorer_ListSegment Segment, const FText& Name);
    void OnInternal_ItemFunctionButtonClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment);
    void OnInternal_ItemClicked(const int32 Index, EDlUI_FileExplorer_ListSegment ListSegment);
    void OnFileListSelectConfirmed__DelegateSignature(TArray<FDlUI_FileExplorer_ItemInfo> FileNodeList);
    void Func_RefreshInternalText(int32 FolderCount, int32 FileCount);
    void Func_Refresh();
    FString Func_GetCurrentPathName();
    void Func_BrowseToPath(FString Val);
    void Func_BrowseForward();
    void Func_BrowseBackward();
}; // Size: 0x5F8

class UDlFmResizeDraggable_Logic : public UUserWidget
{
    bool bLimitResizeWidth;                                                           // 0x0260 (size: 0x1)
    FFloatInterval LimitResizeWidthArrange;                                           // 0x0264 (size: 0x8)
    bool bLimitResizeHeight;                                                          // 0x026C (size: 0x1)
    FFloatInterval LimitResizeHeightArrange;                                          // 0x0270 (size: 0x8)
    bool bLimitToBiggerThanDesiredSize;                                               // 0x0278 (size: 0x1)
    class UBorder* Border_DragHandle;                                                 // 0x0280 (size: 0x8)
    class UBorder* Border_ResizeHandle_RightDown;                                     // 0x0288 (size: 0x8)
    class UBorder* Border_ResizeHandle_RightUp;                                       // 0x0290 (size: 0x8)
    class UBorder* Border_ResizeHandle_LeftDown;                                      // 0x0298 (size: 0x8)
    class UBorder* Border_ResizeHandle_LeftUp;                                        // 0x02A0 (size: 0x8)
    class UBorder* Border_ResizeHandle_LeftOnly;                                      // 0x02A8 (size: 0x8)
    class UBorder* Border_ResizeHandle_RightOnly;                                     // 0x02B0 (size: 0x8)
    class UBorder* Border_ResizeHandle_UpOnly;                                        // 0x02B8 (size: 0x8)
    class UBorder* Border_ResizeHandle_DownOnly;                                      // 0x02C0 (size: 0x8)
    class UDlFmButton* Button_Close;                                                  // 0x02C8 (size: 0x8)
    class UCanvasPanelSlot* ParentCanvasSlot;                                         // 0x02D0 (size: 0x8)
    class UCanvasPanel* ParentCanvas;                                                 // 0x02F8 (size: 0x8)

    FEventReply OnMouseButtonDown_ResizeHandle_UpOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_RightUp(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_RightOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_RightDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_LeftUp(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_LeftOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_LeftDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_ResizeHandle_DownOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseButtonDown_DragHandle(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    void OnInternalClick_Close();
}; // Size: 0x300

class UDlFm_DialogDelete_Logic : public UDlFmDialog_Base_Logic
{
    class UTextBlock* Text_DeleteInfo;                                                // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class UDlFm_DialogNewItem_Logic : public UDlFmDialog_Base_Logic
{
    class UEditableText* Text_NewName;                                                // 0x02D8 (size: 0x8)
    class UWidget* WShow_IllegalNameWarning;                                          // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class UDlFm_DialogPasteOverwrite_Logic : public UDlFmDialog_Base_Logic
{
    class UTextBlock* Text_CounterInfo;                                               // 0x02C8 (size: 0x8)
    class UTextBlock* Text_ItemName_Src;                                              // 0x02D0 (size: 0x8)
    class UTextBlock* Text_AccessDate_Src;                                            // 0x02D8 (size: 0x8)
    class UTextBlock* Text_CreationDate_Src;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* Text_ModificationDate_Src;                                      // 0x02E8 (size: 0x8)
    class UWidget* WShow_ReadOnly_Src;                                                // 0x02F0 (size: 0x8)
    class UTextBlock* Text_Size_Src;                                                  // 0x02F8 (size: 0x8)
    class UTextBlock* Text_ItemName_Des;                                              // 0x0300 (size: 0x8)
    class UTextBlock* Text_AccessDate_Des;                                            // 0x0308 (size: 0x8)
    class UTextBlock* Text_CreationDate_Des;                                          // 0x0310 (size: 0x8)
    class UTextBlock* Text_ModificationDate_Des;                                      // 0x0318 (size: 0x8)
    class UWidget* WShow_ReadOnly_Des;                                                // 0x0320 (size: 0x8)
    class UTextBlock* Text_Size_Des;                                                  // 0x0328 (size: 0x8)

}; // Size: 0x330

class UDlFm_Item_Data : public UObject
{
}; // Size: 0x48

class UDlFm_Item_Logic : public UUserWidget
{
    class UDlFmFilteredToggleButton* Button_Background;                               // 0x0268 (size: 0x8)
    FSlateBrush IconBrush_Directory;                                                  // 0x0270 (size: 0x88)
    FSlateBrush IconBrush_NormalFile;                                                 // 0x02F8 (size: 0x88)
    TMap<FString, FSlateBrush> IconBrush_SpecialFile;                                 // 0x0380 (size: 0x50)
    class UDlFmFilteredEditableText* Text_ItemName;                                   // 0x03D0 (size: 0x8)
    class UTextBlock* Text_ItemName_Show;                                             // 0x03D8 (size: 0x8)
    class UTextBlock* Text_ItemPath;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* Text_Extension;                                                 // 0x03E8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x03F0 (size: 0x8)
    class UTextBlock* Text_AccessDate;                                                // 0x03F8 (size: 0x8)
    class UTextBlock* Text_CreationDate;                                              // 0x0400 (size: 0x8)
    class UTextBlock* Text_ModificationDate;                                          // 0x0408 (size: 0x8)
    class UWidget* WShow_ReadOnly;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* Text_Size;                                                      // 0x0418 (size: 0x8)
    class UDlFmFilteredToggleButton* Toggle_Selectable_InMultiMode;                   // 0x0420 (size: 0x8)
    class UDlFmButton* Button_Function;                                               // 0x0428 (size: 0x8)

    void OnInternalCommit_Name(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnInternalClicked_FunctionButton();
    void OnInternalClicked_Background(bool Val);
    void OnInternalChanged_Select(bool Val);
}; // Size: 0x438

class UFileManagerDeveloperSettings : public UDeveloperSettings
{
    TSoftClassPtr<UUserWidget> FilePickerWidget;                                      // 0x0038 (size: 0x28)

}; // Size: 0x60

#endif
