#pragma once
#include "CoreMinimal.h"
#include "SeanInteractionItem.h"
#include "SeanEngineFixingStation.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ASeanEngineFixingStation : public ASeanInteractionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Hammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScrewDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Wrench;
    
    ASeanEngineFixingStation(const FObjectInitializer& ObjectInitializer);

};

