#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "PcBaseTab.generated.h"

class UMainPC;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPcBaseTab : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFullScreenOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainPC* MainPCREF;
    
    UPcBaseTab();

    UFUNCTION(BlueprintCallable)
    void ResetFocuse();
    
    UFUNCTION(BlueprintCallable)
    void OnTabOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChangedToAnother();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GamePadLevelUpButton();
    
};

