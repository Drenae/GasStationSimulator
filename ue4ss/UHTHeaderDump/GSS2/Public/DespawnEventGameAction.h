#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "DespawnEventGameAction.generated.h"

class UGSSEvent;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UDespawnEventGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSEvent> Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerFinishEvent;
    
    UDespawnEventGameAction();

};

