#include "RenownSubsystem.h"
#include "Templates/SubclassOf.h"

URenownSubsystem::URenownSubsystem() {
    this->RenownPopularity = NULL;
    this->AreRenownsInitialized = false;
}

void URenownSubsystem::TryInitRenowns() {
}

void URenownSubsystem::StartGame() {
}

TArray<FSavedRenownEntity> URenownSubsystem::SaveRenowns() {
    return TArray<FSavedRenownEntity>();
}

void URenownSubsystem::OnWorldBeginPlay() {
}

void URenownSubsystem::LoadRenowns(TArray<FSavedRenownEntity> RenownsToLoad) {
}

int32 URenownSubsystem::HandleRenownChange(int32 Amount, UObject* Instiginator, ERenown_Reasons SourceOfRenown, const FString& Reason) {
    return 0;
}

void URenownSubsystem::HandlePopularityRenownSaveConversion(int32 Progress, int32 Level) {
}

URenownPopularity* URenownSubsystem::GetRenownPopularity() {
    return NULL;
}

URenownType* URenownSubsystem::GetRenownByClass(TSubclassOf<URenownType> RenownClass) {
    return NULL;
}

TArray<URenownType*> URenownSubsystem::GetApplicableRenowns() {
    return TArray<URenownType*>();
}

void URenownSubsystem::ForceSetMaxRenown() {
}


