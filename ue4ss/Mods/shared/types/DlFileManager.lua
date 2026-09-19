---@meta

---@class FDlUI_FileExplorer_ItemInfo
---@field Name FString
---@field CreationTime FDateTime
---@field AccessTime FDateTime
---@field ModificationTime FDateTime
---@field FileSize int64
---@field bIsDirectory boolean
---@field bIsReadOnly boolean
---@field bIsValid boolean
local FDlUI_FileExplorer_ItemInfo = {}



---@class UDlFmButton : UContentWidget
---@field GapTime float
---@field Paint_OverflowPercent FVector2D
---@field Paint_OffsetPercent FVector2D
---@field Style USlateWidgetStyleAsset
---@field WidgetStyle FButtonStyle
---@field ColorAndOpacity FLinearColor
---@field BackgroundColor FLinearColor
---@field ClickMethod EButtonClickMethod::Type
---@field TouchMethod EButtonTouchMethod::Type
---@field PressMethod EButtonPressMethod::Type
---@field IsFocusable boolean
---@field OnFilteredReleased FDlFmButtonOnFilteredReleased
---@field OnFilteredClicked FDlFmButtonOnFilteredClicked
---@field OnFilteredPressed FDlFmButtonOnFilteredPressed
---@field OnClicked FDlFmButtonOnClicked
---@field OnPressed FDlFmButtonOnPressed
---@field OnReleased FDlFmButtonOnReleased
---@field OnHovered FDlFmButtonOnHovered
---@field OnUnhovered FDlFmButtonOnUnhovered
local UDlFmButton = {}

---@param InTouchMethod EButtonTouchMethod::Type
function UDlFmButton:SetTouchMethod(InTouchMethod) end
---@param InStyle FButtonStyle
function UDlFmButton:SetStyle(InStyle) end
---@param InPressMethod EButtonPressMethod::Type
function UDlFmButton:SetPressMethod(InPressMethod) end
---@param InColorAndOpacity FLinearColor
function UDlFmButton:SetColorAndOpacity(InColorAndOpacity) end
---@param InClickMethod EButtonClickMethod::Type
function UDlFmButton:SetClickMethod(InClickMethod) end
---@param InBackgroundColor FLinearColor
function UDlFmButton:SetBackgroundColor(InBackgroundColor) end
function UDlFmButton:OnButtonFilteredReleasedEvent__DelegateSignature() end
function UDlFmButton:OnButtonFilteredPressedEvent__DelegateSignature() end
function UDlFmButton:OnButtonFilteredClickedEvent__DelegateSignature() end
---@return boolean
function UDlFmButton:IsPressed() end


---@class UDlFmButtonSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UDlFmButtonSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UDlFmButtonSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UDlFmButtonSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UDlFmButtonSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UDlFmDialog_Base_Logic : UUserWidget
---@field bAutoClose boolean
---@field Button_Close UDlFmButton
---@field Button_Yes UDlFmButton
---@field Button_No UDlFmButton
---@field Button_YesForAll UDlFmButton
---@field Button_NoForAll UDlFmButton
---@field Button_Cancel UDlFmButton
---@field Button_SelectNewerModified UDlFmButton
---@field Button_SelectNewerModified_ForAll UDlFmButton
---@field Button_SelectLarger UDlFmButton
---@field Button_SelectLarger_ForAll UDlFmButton
local UDlFmDialog_Base_Logic = {}

function UDlFmDialog_Base_Logic:OnInternalClick_YesForAll() end
function UDlFmDialog_Base_Logic:OnInternalClick_Yes() end
function UDlFmDialog_Base_Logic:OnInternalClick_SelectNewerModified_ForAll() end
function UDlFmDialog_Base_Logic:OnInternalClick_SelectNewerModified() end
function UDlFmDialog_Base_Logic:OnInternalClick_SelectLarger_ForAll() end
function UDlFmDialog_Base_Logic:OnInternalClick_SelectLarger() end
function UDlFmDialog_Base_Logic:OnInternalClick_NoForAll() end
function UDlFmDialog_Base_Logic:OnInternalClick_No() end
function UDlFmDialog_Base_Logic:OnInternalClick_Close() end
function UDlFmDialog_Base_Logic:OnInternalClick_Cancel() end


---@class UDlFmFilteredEditableText : UEditableText
---@field OnFilteredTextCommitted FDlFmFilteredEditableTextOnFilteredTextCommitted
---@field GapTime float
local UDlFmFilteredEditableText = {}

---@param TextVal FText
---@param CommitMethodVal ETextCommit::Type
function UDlFmFilteredEditableText:OnFilteredTextCommitted_InternalHandle(TextVal, CommitMethodVal) end


---@class UDlFmFilteredToggleButton : UDlFmButton
---@field OnCheckStateChanged FDlFmFilteredToggleButtonOnCheckStateChanged
---@field whenTrue FSlateBrush
---@field whenHoveredTrue FSlateBrush
---@field whenDisabledTrue FSlateBrush
---@field whenFalse FSlateBrush
---@field whenHoveredFalse FSlateBrush
---@field whenDisabledFalse FSlateBrush
---@field initBool boolean
local UDlFmFilteredToggleButton = {}

---@param InIsChecked boolean
function UDlFmFilteredToggleButton:SetIsChecked(InIsChecked) end
---@return boolean
function UDlFmFilteredToggleButton:IsChecked() end
function UDlFmFilteredToggleButton:DlFilteredClick_UpperHandle() end


---@class UDlFmMain_Logic : UUserWidget
---@field OnFileListSelectConfirmed FDlFmMain_LogicOnFileListSelectConfirmed
---@field StartPathType EDlFm_SysPath
---@field Customized_StartPath FString
---@field StartPath_Offset FString
---@field DirPathStack_Depth int32
---@field bUseSingleClickForConfirm boolean
---@field Extension FString
---@field Text_InternalInfo UTextBlock
---@field bAlwaysUseFullPath boolean
---@field Text_FilePath UEditableText
---@field Toggle_MultiSelect UDlFmFilteredToggleButton
---@field Toggle_MultiSelect_SelectAll UDlFmFilteredToggleButton
---@field WShow_IsBusy UWidget
---@field bSearch_AutoAppendAsterisk boolean
---@field Text_SearchContent UEditableText
---@field Button_GoToSearchedFileLocation UDlFmButton
---@field Button_DirGoBack UDlFmButton
---@field Button_DirGoForward UDlFmButton
---@field Button_SortBy_Name UDlFmButton
---@field WShow_SortByName_Ascending UWidget
---@field WShow_SortByName_Descending UWidget
---@field Button_SortBy_Size UDlFmButton
---@field WShow_SortBySize_Ascending UWidget
---@field WShow_SortBySize_Descending UWidget
---@field Button_SortBy_CreationTime UDlFmButton
---@field WShow_SortByCreationTime_Ascending UWidget
---@field WShow_SortByCreationTime_Descending UWidget
---@field Button_SortBy_AccessTime UDlFmButton
---@field WShow_SortByAccessTime_Ascending UWidget
---@field WShow_SortByAccessTime_Descending UWidget
---@field Button_SortBy_ModifyTime UDlFmButton
---@field WShow_SortByModifyTime_Ascending UWidget
---@field WShow_SortByModifyTime_Descending UWidget
---@field Button_SortBy_FileType UDlFmButton
---@field WShow_SortByFileType_Ascending UWidget
---@field WShow_SortByFileType_Descending UWidget
---@field Toggle_ShowDir UDlFmFilteredToggleButton
---@field Toggle_ShowFile UDlFmFilteredToggleButton
---@field Container_DirectoryContainer UListView
---@field ItemPool_Directory TArray<UDlFm_Item_Data>
---@field Container_FileContainer UListView
---@field ItemPool_File TArray<UDlFm_Item_Data>
---@field Button_Delete UDlFmButton
---@field Type_When_DialogDeleteConfirm_Absent EDlFm_DialogEventType
---@field Dialog_DeleteConfirm UDlFm_DialogDelete_Logic
---@field Button_Rename UDlFmButton
---@field Button_Cut UDlFmButton
---@field Button_Copy UDlFmButton
---@field Button_Paste UDlFmButton
---@field Type_When_DialogPasteTargetAlreadyExist_Absent EDlFm_DialogEventType
---@field Dialog_PasteTargetAlreadyExist UDlFm_DialogPasteOverwrite_Logic
---@field bTryCleanEmptyDirAfterCutPaste boolean
---@field Button_Refresh UDlFmButton
---@field Button_BrowseTo_ParentDir UDlFmButton
---@field NewDirDefaultName FString
---@field Button_MakeDir UDlFmButton
---@field Dialog_MakeDir UDlFm_DialogNewItem_Logic
---@field NewFileDefaultName FString
---@field Button_CreateFile UDlFmButton
---@field Dialog_CreateFile UDlFm_DialogNewItem_Logic
---@field Combo_ExtensionFilter UComboBoxString
---@field bSelectCurrentPathWhenNothingSelect boolean
---@field Button_SelectConfirm UDlFmButton
---@field Container_FunctionButton UWidget
local UDlFmMain_Logic = {}

---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UDlFmMain_Logic:OnInternalSelectionChanged_ExtensionFilter(SelectedItem, SelectionType) end
---@param Type EDlFm_DialogEventType
function UDlFmMain_Logic:OnInternalDialog_PasteTargetAlreadyExist(Type) end
---@param Type EDlFm_DialogEventType
function UDlFmMain_Logic:OnInternalDialog_MakeDir(Type) end
---@param Type EDlFm_DialogEventType
function UDlFmMain_Logic:OnInternalDialog_DeleteConfirm(Type) end
---@param Type EDlFm_DialogEventType
function UDlFmMain_Logic:OnInternalDialog_CreateFile(Type) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UDlFmMain_Logic:OnInternalCommit_Search(Text, CommitMethod) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UDlFmMain_Logic:OnInternalCommit_FilePath(Text, CommitMethod) end
function UDlFmMain_Logic:OnInternalClicked_SelectConfirm() end
function UDlFmMain_Logic:OnInternalClicked_Rename() end
function UDlFmMain_Logic:OnInternalClicked_Refresh() end
function UDlFmMain_Logic:OnInternalClicked_Paste() end
function UDlFmMain_Logic:OnInternalClicked_MakeDir() end
function UDlFmMain_Logic:OnInternalClicked_Delete() end
function UDlFmMain_Logic:OnInternalClicked_Cut() end
function UDlFmMain_Logic:OnInternalClicked_CreateFile() end
function UDlFmMain_Logic:OnInternalClicked_Copy() end
function UDlFmMain_Logic:OnInternalClicked_BrowseParentDir() end
function UDlFmMain_Logic:OnInternalClick_SortBySize() end
function UDlFmMain_Logic:OnInternalClick_SortByName() end
function UDlFmMain_Logic:OnInternalClick_SortByModifyTime() end
function UDlFmMain_Logic:OnInternalClick_SortByFileType() end
function UDlFmMain_Logic:OnInternalClick_SortByCreationTime() end
function UDlFmMain_Logic:OnInternalClick_SortByAccessTime() end
function UDlFmMain_Logic:OnInternalClick_GoToSearchedFileLocation() end
function UDlFmMain_Logic:OnInternalClick_DirGoForward() end
function UDlFmMain_Logic:OnInternalClick_DirGoBack() end
---@param Val boolean
function UDlFmMain_Logic:OnInternalCheckStateChanged_ShowFile(Val) end
---@param Val boolean
function UDlFmMain_Logic:OnInternalCheckStateChanged_ShowDir(Val) end
---@param Val boolean
function UDlFmMain_Logic:OnInternalChanged_MultiSelect_SelectAll(Val) end
---@param Val boolean
function UDlFmMain_Logic:OnInternalChanged_MultiSelect(Val) end
---@param Index int32
---@param Segment EDlUI_FileExplorer_ListSegment
---@param Name FText
function UDlFmMain_Logic:OnInternal_ItemRenameCommitted(Index, Segment, Name) end
---@param Index int32
---@param ListSegment EDlUI_FileExplorer_ListSegment
function UDlFmMain_Logic:OnInternal_ItemFunctionButtonClicked(Index, ListSegment) end
---@param Index int32
---@param ListSegment EDlUI_FileExplorer_ListSegment
function UDlFmMain_Logic:OnInternal_ItemClicked(Index, ListSegment) end
---@param FileNodeList TArray<FDlUI_FileExplorer_ItemInfo>
function UDlFmMain_Logic:OnFileListSelectConfirmed__DelegateSignature(FileNodeList) end
---@param FolderCount int32
---@param FileCount int32
function UDlFmMain_Logic:Func_RefreshInternalText(FolderCount, FileCount) end
function UDlFmMain_Logic:Func_Refresh() end
---@return FString
function UDlFmMain_Logic:Func_GetCurrentPathName() end
---@param Val FString
function UDlFmMain_Logic:Func_BrowseToPath(Val) end
function UDlFmMain_Logic:Func_BrowseForward() end
function UDlFmMain_Logic:Func_BrowseBackward() end


---@class UDlFmResizeDraggable_Logic : UUserWidget
---@field bLimitResizeWidth boolean
---@field LimitResizeWidthArrange FFloatInterval
---@field bLimitResizeHeight boolean
---@field LimitResizeHeightArrange FFloatInterval
---@field bLimitToBiggerThanDesiredSize boolean
---@field Border_DragHandle UBorder
---@field Border_ResizeHandle_RightDown UBorder
---@field Border_ResizeHandle_RightUp UBorder
---@field Border_ResizeHandle_LeftDown UBorder
---@field Border_ResizeHandle_LeftUp UBorder
---@field Border_ResizeHandle_LeftOnly UBorder
---@field Border_ResizeHandle_RightOnly UBorder
---@field Border_ResizeHandle_UpOnly UBorder
---@field Border_ResizeHandle_DownOnly UBorder
---@field Button_Close UDlFmButton
---@field ParentCanvasSlot UCanvasPanelSlot
---@field ParentCanvas UCanvasPanel
local UDlFmResizeDraggable_Logic = {}

---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_UpOnly(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_RightUp(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_RightOnly(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_RightDown(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_LeftUp(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_LeftOnly(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_LeftDown(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_ResizeHandle_DownOnly(InGeometry, InMouseEvent) end
---@param InGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UDlFmResizeDraggable_Logic:OnMouseButtonDown_DragHandle(InGeometry, InMouseEvent) end
function UDlFmResizeDraggable_Logic:OnInternalClick_Close() end


---@class UDlFm_DialogDelete_Logic : UDlFmDialog_Base_Logic
---@field Text_DeleteInfo UTextBlock
local UDlFm_DialogDelete_Logic = {}



---@class UDlFm_DialogNewItem_Logic : UDlFmDialog_Base_Logic
---@field Text_NewName UEditableText
---@field WShow_IllegalNameWarning UWidget
local UDlFm_DialogNewItem_Logic = {}



---@class UDlFm_DialogPasteOverwrite_Logic : UDlFmDialog_Base_Logic
---@field Text_CounterInfo UTextBlock
---@field Text_ItemName_Src UTextBlock
---@field Text_AccessDate_Src UTextBlock
---@field Text_CreationDate_Src UTextBlock
---@field Text_ModificationDate_Src UTextBlock
---@field WShow_ReadOnly_Src UWidget
---@field Text_Size_Src UTextBlock
---@field Text_ItemName_Des UTextBlock
---@field Text_AccessDate_Des UTextBlock
---@field Text_CreationDate_Des UTextBlock
---@field Text_ModificationDate_Des UTextBlock
---@field WShow_ReadOnly_Des UWidget
---@field Text_Size_Des UTextBlock
local UDlFm_DialogPasteOverwrite_Logic = {}



---@class UDlFm_Item_Data : UObject
local UDlFm_Item_Data = {}


---@class UDlFm_Item_Logic : UUserWidget
---@field Button_Background UDlFmFilteredToggleButton
---@field IconBrush_Directory FSlateBrush
---@field IconBrush_NormalFile FSlateBrush
---@field IconBrush_SpecialFile TMap<FString, FSlateBrush>
---@field Text_ItemName UDlFmFilteredEditableText
---@field Text_ItemName_Show UTextBlock
---@field Text_ItemPath UTextBlock
---@field Text_Extension UTextBlock
---@field Image_Icon UImage
---@field Text_AccessDate UTextBlock
---@field Text_CreationDate UTextBlock
---@field Text_ModificationDate UTextBlock
---@field WShow_ReadOnly UWidget
---@field Text_Size UTextBlock
---@field Toggle_Selectable_InMultiMode UDlFmFilteredToggleButton
---@field Button_Function UDlFmButton
local UDlFm_Item_Logic = {}

---@param Text FText
---@param CommitMethod ETextCommit::Type
function UDlFm_Item_Logic:OnInternalCommit_Name(Text, CommitMethod) end
function UDlFm_Item_Logic:OnInternalClicked_FunctionButton() end
---@param Val boolean
function UDlFm_Item_Logic:OnInternalClicked_Background(Val) end
---@param Val boolean
function UDlFm_Item_Logic:OnInternalChanged_Select(Val) end


---@class UFileManagerDeveloperSettings : UDeveloperSettings
---@field FilePickerWidget TSoftClassPtr<UUserWidget>
local UFileManagerDeveloperSettings = {}



