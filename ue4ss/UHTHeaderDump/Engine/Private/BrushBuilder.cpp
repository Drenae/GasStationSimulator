#include "BrushBuilder.h"

UBrushBuilder::UBrushBuilder() {
    this->BitmapFilename = TEXT("BBGeneric");
    this->tooltip = TEXT("BrushBuilderName_Generic");
    this->NotifyBadParams = true;
    this->MergeCoplanars = false;
}


