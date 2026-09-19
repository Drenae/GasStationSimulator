#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.h"
#include "GameAction.h"
#include "CreateNotificationGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UCreateNotificationGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotificationType NotificationType;
    
    UCreateNotificationGameAction();

};

