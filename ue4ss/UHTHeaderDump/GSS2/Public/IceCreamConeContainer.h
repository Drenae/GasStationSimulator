#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OutlineInterface.h"
#include "IceCreamConeContainer.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AIceCreamConeContainer : public AActor, public IOutlineInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    AIceCreamConeContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOutline(bool bShouldBeOutlined);
    

    // Fix for true pure virtual functions not being implemented
};

