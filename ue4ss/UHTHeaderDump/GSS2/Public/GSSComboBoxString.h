#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ComboBoxString -FallbackName=ComboBoxString
#include "GSSComboBoxString.generated.h"

class UGSSBaseWidget;

UCLASS(Blueprintable)
class GSS2_API UGSSComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RedDotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RedDotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSBaseWidget* RedDotImage;
    
    UGSSComboBoxString();

    UFUNCTION(BlueprintCallable)
    void TryCreateRedDot();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRedDot();
    
    UFUNCTION(BlueprintCallable)
    void CreateRedDot();
    
};

