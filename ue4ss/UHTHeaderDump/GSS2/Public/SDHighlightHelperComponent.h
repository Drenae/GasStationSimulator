#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SDComponentReferenceArrayWrapper.h"
#include "SDHighlightHelperComponent.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDHighlightHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDComponentReferenceArrayWrapper> MeshComponentsToIgnore;
    
    USDHighlightHelperComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveComponetToIgnore(UMeshComponent* InIgnoredMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsComponentIgnored(UMeshComponent* InStaticMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UMeshComponent*> GetIgnoredMeshComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddComponetToIgnore(UMeshComponent* InMeshToIgnore);
    
};

