#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureBase.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMaterialExpressionTextureBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UMaterialExpressionTextureBase();

};

