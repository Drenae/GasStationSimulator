#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CheckBox -FallbackName=CheckBox
#include "GSSCheckBox.generated.h"

class UGSSBaseWidget;

UCLASS(Blueprintable)
class GSS2_API UGSSCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RedDotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RedDotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSBaseWidget* RedDotImage;
    
    UGSSCheckBox();

    UFUNCTION(BlueprintCallable)
    void TryCreateRedDot();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRedDot();
    
    UFUNCTION(BlueprintCallable)
    void CustomOnStateChanged(bool State);
    
    UFUNCTION(BlueprintCallable)
    void CreateRedDot();
    
};

