#ifndef UE4SS_SDK_Surface_Light_HPP
#define UE4SS_SDK_Surface_Light_HPP

struct FSurface_Light
{
    FLinearColor Absorption_48_4D07E26B418E2200A6F8F8B3828E51EE;                      // 0x0000 (size: 0x10)
    FLinearColor Scattering_50_349FBF6044E6E0752780FB97F7E5A6CD;                      // 0x0010 (size: 0x10)
    float AnisotropySurfaceScattering_55_1F0826E04FA290A077DE7C8B1081B5DC;            // 0x0020 (size: 0x4)
    float WaterRoughness_64_09FF3E8D4029CBF6BDB4618DD16FA1DC;                         // 0x0024 (size: 0x4)
    float WaterFresnelRoughness_65_4808544F4A057DBC64B895BCA8A70620;                  // 0x0028 (size: 0x4)
    float WaterSpecular_68_717C82CC4286E828F5A668A8A5440CF4;                          // 0x002C (size: 0x4)
    float Exponenth_71_3CB883034A17A061D690A9BE9B63BEE4;                              // 0x0030 (size: 0x4)
    float BaseReflectFractionIn_73_B33C9CD543C2C8FAF05C70960B04686D;                  // 0x0034 (size: 0x4)

}; // Size: 0x38

#endif
