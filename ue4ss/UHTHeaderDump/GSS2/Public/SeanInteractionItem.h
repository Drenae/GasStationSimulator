#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SeanInteractionItem.generated.h"

class UNPSmartObjectComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GSS2_API ASeanInteractionItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPSmartObjectComponent* NPSmartObjectComponent;
    
    ASeanInteractionItem(const FObjectInitializer& ObjectInitializer);

};

