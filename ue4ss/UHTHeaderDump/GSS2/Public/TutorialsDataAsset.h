#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EGameActivityType.h"
#include "TutorialData.h"
#include "TutorialsDataAsset.generated.h"

UCLASS(Blueprintable)
class GSS2_API UTutorialsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialData> Tutorials;
    
    UTutorialsDataAsset();

    UFUNCTION(BlueprintCallable)
    FTutorialData GetTutorialInfo(EGameActivityType TutorialType);
    
};

