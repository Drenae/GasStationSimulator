#ifndef UE4SS_SDK_DemoMapkaSaveGameActor_BP_HPP
#define UE4SS_SDK_DemoMapkaSaveGameActor_BP_HPP

class ADemoMapkaSaveGameActor_BP_C : public ASaveGameDataActor
{
    class USaveGameRVCampActorComponent* SaveGameRVCampActor;                         // 0x0240 (size: 0x8)
    class USaveGameCinemaActorComponent* SaveGameCinemaActor;                         // 0x0248 (size: 0x8)
    class USaveGameJunkyardActorComponent* SaveGameJunkyardActor;                     // 0x0250 (size: 0x8)
    class USaveGameAirstripActorComponent* SaveGameAirstripActor;                     // 0x0258 (size: 0x8)
    class USaveGamePartyTimeActorComponent* SaveGamePartyTimeActor;                   // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)

}; // Size: 0x270

#endif
