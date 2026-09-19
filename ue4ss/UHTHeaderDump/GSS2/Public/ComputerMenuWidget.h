#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ComputerMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UComputerMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AditionalkeySelected;
    
    UComputerMenuWidget();

    UFUNCTION(BlueprintCallable)
    void OnRep_AditionalkeySelected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AditionalkeyChanged();
    
};

