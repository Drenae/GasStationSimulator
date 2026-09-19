#include "PC_Tool.h"

UPC_Tool::UPC_Tool() {
    this->Price = NULL;
    this->ToolIcon = NULL;
    this->ToolName = NULL;
    this->Main_Button = NULL;
}

void UPC_Tool::TryUnlockItem() {
}

void UPC_Tool::SetWidgetData(FBasketItemStruct InToolStruct) {
}



bool UPC_Tool::CheckIsUnlockedInGameState() {
    return false;
}

EToolItemState UPC_Tool::CheckIsItemUnlocked() {
    return EToolItemState::UNLOCKED;
}

bool UPC_Tool::CheckAllowQuest() {
    return false;
}

bool UPC_Tool::CheckAllowBuildingLevel() {
    return false;
}


