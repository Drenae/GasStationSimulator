#pragma once
#include "CoreMinimal.h"
#include "InteractionInfo.h"
#include "JunkyardCarPartCustomizable.h"
#include "JunkyardCarMaskBox.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UJunkyardCarMaskBox : public UJunkyardCarPartCustomizable, public IInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOpenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MaskMeshWithoutTurbo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MaskMeshWithTurbo;
    
    UJunkyardCarMaskBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOwningWreckModified();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetInteractionName();
    

    // Fix for true pure virtual functions not being implemented
};

