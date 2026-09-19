#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "BugReportingComponent.generated.h"

class UBugReportUploaderWidgetBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INGAMEBUGREPORTER_API UBugReportingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContextPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBugReportUploaderWidgetBase> BugreportingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBugReportUploaderWidgetBase* CreatedWidget;
    
public:
    UBugReportingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleBugreportingWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestoreInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveInput();
    
};

