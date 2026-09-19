#ifndef UE4SS_SDK_AdvancedEffectFeaturesNoCustomDepth_HPP
#define UE4SS_SDK_AdvancedEffectFeaturesNoCustomDepth_HPP

struct FAdvancedEffectFeaturesNoCustomDepth
{
    TEnumAsByte<BlendModes::Type> BlendMode_12_09737E6C44063CBE16D45A8896564C06;      // 0x0000 (size: 0x1)
    class UTexture2D* BlendMask_15_664A106449FD3C01747ABC9174124057;                  // 0x0008 (size: 0x8)
    FVector2DN BlendMaskScale_18_615A76A449B11B7912A0AEA82EB64EA5;                    // 0x0010 (size: 0x8)
    float BlendDistance_23_BD484C304DC4B8E69152DA879158606B;                          // 0x0018 (size: 0x4)
    float BlendDistanceSharpness_24_17B5A9EF45A85808BD4C3DB4D7A1BDE3;                 // 0x001C (size: 0x4)
    bool BlendDistanceInvert_26_BAA4896D4DB1D15370EB73ABA02CBF01;                     // 0x0020 (size: 0x1)
    float BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B;                        // 0x0024 (size: 0x4)
    int32 EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F;                         // 0x0028 (size: 0x4)

}; // Size: 0x2C

#endif
