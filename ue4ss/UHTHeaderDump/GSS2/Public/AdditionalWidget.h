#pragma once
#include "CoreMinimal.h"
#include "AdditionalWidget.generated.h"

class AActor;
class UGSSBaseWidget;

USTRUCT(BlueprintType)
struct GSS2_API FAdditionalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSBaseWidget> WidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorRequiredToClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueRowIndex;
    
    FAdditionalWidget();
};

