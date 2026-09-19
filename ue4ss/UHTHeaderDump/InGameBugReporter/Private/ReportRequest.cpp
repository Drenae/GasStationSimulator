#include "ReportRequest.h"

FReportRequest::FReportRequest() {
    this->bIncludeScreenshot = false;
    this->bIncludeBugfile = false;
    this->bIncludeSaveFiles = false;
    this->Emotion = EReportEmotion::VERY_DISSATISFIED;
    this->Type = EReportType::Issue;
    this->bAllowContactEmail = false;
    this->Category = EReportCategory::None;
}

