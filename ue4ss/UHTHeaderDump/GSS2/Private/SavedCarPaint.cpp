#include "SavedCarPaint.h"

FSavedCarPaint::FSavedCarPaint() {
    this->PaintType = ECustomizationPaintType::NONE;
    this->MaskType = EFinishMaskType::NONE;
    this->ColorIndex1 = 0;
    this->ColorIndex2 = 0;
    this->ColorIndex3 = 0;
    this->bMetal = false;
}

