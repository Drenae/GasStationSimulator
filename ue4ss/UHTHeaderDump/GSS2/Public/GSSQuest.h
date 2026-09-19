#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EQuestShowType.h"
#include "EQuestState.h"
#include "QuestChallenge.h"
#include "QuestUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GSSQuest.generated.h"

class AActor;
class AObjectiveMarker;
class APawn;
class UGSSMail;
class UGSSQuest;
class UQuestBase;
class UQuestLineBase;

UCLASS(Blueprintable)
class GSS2_API UGSSQuest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwnerPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestUpdated OnQuestUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AObjectiveMarker> ObjectiveMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjectiveMarker*> ObjectiveMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* PartOfQuestLineInNewSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* EquivalentQuestInNewSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSaveGameDuringQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestShowType QuestShowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeleportPlayerOnSavePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Tips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSMail> MailClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestHasChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestChallenge> QuestChallenge;
    
    UGSSQuest();

    UFUNCTION(BlueprintCallable)
    bool UpdateQuestStatus(int32 NewCurrentNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateQuest(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObject(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float QuestProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadQuestStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeCompleted(UGSSQuest* QuestRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeQuest(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishQuest(const EQuestState QuestState);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMarker(AActor* Actor);
    
};

