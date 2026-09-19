#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "KantanPointStyle.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanPointStyle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DataPointTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint PointSizeTextureOffsets[3];
    
    UKantanPointStyle();

};

