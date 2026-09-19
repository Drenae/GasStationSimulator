#ifndef UE4SS_SDK_OptionsMenuContainerWidgetBP_HPP
#define UE4SS_SDK_OptionsMenuContainerWidgetBP_HPP

class UOptionsMenuContainerWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    class UAudioSettingsWidgetBP_C* AudioSettingsWidgetBP;                            // 0x0600 (size: 0x8)
    class UControlsSettingsContainerWidgetBP_C* ControlsSettingsWidgetBP;             // 0x0608 (size: 0x8)
    class UCreditsWidgetBP_C* CreditsWidgetBP;                                        // 0x0610 (size: 0x8)
    class UDisplaySettingsWidgetBP_C* DisplaySettingsWidgetBP;                        // 0x0618 (size: 0x8)
    class UGameSettingsWidgetBP_C* GameSettingsWidgetBP;                              // 0x0620 (size: 0x8)
    class UGraphicsSettingsWidgetBP_C* GraphicsSettingsWidgetBP;                      // 0x0628 (size: 0x8)
    class UOptionsOverviewWidgetBP_C* OptionsOverviewWidgetBP;                        // 0x0630 (size: 0x8)

}; // Size: 0x638

#endif
