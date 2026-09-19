#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FileInfoData.h"
#include "OnReportSendCompletedDelegate.h"
#include "OnReportSendProgressDelegate.h"
#include "OnScreenshotGeneratedDelegate.h"
#include "ReportRequest.h"
#include "BugReportUploaderWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INGAMEBUGREPORTER_API UBugReportUploaderWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ScreenshotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ScreenshotIdentifier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReportSendProgress OnReportSendProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReportSendCompleted OnReportSendCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenshotGenerated OnScreenshotGenerated;
    
public:
    UBugReportUploaderWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SendReport(FReportRequest Input);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenshotCreated(int32 Width, int32 Height, const TArray<FColor>& Colors, const FString& ScreenshotFilename);
    
    UFUNCTION(BlueprintCallable)
    TArray<FFileInfoData> CreateFileInfosFromSavePaths(TArray<FString> Paths);
    
};

