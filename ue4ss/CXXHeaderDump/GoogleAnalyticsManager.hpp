#ifndef UE4SS_SDK_GoogleAnalyticsManager_HPP
#define UE4SS_SDK_GoogleAnalyticsManager_HPP

struct FAnalyticsMeasurementBody
{
    FString client_id;                                                                // 0x0000 (size: 0x10)
    FJsonObjectWrapper user_properties;                                               // 0x0010 (size: 0x20)
    TArray<FJsonObjectWrapper> events;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FDeviceDataGatheredEvent
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FJsonObjectWrapper params;                                                        // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FEventToQueue
{
}; // Size: 0x60

struct FMachineSpec
{
    FString CPU;                                                                      // 0x0000 (size: 0x10)
    int32 NumberOfCores;                                                              // 0x0010 (size: 0x4)
    int32 NumberOfThreads;                                                            // 0x0014 (size: 0x4)
    bool bHasDedicatedGraphics;                                                       // 0x0018 (size: 0x1)
    FString GPU;                                                                      // 0x0020 (size: 0x10)
    int32 VRAMGBs;                                                                    // 0x0030 (size: 0x4)
    int32 PhysicalMemoryGBs;                                                          // 0x0034 (size: 0x4)
    FString OutputDevice;                                                             // 0x0038 (size: 0x10)
    FString Resolution;                                                               // 0x0048 (size: 0x10)
    FString InputDevice;                                                              // 0x0058 (size: 0x10)
    FString Platform;                                                                 // 0x0068 (size: 0x10)
    bool bIsValid;                                                                    // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FUserDeviceProperties
{
    FUserPropertyStringValue device_cpu;                                              // 0x0000 (size: 0x10)
    FUserPropertyIntValue device_cpu_cores;                                           // 0x0010 (size: 0x4)
    FUserPropertyIntValue device_cpu_threads;                                         // 0x0014 (size: 0x4)
    FUserPropertyStringValue device_gpu;                                              // 0x0018 (size: 0x10)
    FUserPropertyIntValue device_gpu_vram;                                            // 0x0028 (size: 0x4)
    FUserPropertyStringValue device_gpu_is_dedicated;                                 // 0x0030 (size: 0x10)
    FUserPropertyIntValue device_ram;                                                 // 0x0040 (size: 0x4)
    FUserPropertyStringValue device_input;                                            // 0x0048 (size: 0x10)
    FUserPropertyStringValue device_os;                                               // 0x0058 (size: 0x10)
    FUserPropertyStringValue device_output;                                           // 0x0068 (size: 0x10)
    FUserPropertyStringValue device_resolution;                                       // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FUserPropertyIntValue
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FUserPropertyStringValue
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

class UGoogleAnalyticsManagerSettings : public UDeveloperSettings
{
    FString ApiSecret;                                                                // 0x0038 (size: 0x10)
    FString MeasurementID;                                                            // 0x0048 (size: 0x10)
    int32 SendEventsFrequency;                                                        // 0x0058 (size: 0x4)
    FName CurrentGameUpdate;                                                          // 0x005C (size: 0x8)
    bool bSendEventsInPIE;                                                            // 0x0064 (size: 0x1)
    bool bSendEventsAsInternal;                                                       // 0x0065 (size: 0x1)

}; // Size: 0x68

class UGoogleAnalyticsManagerSubsystem : public UGameInstanceSubsystem
{
    bool bInitialized;                                                                // 0x0030 (size: 0x1)
    FMachineSpec CurrentMachineSpec;                                                  // 0x0038 (size: 0x80)
    FGuid UserId;                                                                     // 0x00B8 (size: 0x10)
    FGuid SessionId;                                                                  // 0x00C8 (size: 0x10)
    FGoogleAnalyticsManagerSubsystemOnAnalyticsEventSendCompleted OnAnalyticsEventSendCompleted; // 0x00E0 (size: 0x10)
    void OnAnalyticsEventSendCompleted(bool bCompletedSuccessfully, FString ErrorMessage);

    void SendEventData(FJsonObjectWrapper JsonSerializedEventData, FJsonObjectWrapper JsonSerializedUserData, bool bAddEngagementTime);
    void ReportCustomEvent(FString EventName, TMap<FString, FString> UserParams, TMap<FString, FString> params, bool bAddEngagementTime);
    void QueueCustomEvent(FString EventName, TMap<FString, FString> params);
    TMap<FString, FString> MachineSpecsAsMap();
    FMachineSpec GatherMachineSpecData(class ULocalPlayer* LP);
    void AddUserCustomDimension(const FString Name, const FString Value);
}; // Size: 0x160

#endif
