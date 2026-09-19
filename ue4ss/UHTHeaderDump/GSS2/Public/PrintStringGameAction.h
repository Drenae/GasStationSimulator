#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "PrintStringGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPrintStringGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOnScreen;
    
    UPrintStringGameAction();

};

