#pragma once
#include "CoreMinimal.h"
#include "WashableCarMesh.h"
#include "WashableCamperMesh.generated.h"

class ACamperStainActor;
class UCamperStainSlot;

UCLASS(Blueprintable)
class GSS2_API AWashableCamperMesh : public AWashableCarMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCamperStainSlot*> StainSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredStainsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ACamperStainActor>> StainsClasses;
    
public:
    AWashableCamperMesh(const FObjectInitializer& ObjectInitializer);

};

