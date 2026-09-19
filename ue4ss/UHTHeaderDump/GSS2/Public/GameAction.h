#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UGameAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayOnGameLoaded;
    
    UGameAction();

};

