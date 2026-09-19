#ifndef UE4SS_SDK_InGameBugReporter_HPP
#define UE4SS_SDK_InGameBugReporter_HPP

#include "InGameBugReporter_enums.hpp"

struct FBugReportMachineSpec
{
    FString Platform;                                                                 // 0x0000 (size: 0x10)
    FCPUMetrics CPU;                                                                  // 0x0010 (size: 0x40)
    FGPUMetrics GPU;                                                                  // 0x0050 (size: 0x70)
    FMemoryMetrics RAM;                                                               // 0x00C0 (size: 0x28)
    FDiskMetrics Disk;                                                                // 0x00E8 (size: 0x10)
    EInputType InputType;                                                             // 0x00F8 (size: 0x1)
    FString OutputDevice;                                                             // 0x0100 (size: 0x10)
    FScreenResolution ScreenResolution;                                               // 0x0110 (size: 0x8)
    FString Language;                                                                 // 0x0118 (size: 0x10)
    FString Locale;                                                                   // 0x0128 (size: 0x10)

}; // Size: 0x138

struct FCPUMetrics
{
    FString Brand;                                                                    // 0x0000 (size: 0x10)
    FString Chipset;                                                                  // 0x0010 (size: 0x10)
    FString Vendor;                                                                   // 0x0020 (size: 0x10)
    int32 Cores;                                                                      // 0x0030 (size: 0x4)
    int32 CoresWithHyperthread;                                                       // 0x0034 (size: 0x4)
    float UsePercentage;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FDiskMetrics
{
}; // Size: 0x10

struct FFileInfoData
{
    FString FilePath;                                                                 // 0x0000 (size: 0x10)
    EFileType FileType;                                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGPUMetrics
{
    FString DeviceDescription;                                                        // 0x0000 (size: 0x10)
    FString ProviderName;                                                             // 0x0010 (size: 0x10)
    FString InternalDriverVersion;                                                    // 0x0020 (size: 0x10)
    FString UserDriverVersion;                                                        // 0x0030 (size: 0x10)
    FString DriverDate;                                                               // 0x0040 (size: 0x10)
    FString RHIName;                                                                  // 0x0050 (size: 0x10)
    FString Brand;                                                                    // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FMemoryMetrics
{
    int32 TotalMemoryGB;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x28

struct FReportBody
{
    EReportEmotion Emotion;                                                           // 0x0000 (size: 0x1)
    EReportType Type;                                                                 // 0x0001 (size: 0x1)
    FString ContactEmail;                                                             // 0x0008 (size: 0x10)
    bool bAllowContactEmail;                                                          // 0x0018 (size: 0x1)
    FString Version;                                                                  // 0x0020 (size: 0x10)
    EReportCategory Category;                                                         // 0x0030 (size: 0x1)
    FString Comment;                                                                  // 0x0038 (size: 0x10)
    FBugReportMachineSpec MachineSpec;                                                // 0x0048 (size: 0x138)

}; // Size: 0x180

struct FReportRequest
{
    bool bIncludeScreenshot;                                                          // 0x0000 (size: 0x1)
    bool bIncludeBugfile;                                                             // 0x0001 (size: 0x1)
    bool bIncludeSaveFiles;                                                           // 0x0002 (size: 0x1)
    TArray<FFileInfoData> Saves;                                                      // 0x0008 (size: 0x10)
    EReportEmotion Emotion;                                                           // 0x0018 (size: 0x1)
    EReportType Type;                                                                 // 0x0019 (size: 0x1)
    FString ContactEmail;                                                             // 0x0020 (size: 0x10)
    bool bAllowContactEmail;                                                          // 0x0030 (size: 0x1)
    FString Version;                                                                  // 0x0038 (size: 0x10)
    EReportCategory Category;                                                         // 0x0048 (size: 0x1)
    FString Comment;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FScreenResolution
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class IBugReportingInterface : public IInterface
{

    void GetBugReportingDump(FString& InOutBugDump);
}; // Size: 0x28

class UBugReportUploaderWidgetBase : public UUserWidget
{
    TArray<uint8> ScreenshotData;                                                     // 0x0270 (size: 0x10)
    FGuid ScreenshotIdentifier;                                                       // 0x0280 (size: 0x10)
    FBugReportUploaderWidgetBaseOnReportSendProgress OnReportSendProgress;            // 0x0298 (size: 0x10)
    void OnReportSendProgress(float PercentOfDataSend);
    FBugReportUploaderWidgetBaseOnReportSendCompleted OnReportSendCompleted;          // 0x02A8 (size: 0x10)
    void OnReportSendCompleted(bool bCompletedSuccessfully, FString ReportId, FString ErrorMessage);
    FBugReportUploaderWidgetBaseOnScreenshotGenerated OnScreenshotGenerated;          // 0x02B8 (size: 0x10)
    void OnScreenshotGenerated(class UTexture2D* GeneratedScreenshotPreview);

    void SendReport(FReportRequest Input);
    void OnScreenshotCreated(int32 Width, int32 Height, const TArray<FColor>& Colors, FString ScreenshotFilename);
    TArray<FFileInfoData> CreateFileInfosFromSavePaths(TArray<FString> Paths);
}; // Size: 0x2C8

class UBugReportingComponent : public UActorComponent
{
    int32 ContextPriority;                                                            // 0x00B4 (size: 0x4)
    TSubclassOf<class UBugReportUploaderWidgetBase> BugreportingWidgetClass;          // 0x00B8 (size: 0x8)
    class UBugReportUploaderWidgetBase* CreatedWidget;                                // 0x00C0 (size: 0x8)

    void ToggleBugreportingWidget();
    void RestoreInput();
    void RemoveInput();
}; // Size: 0xD0

class UBugReportingSettings : public UDeveloperSettings
{
    FString ApiKey;                                                                   // 0x0038 (size: 0x10)
    FString ApiHeader;                                                                // 0x0048 (size: 0x10)
    FString HTTPMethod;                                                               // 0x0058 (size: 0x10)
    FString ApiURL;                                                                   // 0x0068 (size: 0x10)

}; // Size: 0x78

class UInGameBugReporterTypes : public UObject
{
}; // Size: 0x28

#endif
