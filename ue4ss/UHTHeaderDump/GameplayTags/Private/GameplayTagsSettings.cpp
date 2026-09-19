#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../GSS2/Config/DefaultGameplayTags.ini");
    this->GameplayTagList.AddDefaulted(595);
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagRedirects.AddDefaulted(18);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


