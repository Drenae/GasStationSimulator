#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "PlayerPartySpot.generated.h"

class APartySpotClock;
class APartySpotTable;

USTRUCT(BlueprintType)
struct FPlayerPartySpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartySpotClock* PartySpotClock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountOfNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APartySpotTable*> PartyTables;
    
    GSS2_API FPlayerPartySpot();
};

