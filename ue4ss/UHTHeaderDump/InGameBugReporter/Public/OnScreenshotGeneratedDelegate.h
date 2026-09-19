#pragma once
#include "CoreMinimal.h"
#include "OnScreenshotGeneratedDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotGenerated, UTexture2D*, GeneratedScreenshotPreview);

