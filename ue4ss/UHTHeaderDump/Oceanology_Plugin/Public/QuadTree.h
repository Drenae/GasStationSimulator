#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "QuadTree.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class OCEANOLOGY_PLUGIN_API AQuadTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EditorTickIsEnabled;
    
    AQuadTree(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEditorTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Procedural(UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32 GridTiles, float CellSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EditorTick(float DeltaSeconds);
    
};

