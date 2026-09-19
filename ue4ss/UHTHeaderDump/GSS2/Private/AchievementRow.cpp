#include "AchievementRow.h"

FAchievementRow::FAchievementRow() {
    this->AchievementType = EAchievementType::CUSTOM;
    this->StatType = EGSS_Stat::SHOP_CUSTOMER_SERVED;
    this->ValueNeeded = 0.00f;
    this->ValueHave = 0.00f;
    this->AchievementIcon = NULL;
    this->AchievementIconLocked = NULL;
    this->bIsHidden = false;
    this->DlcRequired = EDLCName::NONE;
}

