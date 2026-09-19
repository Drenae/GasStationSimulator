#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_ToolsTab.generated.h"

class UPC_Tool;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_ToolsTab : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPC_Tool> ToolWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* ToolsWrap;
    
    UPC_ToolsTab();

    UFUNCTION(BlueprintCallable)
    void CreateToolWidgets();
    
};

