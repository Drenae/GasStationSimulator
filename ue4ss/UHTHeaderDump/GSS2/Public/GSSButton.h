#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "OnButtonClickFinishDelegate.h"
#include "RepeatStruct.h"
#include "GSSButton.generated.h"

class UGSSBaseWidget;
class UGSSButton;

UCLASS(Blueprintable)
class GSS2_API UGSSButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickFinish OnButtonFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RedDotTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RedDotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* NavigationMoveUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* NavigationMoveDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* NavigationMoveLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* NavigationMoveRight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockUnhover;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepeatStruct> RedDotReps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSBaseWidget* RedDotImage;
    
    UGSSButton();

    UFUNCTION(BlueprintCallable)
    void TryCreateRedDot();
    
    UFUNCTION(BlueprintCallable)
    void SetUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void SetHovered();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomCondition(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDefaultRedDots(FGameplayTagContainer Tags, FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void LockAddedRedDots();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRedDot();
    
    UFUNCTION(BlueprintCallable)
    void CustomOnClicked();
    
    UFUNCTION(BlueprintCallable)
    void CreateRedDot();
    
};

