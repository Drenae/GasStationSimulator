#include "FieldSystemMetaDataFilter.h"

UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilterType = Field_Filter_Dynamic;
}

UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType) {
    return NULL;
}


