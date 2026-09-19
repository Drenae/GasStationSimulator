#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "HammerBuildingWidget.generated.h"

class AHammer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UHammerBuildingWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHammer* HammerInstence;
    
public:
    UHammerBuildingWidget();

};

