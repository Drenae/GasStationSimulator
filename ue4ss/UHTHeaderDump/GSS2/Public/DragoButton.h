#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "DragoButton.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDragoButton : public UButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush orginal;
    
public:
    UDragoButton();

    UFUNCTION(BlueprintCallable)
    void SetPressed(bool IsPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool IsHovered);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void ForceButtonHovered(bool NewHovered);
    
};

