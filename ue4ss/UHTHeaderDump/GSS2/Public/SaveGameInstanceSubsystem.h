#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SaveGameInstanceSubsystem.generated.h"

class ASaveGameDataActor;

UCLASS(Blueprintable)
class GSS2_API USaveGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaveGameDataActor* SaveGameDataActor;
    
    USaveGameInstanceSubsystem();

};

