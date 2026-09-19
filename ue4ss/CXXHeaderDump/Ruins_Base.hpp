#ifndef UE4SS_SDK_Ruins_Base_HPP
#define UE4SS_SDK_Ruins_Base_HPP

class ARuins_Base_C : public ARuins
{
    class UArrowComponent* TrashSpawnerPoint;                                         // 0x0240 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
}; // Size: 0x248

#endif
