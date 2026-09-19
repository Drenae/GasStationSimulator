#include "StatKeeper.h"

UStatKeeper::UStatKeeper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStatKeeper::SaveStats() {
}

void UStatKeeper::LoadStats() {
}

float UStatKeeper::GetValue(EGSS_Stat Stat) {
    return 0.0f;
}

int32 UStatKeeper::GetStatIndex(EGSS_Stat StatToFind) {
    return 0;
}

void UStatKeeper::AddValue(EGSS_Stat Stat, float AddedValue) {
}


