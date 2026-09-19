#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "EStorageOpenCase.h"
#include "GSSBaseWidget.h"
#include "OnPartSelectedDelegate.h"
#include "PartSelection.generated.h"

class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPartSelection : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarPartType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAssembling;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartSelected OnPartSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStorageOpenCase OpenCase;
    
    UPartSelection();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeWidget(AJunkyardCarWreckCustomizable* CarWreckRef, EStorageOpenCase InOpenCase);
    
};

