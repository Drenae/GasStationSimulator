#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "KeyItem.generated.h"

class UKeyItemWidget;

UCLASS(Blueprintable)
class GSS2_API AKeyItem : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyItemWidget* BindWidget;
    
    AKeyItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TutorialCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayDelayed();
    
};

