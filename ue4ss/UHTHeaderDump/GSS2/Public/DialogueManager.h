#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EDialogueSpeaker.h"
#include "ENPCAccent.h"
#include "ENPCGender.h"
#include "DialogueManager.generated.h"

class AGSSNPAICharacterBase;
class UAudioComponent;
class UDialogueGraph;
class UDialogueNode;
class UObject;

UCLASS(Blueprintable)
class GSS2_API ADialogueManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PrimarySpeaker_AC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueNode* Primary_ActiveDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SecondarySpeaker_AC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueNode* Secondary_ActiveDialogue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogueNode*> StoryDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogueNode*> Barks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NoVoice_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PD_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SD_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DialogueDelayedStart_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDialogueStarted;
    
public:
    ADialogueManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SkipCurrentLine();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemotelyTriggerDialogue(UObject* ObjectTriggering, UDialogueGraph* DialogueGraph, int32 DialogueID, bool bOverrideAudioComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlayDialogue(UDialogueNode* curDialogue, UAudioComponent* OtherAudioComponent, bool bForceToPlayOnPlayerAudioComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyUIDialogueEnding(UDialogueNode* CurNode);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUIChoicesToBeMade(UDialogueNode* ParentNode);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChoiceMade(UDialogueNode* NodeSelected);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialoguePlaying(EDialogueSpeaker Speaker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalDialoguesInQueue();
    
    UFUNCTION(BlueprintCallable)
    float GetStoryBarkBlockTimer() const;
    
    UFUNCTION(BlueprintCallable)
    UDialogueGraph* GetGameplayDialogueGraph(UDialogueGraph* DialogueGraph);
    
    UFUNCTION(BlueprintCallable)
    UDialogueGraph* GetDialogueGraphForPilot(ENPCGender InGender, ENPCAccent InAccent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueDuration(UDialogueNode* CurNode);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndOfLineActions(UDialogueNode* CurNode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DialogueEnded(UDialogueNode* curDialogue);
    
    UFUNCTION(BlueprintCallable)
    void ActuallyStartDialogue(UDialogueNode* curDialogue, UAudioComponent* OtherAudioComponent, AGSSNPAICharacterBase* AnimatedNPCTarget);
    
};

