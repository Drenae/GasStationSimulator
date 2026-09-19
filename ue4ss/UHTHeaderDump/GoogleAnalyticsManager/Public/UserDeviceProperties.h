#pragma once
#include "CoreMinimal.h"
#include "UserPropertyIntValue.h"
#include "UserPropertyStringValue.h"
#include "UserDeviceProperties.generated.h"

USTRUCT(BlueprintType)
struct GOOGLEANALYTICSMANAGER_API FUserDeviceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_cpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyIntValue device_cpu_cores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyIntValue device_cpu_threads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_gpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyIntValue device_gpu_vram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_gpu_is_dedicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyIntValue device_ram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_os;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_output;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPropertyStringValue device_resolution;
    
    FUserDeviceProperties();
};

