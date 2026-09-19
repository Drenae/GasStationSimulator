#include "BugReportUploaderWidgetBase.h"

UBugReportUploaderWidgetBase::UBugReportUploaderWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
}

void UBugReportUploaderWidgetBase::SendReport(FReportRequest Input) {
}

void UBugReportUploaderWidgetBase::OnScreenshotCreated(int32 Width, int32 Height, const TArray<FColor>& Colors, const FString& ScreenshotFilename) {
}

TArray<FFileInfoData> UBugReportUploaderWidgetBase::CreateFileInfosFromSavePaths(TArray<FString> Paths) {
    return TArray<FFileInfoData>();
}


