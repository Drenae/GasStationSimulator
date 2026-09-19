#pragma once
#include "CoreMinimal.h"
#include "EGooglePADConfirmationDialogStatus.generated.h"

UENUM(BlueprintType)
enum class EGooglePADConfirmationDialogStatus : uint8 {
    AssetPack_CONFIRMATION_DIALOG_UNKNOWN,
    AssetPack_CONFIRMATION_DIALOG_PENDING,
    AssetPack_CONFIRMATION_DIALOG_APPROVED,
    AssetPack_CONFIRMATION_DIALOG_CANCELED,
};

