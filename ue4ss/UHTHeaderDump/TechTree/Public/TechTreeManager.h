#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnTechTreeSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TechTreeManager.generated.h"

class USaveGame;
class UTTTechNode;
class UTechTreeWidget;
class UTechnologyAsset;
class UTechnologySaveGame;
class UTechnologyTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TECHTREE_API UTechTreeManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTechTreeRecovered, const UTechnologyTree*, TechTree);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTechTreeAssigned, UTechnologyTree*, TechTree);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTechnologyUnlockStateChanged, UTechnologyTree*, TechTree, UTTTechNode*, TechNode, bool, IsUnLocked);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeSelected OnTechTreeSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTechnologyTree*, UTechnologyTree*> AssignedTechTrees;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeAssigned OnTechTreeAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTechnologySaveGame> SaveGameTemplate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeRecovered OnTechTreeRecovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTechnologyTree* TechnologyTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTechTreeWidget* TechTreeWidget;
    
public:
    UTechTreeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockTechnology(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryToUnlockTechnology(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable)
    void SelectTechTree(UTechnologyTree* TechTree);
    
    UFUNCTION(BlueprintCallable)
    void SaveTechToObject(USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable)
    void SaveTechStateFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void LockTechnology(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable)
    void LoadTechStateFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadTechFromObject(USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTechnologyUnlocked(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildTechnology(UTTTechNode* ParentNode, UTechnologyAsset* ChildNodeTechnology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedParents(UTechnologyAsset* Technology);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTechnologyStateChanged(UTTTechNode* TechNode, bool IsUnLocked);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechTreeWidget* GetTechTreeWidget();
    
    UFUNCTION(BlueprintCallable)
    USaveGame* GetSavegameTechObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberTreesAssigned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTTTechNode* GetNodeFromTechAsset(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechnologyTree* GetAssignedTechTree();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsTechnologyInTreeUnlock(UTechnologyAsset* TechnologyAssetToCheck, UTechnologyTree* TechTreeToCheck);
    
    UFUNCTION(BlueprintCallable)
    void AssignTechTree(UTechnologyTree* TechTree, UTechTreeWidget* NewTechTreeWidget);
    
};

