#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "UnlockedTechnologiesData.h"
#include "TechnologySaveGame.generated.h"

class UTechnologyAsset;
class UTechnologyTree;

UCLASS(Blueprintable)
class TECHTREE_API UTechnologySaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTechnologyAsset*> UnlockedTechnologies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTechnologyTree*, FUnlockedTechnologiesData> MultipleTreesUnlockedTechnologies;
    
    UTechnologySaveGame();

};

