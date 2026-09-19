#ifndef UE4SS_SDK_AdvancedEffectFeatures_HPP
#define UE4SS_SDK_AdvancedEffectFeatures_HPP

struct FAdvancedEffectFeatures
{
    TEnumAsByte<BlendModes::Type> BlendMode_12_09737E6C44063CBE16D45A8896564C06;      // 0x0000 (size: 0x1)
    class UTexture2D* BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5;                  // 0x0008 (size: 0x8)
    FVector2DN BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0;                    // 0x0010 (size: 0x8)
    float BlendDistance_33_7594D9DD4D782916B58945895B32667E;                          // 0x0018 (size: 0x4)
    float BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D;                 // 0x001C (size: 0x4)
    bool BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A;                     // 0x0020 (size: 0x1)
    float BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B;                        // 0x0024 (size: 0x4)
    int32 EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F;                         // 0x0028 (size: 0x4)
    bool CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8;                              // 0x002C (size: 0x1)
    bool StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6;                           // 0x002D (size: 0x1)
    int32 StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1;                            // 0x0030 (size: 0x4)

}; // Size: 0x34

#endif
