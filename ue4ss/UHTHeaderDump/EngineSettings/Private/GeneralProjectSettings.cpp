#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("DRAGO Entertainment");
    this->CompanyDistinguishedName = TEXT("DRAGO Entertainment");
    this->CopyrightNotice = TEXT("DRAGO Entertainment (c) 2025");
    this->Homepage = TEXT("www.drago-entertainment.com");
    this->ProjectName = TEXT("Gas Station Simulator");
    this->ProjectVersion = TEXT("1.0.0.5");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Gas Station Simulator"));
    this->ProjectDebugTitleInfo = FText::FromString(TEXT("GSS"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = false;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}


