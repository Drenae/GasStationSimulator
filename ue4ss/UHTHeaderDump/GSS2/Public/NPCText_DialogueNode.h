#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "NPCText_DialogueNode.generated.h"

class AActor;
class AGSSNPAICharacterBase;
class UAnimMontage;

UCLASS(Blueprintable)
class GSS2_API UNPCText_DialogueNode : public UDialogueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGSSNPAICharacterBase> SpecificNPCReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SpecificObjectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceToPlayOnPlayerAudioComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCHeadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCBodyMontage;
    
public:
    UNPCText_DialogueNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetNPCHeadMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetNPCBodyMontage() const;
    
};

