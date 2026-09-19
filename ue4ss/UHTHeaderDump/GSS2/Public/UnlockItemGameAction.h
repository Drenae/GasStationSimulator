#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "UnlockItemGameAction.generated.h"

class AItem;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UUnlockItemGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemClass;
    
    UUnlockItemGameAction();

};

