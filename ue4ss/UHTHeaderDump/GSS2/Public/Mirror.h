#pragma once
#include "CoreMinimal.h"
#include "EMirrorSide.h"
#include "VehiclePart.h"
#include "Mirror.generated.h"

UCLASS(Blueprintable)
class GSS2_API AMirror : public AVehiclePart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMirrorSide MirrorSide;
    
public:
    AMirror(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMirrorSide GetMirrorSide();
    
};

