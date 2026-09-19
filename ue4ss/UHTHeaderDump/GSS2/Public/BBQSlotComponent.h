#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "BBQSlotConfig.h"
#include "EBBQStage.h"
#include "SetBBQItemInsideDelegate.h"
#include "BBQSlotComponent.generated.h"

class ABBQItem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UBBQSlotComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABBQItem> BBQItemInside;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBBQStage TargetStage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetBBQItemInside OnSetBBQItemInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQSlotConfig Config;
    
    UBBQSlotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABBQItem* GetBBQItemInside() const;
    
};

