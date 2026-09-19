#include "DlFmResizeDraggable_Logic.h"

UDlFmResizeDraggable_Logic::UDlFmResizeDraggable_Logic() : UUserWidget(FObjectInitializer::Get()) {
    this->bLimitResizeWidth = false;
    this->bLimitResizeHeight = false;
    this->bLimitToBiggerThanDesiredSize = false;
    this->Border_DragHandle = NULL;
    this->Border_ResizeHandle_RightDown = NULL;
    this->Border_ResizeHandle_RightUp = NULL;
    this->Border_ResizeHandle_LeftDown = NULL;
    this->Border_ResizeHandle_LeftUp = NULL;
    this->Border_ResizeHandle_LeftOnly = NULL;
    this->Border_ResizeHandle_RightOnly = NULL;
    this->Border_ResizeHandle_UpOnly = NULL;
    this->Border_ResizeHandle_DownOnly = NULL;
    this->Button_Close = NULL;
    this->ParentCanvasSlot = NULL;
    this->ParentCanvas = NULL;
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_UpOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_RightUp(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_RightOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_RightDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_LeftUp(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_LeftOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_LeftDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_ResizeHandle_DownOnly(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

FEventReply UDlFmResizeDraggable_Logic::OnMouseButtonDown_DragHandle(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

void UDlFmResizeDraggable_Logic::OnInternalClick_Close() {
}


