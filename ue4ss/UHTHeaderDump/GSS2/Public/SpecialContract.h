#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "CarPartData.h"
#include "ContractBase.h"
#include "CustomizationRequirementsSettings.h"
#include "ECarPartStat.h"
#include "EContractRequirement.h"
#include "ECustomizationContractType.h"
#include "ECustomizationPaintType.h"
#include "EDecalUnlockType.h"
#include "EFinishMaskType.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "SavedCarPaint.h"
#include "SavedCarPart.h"
#include "SpecialContract.generated.h"

class ADecalToPaint;
class AJunkyardCarWreck;
class AJunkyardCarWreckCustomizable;
class UJunkyardCarPartCustomizable;

UCLASS(Blueprintable)
class GSS2_API USpecialContract : public UContractBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationContractType CustomizationContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContractCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType RequiredCarWreckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJunkyardCarWreck> RequiredCarWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity RequiredCarWreckTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarPartData RequiredCarWreckStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, FSavedCarPart> RequiredCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJunkyardCarPartType> DifferentColorCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADecalToPaint>> DecalsOfRequiredCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCarPaint RequiredPaintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredDecalsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecalUnlockType RequiredDecalsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyRewardBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreck* PickedCarWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EContractRequirement> ContractRequirements;
    
public:
    USpecialContract();

    UFUNCTION(BlueprintCallable)
    void SetRequiredPaintData(FSavedCarPaint InRequiredPaintData);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredDecalsNumber(int32 InRequiredDecalsNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredDecalsCategory(EDecalUnlockType InRequiredDecalsCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredCarWreckType(EJunkyardCarWreckType InRequiredCarWreckType);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredCarWreckTier(EJunkyardPartRarity InRequiredCarWreckTier);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredCarWreckStats(FCarPartData InRequiredCarWreckStats);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredCarWreck(TSoftClassPtr<AJunkyardCarWreck> InRequiredCarWreck);
    
    UFUNCTION(BlueprintCallable)
    void SetRequiredCarParts(TMap<EJunkyardCarPartType, FSavedCarPart> InRequiredCarParts);
    
    UFUNCTION(BlueprintCallable)
    void SetMoneyRewardBonus(float InMoneyRewardBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTopSpeedStatRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStrengthStatRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaintTypeRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaintMaskRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaintColorRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHandlingStatRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDecalsRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCarWreckTierRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCarWreckClassRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCarPartsTierRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCarPartsClassRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAccelerationStatRequired(bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetDifferentColorCarParts(TArray<EJunkyardCarPartType> InDifferentColorCarParts);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalsOfRequiredCategory(TArray<TSoftClassPtr<ADecalToPaint>> InDecalsOfRequiredCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationContractType(ECustomizationContractType InCustomizationContractType);
    
    UFUNCTION(BlueprintCallable)
    void SetContractRequirements(TArray<EContractRequirement> InContractRequirements);
    
    UFUNCTION(BlueprintCallable)
    void SetContractCode(FName InContractCode);
    
    UFUNCTION(BlueprintCallable)
    void RandomTier(const TArray<EJunkyardPartRarity> Tiers, EJunkyardPartRarity& OutPartRarity);
    
    UFUNCTION(BlueprintCallable)
    void RandomPerformanceStats(const TArray<ECarPartStat>& RequiredStats, const FFloatRange GearsNumber, const float GearScoreFractionValue);
    
    UFUNCTION(BlueprintCallable)
    void RandomPaintData(const bool bInRequiresPaintType, const TArray<ECustomizationPaintType> PossiblePaintTypes, const bool bInRequiresColor, const TArray<FName> PossibleColors, const bool bInRequiresPaintFinish, const TArray<EFinishMaskType> PossiblePaintMasks);
    
    UFUNCTION(BlueprintCallable)
    float RandomGearsNumber(const FFloatRange GearsNumberRange, const float GearsFraction);
    
    UFUNCTION(BlueprintCallable)
    void RandomDecals(const int32 DecalsNumber, const TArray<FName>& PossibleDecals);
    
    UFUNCTION(BlueprintCallable)
    void RandomContractCode(FName StateCode);
    
    UFUNCTION(BlueprintCallable)
    void RandomCarParts(const bool bDrawTiers, const TArray<EJunkyardPartRarity> Tiers, const FFloatRange GearsNumberRange, const float GearsFraction);
    
    UFUNCTION(BlueprintCallable)
    void RandomCarPart(const bool bDrawTiers, const TArray<EJunkyardPartRarity> Tiers, const EJunkyardCarPartType CarPartType, FSavedCarPart& CarPart);
    
    UFUNCTION(BlueprintCallable)
    void PrepareRequirements(const FCustomizationRequirementsSettings& InContractRequirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopSpeedStatRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrengthStatRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaintTypeRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaintMaskRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaintColorRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandlingStatRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecalsRequired() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDecalOfCorrectCategory(TSoftClassPtr<ADecalToPaint> TargetDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectWreckType(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectWreckClass(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartTopSpeed(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartStrength(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartRarity(UJunkyardCarPartCustomizable* CarPart) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartHandling(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartClass(UJunkyardCarPartCustomizable* CarPart) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectPartAcceleration(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectCarWreckTier(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarWreckTierRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarWreckClassRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarPartsTierRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarPartsClassRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccelerationStatRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredPaintType(AJunkyardCarWreckCustomizable* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredPaintMask(AJunkyardCarWreckCustomizable* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredPaintColor(AJunkyardCarWreckCustomizable* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredDecals(AJunkyardCarWreckCustomizable* CarWreck, int32& MatchingDecalsNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredDecal(TSoftClassPtr<ADecalToPaint> RequiredDecal, AJunkyardCarWreckCustomizable* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedCarPaint GetRequiredPaintData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredDecalsNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDecalUnlockType GetRequiredDecalsCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJunkyardCarWreckType GetRequiredCarWreckType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJunkyardPartRarity GetRequiredCarWreckTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCarPartData GetRequiredCarWreckStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AJunkyardCarWreck> GetRequiredCarWreck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EJunkyardCarPartType, FSavedCarPart> GetRequiredCarParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoneyRewardBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalCarPrice(AJunkyardCarWreck* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EJunkyardCarPartType> GetDifferentColorCarParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<ADecalToPaint>> GetDecalsOfRequiredCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECustomizationContractType GetCustomizationContractType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EContractRequirement> GetContractRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContractCompletionPercentage(AJunkyardCarWreck* CarWreck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetContractCode();
    
    UFUNCTION(BlueprintCallable)
    bool CompleteContract(AJunkyardCarWreck* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CarPartMatchRequirement(UJunkyardCarPartCustomizable* CarPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeCompleted(AJunkyardCarWreck* CarWreck);
    
};

