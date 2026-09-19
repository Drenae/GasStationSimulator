#pragma once
#include "CoreMinimal.h"
#include "AiCharacterComponent.h"
#include "EBarCustomerNativeType.h"
#include "SD_AiCharacterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USD_AiCharacterComponent : public UAiCharacterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Drunkenness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBarCustomerNativeType BarCustmerType;
    
    USD_AiCharacterComponent(const FObjectInitializer& ObjectInitializer);

};

