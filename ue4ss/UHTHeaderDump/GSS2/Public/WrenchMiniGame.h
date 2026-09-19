#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "GSSBaseWidget.h"
#include "OnWrenchMiniGameResultDelegate.h"
#include "StorageCarPart.h"
#include "WrenchMiniGame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UWrenchMiniGame : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWrenchMiniGameResult WrenchMiniGameResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarPartType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStorageCarPart CarPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAssembling;
    
    UWrenchMiniGame();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeWidget();
    
};

