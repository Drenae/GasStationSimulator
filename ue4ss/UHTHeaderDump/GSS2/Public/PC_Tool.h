#pragma once
#include "CoreMinimal.h"
#include "BasketItemStruct.h"
#include "EToolItemState.h"
#include "GSSInnerWidget.h"
#include "KeyItemUnlock.h"
#include "PC_Tool.generated.h"

class UGSSButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_Tool : public UGSSInnerWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ToolIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ToolName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* Main_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasketItemStruct ToolStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyItemUnlock KeyItemStruct;
    
    UPC_Tool();

    UFUNCTION(BlueprintCallable)
    void TryUnlockItem();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetData(FBasketItemStruct InToolStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChecked(EToolItemState bIsUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUnlocked(FBasketItemStruct Item);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsUnlockedInGameState();
    
    UFUNCTION(BlueprintCallable)
    EToolItemState CheckIsItemUnlocked();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllowQuest();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllowBuildingLevel();
    
};

