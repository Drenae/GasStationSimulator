#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "KeyItem.h"
#include "PaintingColor.h"
#include "PaintBrush.generated.h"

UCLASS(Blueprintable)
class GSS2_API APaintBrush : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentLinearColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPaintingColor PaitingColor;
    
    APaintBrush(const FObjectInitializer& ObjectInitializer);

};

