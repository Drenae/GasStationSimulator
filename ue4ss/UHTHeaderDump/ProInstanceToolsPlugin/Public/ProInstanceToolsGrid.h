#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ProInstanceToolsParent.h"
#include "ProInstanceToolsGrid.generated.h"

UCLASS(Blueprintable)
class PROINSTANCETOOLSPLUGIN_API AProInstanceToolsGrid : public AProInstanceToolsParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Spacing;
    
    AProInstanceToolsGrid(const FObjectInitializer& ObjectInitializer);

};

