#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GSSBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "JunkyardPlatformPanel.generated.h"

class ADecalToPaint;
class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UJunkyardPlatformPanel : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADecalToPaint* SelectedDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LastUsedDecalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUsedDecalSize;
    
    UJunkyardPlatformPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDecalInputs(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SelectDecal(TSubclassOf<ADecalToPaint> DecalClass, AJunkyardCarWreckCustomizable* TargetWreck);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDecalColor(FLinearColor NewColor, int32 Index);
    
};

