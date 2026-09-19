#pragma once
#include "CoreMinimal.h"
#include "GSSEvent.h"
#include "EventElvis.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class GSS2_API UEventElvis : public UGSSEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacter> ElvisClass;
    
    UEventElvis();

};

