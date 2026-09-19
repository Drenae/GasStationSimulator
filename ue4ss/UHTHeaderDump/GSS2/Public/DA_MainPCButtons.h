#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DA_MainPCButtons.generated.h"

class UDA_MainPCButton;
class UPC_TopMenuButton;

UCLASS(Blueprintable)
class GSS2_API UDA_MainPCButtons : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDA_MainPCButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPC_TopMenuButton> ButtonClass;
    
    UDA_MainPCButtons();

};

