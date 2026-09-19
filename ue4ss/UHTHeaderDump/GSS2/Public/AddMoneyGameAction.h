#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "AddMoneyGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UAddMoneyGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyToAdd;
    
    UAddMoneyGameAction();

};

