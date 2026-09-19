#ifndef UE4SS_SDK_AILibraryHelper_HPP
#define UE4SS_SDK_AILibraryHelper_HPP

class UAILibraryHelper_C : public UBlueprintFunctionLibrary
{

    void CheckTask(const TArray<FTaskStruct>& TargetArray, class UObject* __WorldContext, EVehicleOptymalizeType& NewParam);
}; // Size: 0x28

#endif
