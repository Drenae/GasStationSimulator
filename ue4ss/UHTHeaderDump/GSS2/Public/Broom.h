#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "Broom.generated.h"

class UBroomWidget;

UCLASS(Blueprintable)
class GSS2_API ABroom : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBroomWidget* BroomWidgetInstance;
    
    ABroom(const FObjectInitializer& ObjectInitializer);

};

