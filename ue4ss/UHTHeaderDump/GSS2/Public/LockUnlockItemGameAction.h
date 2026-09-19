#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "LockUnlockItemGameAction.generated.h"

class AItem;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API ULockUnlockItemGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AItem> ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockItem;
    
    ULockUnlockItemGameAction();

};

