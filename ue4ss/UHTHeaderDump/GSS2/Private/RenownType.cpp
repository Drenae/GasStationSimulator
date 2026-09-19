#include "RenownType.h"

URenownType::URenownType() {
    this->RenownProgressUpperCap = 100;
    this->RenownProgressLowerCap = 0;
    this->RenownProgress = 0;
}

void URenownType::TryShowVolcanoTutorial() {
}

void URenownType::StartGameRenown() {
}

void URenownType::PostRenownChangeEvent(float ValueChanged) {
}

void URenownType::InitializeRenown() {
}

void URenownType::ForceSetRenownProgress(int32 NewCount) {
}

int32 URenownType::AddRenownProgress(int32 Count, UObject* Instiginator, ERenown_Reasons SourceOfRenown, const FString& Reason) {
    return 0;
}


