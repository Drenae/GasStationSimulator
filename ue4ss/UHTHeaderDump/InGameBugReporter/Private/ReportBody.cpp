#include "ReportBody.h"

FReportBody::FReportBody() {
    this->Emotion = EReportEmotion::VERY_DISSATISFIED;
    this->Type = EReportType::Issue;
    this->bAllowContactEmail = false;
    this->Category = EReportCategory::None;
}

