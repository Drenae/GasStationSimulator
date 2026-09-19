#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "UnLoadLevelGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UUnLoadLevelGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UUnLoadLevelGameAction();

};

