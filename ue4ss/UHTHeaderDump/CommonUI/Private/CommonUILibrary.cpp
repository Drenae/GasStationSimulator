#include "CommonUILibrary.h"
#include "Templates/SubclassOf.h"

UCommonUILibrary::UCommonUILibrary() {
}

FText UCommonUILibrary::FormatTimeToTwoDigitText(int32 Time) {
    return FText::GetEmpty();
}

UWidget* UCommonUILibrary::FindParentWidgetOfType(UWidget* StartingWidget, TSubclassOf<UWidget> Type) {
    return NULL;
}


