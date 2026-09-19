#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DialogueEndedDelegate.h"
#include "DialoguePlayerChoiceDelegate.h"
#include "DialogueStartedDelegate.h"
#include "DialogueUpdateDelegate.h"
#include "EndedRvGuestServiceDelegate.h"
#include "NPCDialogueEndDelegate.h"
#include "NPCDialogueStartDelegate.h"
#include "OnThieveWidgetShownSignatureDelegate.h"
#include "StartedRvGuestServiceDelegate.h"
#include "GlobalGameEventManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API AGlobalGameEventManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueStarted OnDialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueEnded OnDialogueEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueUpdate OnDialogueUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialoguePlayerChoice OnDialoguePlayerChoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCDialogueStart OnNPCDialogueStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCDialogueEnd OnNPCDialogueEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThieveWidgetShownSignature OnThieveWidgetShown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartedRvGuestService OnStartedRvGuestService;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndedRvGuestService OnEndedRvGuestService;
    
    AGlobalGameEventManager(const FObjectInitializer& ObjectInitializer);

};

