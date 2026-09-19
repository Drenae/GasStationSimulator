#pragma once
#include "CoreMinimal.h"
#include "BuildArea.h"
#include "InsideGSSArea.generated.h"

UCLASS(Blueprintable)
class GSS2_API AInsideGSSArea : public ABuildArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptShelves;
    
    AInsideGSSArea(const FObjectInitializer& ObjectInitializer);

};

