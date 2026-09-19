#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "CommunicationDevice.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACommunicationDevice : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkeletalMesh;
    
    ACommunicationDevice(const FObjectInitializer& ObjectInitializer);

};

