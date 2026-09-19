#pragma once
#include "CoreMinimal.h"
#include "FileSDKCopyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFileSDKCopyDelegate, int32, KilobytesWritten, int32, TotalKilobytes);

