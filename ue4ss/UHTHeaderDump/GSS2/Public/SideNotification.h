#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.h"
#include "ESpecialCharacterType.h"
#include "GSSBaseWidget.h"
#include "SideNotification.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USideNotification : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotificationType NotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialCharacterType SpecialCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NotificationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    USideNotification();

    UFUNCTION(BlueprintCallable)
    int32 UpdateNotification(int32 InAmount, bool Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateNotification();
    
};

