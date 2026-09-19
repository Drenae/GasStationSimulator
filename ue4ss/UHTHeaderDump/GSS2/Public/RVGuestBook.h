#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "RVGuestBook.generated.h"

class UWidgetInteractionComponent;

UCLASS(Blueprintable)
class GSS2_API ARVGuestBook : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* InteractionWidget;
    
    ARVGuestBook(const FObjectInitializer& ObjectInitializer);

};

