#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "SpawnEventGameAction.generated.h"

class UGSSEvent;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USpawnEventGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSEvent> Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEvent;
    
    USpawnEventGameAction();

};

