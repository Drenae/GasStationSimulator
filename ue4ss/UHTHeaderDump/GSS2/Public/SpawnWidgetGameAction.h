#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "SpawnWidgetGameAction.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USpawnWidgetGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetToSpawn;
    
    USpawnWidgetGameAction();

    UFUNCTION(BlueprintCallable)
    void OnWidgetLoaded();
    
};

