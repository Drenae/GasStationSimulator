#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TutorialManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API UTutorialManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Instaginator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HappyAngry_Enabled;
    
    UTutorialManager();

    UFUNCTION(BlueprintCallable)
    void SetHappyAngryEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool GetHappyAngryEnabled();
    
};

