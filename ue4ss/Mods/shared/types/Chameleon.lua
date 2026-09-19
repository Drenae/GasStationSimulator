---@meta

---@class AChameleon_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MaterialBillboard UMaterialBillboardComponent
---@field InternalPP UPostProcessComponent
---@field ['Bounding Box'] UBoxComponent
---@field ['Bleach Bypass'] boolean
---@field ['Distance Fog'] boolean
---@field ['Channel Clamper'] boolean
---@field mChannelClamper UMaterial
---@field iChannelClamper UMaterialInstanceDynamic
---@field ['Channel Swapper'] boolean
---@field ['Screen Drops'] boolean
---@field Alcohol boolean
---@field Drug boolean
---@field Mosaic boolean
---@field ['Pixel Dissolve'] boolean
---@field Blur boolean
---@field mBleachBypass UMaterial
---@field mDistanceFog UMaterial
---@field mChannelSwapper UMaterial
---@field mScreenDrops UMaterial
---@field mAlcohol UMaterial
---@field mDrug UMaterial
---@field mMosaic UMaterial
---@field mPixelDissolve UMaterial
---@field mBlur UMaterial
---@field ['Channel Clamper Red Intensity'] float
---@field ['Channel Clamper Green Intensity'] float
---@field ['Channel Clamper Blue Intensity'] float
---@field iBleachBypass UMaterialInstanceDynamic
---@field iDistanceFog UMaterialInstanceDynamic
---@field iChannelSwapper UMaterialInstanceDynamic
---@field ['Channel Swapper Red'] ColorChannels::Type
---@field ['Channel Swapper Green'] ColorChannels::Type
---@field ['Channel Swapper Blue'] ColorChannels::Type
---@field iScreenDrops UMaterialInstanceDynamic
---@field iAlcohol UMaterialInstanceDynamic
---@field iDrug UMaterialInstanceDynamic
---@field iMosaic UMaterialInstanceDynamic
---@field iPixelDissolve UMaterialInstanceDynamic
---@field iBlur UMaterialInstanceDynamic
---@field ['Screen Drops Layer 1 Map'] UTexture2D
---@field ['Screen Drops Layer 1 Intensity'] float
---@field ['Mosaic Scale'] float
---@field ['Alcohol Speed'] float
---@field ['Drug Speed'] float
---@field ['Pixel Dissolve Intensity'] float
---@field ['Blur Amount'] float
---@field ASCII boolean
---@field mAscii UMaterial
---@field iAscii UMaterialInstanceDynamic
---@field Colorize boolean
---@field mColorize UMaterial
---@field iColorize UMaterialInstanceDynamic
---@field ['Colorize Detail'] float
---@field Comic boolean
---@field mComic UMaterial
---@field iComic UMaterialInstanceDynamic
---@field ['Comic Blend Color'] FLinearColor
---@field ['Comic Threshold'] float
---@field ['Edge Detect'] boolean
---@field mEdgeDetect UMaterial
---@field iEdgeDetect UMaterialInstanceDynamic
---@field Emboss boolean
---@field mEmboss UMaterial
---@field iEmboss UMaterialInstanceDynamic
---@field Glitch boolean
---@field mGlitch UMaterial
---@field iGlitch UMaterialInstanceDynamic
---@field ['Glitch Speed'] float
---@field ['Glitch Lines'] float
---@field ['Glitch Blocking'] float
---@field ['Monitor Effects'] boolean
---@field mGrainNLines UMaterial
---@field iGrainNLines UMaterialInstanceDynamic
---@field ['Monitor Effects Line Count'] float
---@field ['Monitor Effects Intensity 1'] float
---@field ['Monitor Effects Intensity 2'] float
---@field ['Hard Emboss'] boolean
---@field mHardEmboss UMaterial
---@field iHardEmboss UMaterialInstanceDynamic
---@field ['Hue Panner'] boolean
---@field mHuePanner UMaterial
---@field iHuePanner UMaterialInstanceDynamic
---@field ['Hue Panner Speed'] float
---@field Monochrome boolean
---@field mMonochrome UMaterial
---@field iMonochrome UMaterialInstanceDynamic
---@field ['Monochrome Color'] FLinearColor
---@field ['Radial Blur'] boolean
---@field mRadialBlur UMaterial
---@field iRadialBlur UMaterialInstanceDynamic
---@field ['Radial Blur Width'] float
---@field ['Radial Blur Samples'] int32
---@field Scratches boolean
---@field mScratches UMaterial
---@field iScratches UMaterialInstanceDynamic
---@field ['Screen Waves'] boolean
---@field mScreenWaves UMaterial
---@field iScreenWaves UMaterialInstanceDynamic
---@field ['Screen Waves X Tiling'] float
---@field ['Screen Waves Y Tiling'] float
---@field ['Monitor Effects Distortion 1'] float
---@field ['Monitor Effects Distortion 2'] float
---@field ['Monitor Effects Picture Scale'] float
---@field ['Distance Fog Near Color'] FLinearColor
---@field ['Distance Fog Far Color'] FLinearColor
---@field ['Distance Fog Distance'] float
---@field ['Scratches Distortion Map'] UTexture2D
---@field ['Scratches Distortion Amount'] float
---@field ['Scratches Color'] FLinearColor
---@field ['Screen Drops Layer 1 Speed'] float
---@field ['Screen Drops Layer 1 Noise'] float
---@field ['Screen Drops Layer 2 Map'] UTexture2D
---@field ['Screen Drops Layer 2 Intensity'] float
---@field ['Screen Drops Layer 2 Speed'] float
---@field ['Screen Drops Layer 2 Noise'] float
---@field ['Screen Drops Layer 3 Map'] UTexture2D
---@field ['Screen Drops Layer 3 Intensity'] float
---@field ['Screen Drops Layer 3 Speed'] float
---@field Invert boolean
---@field mInvert UMaterial
---@field iInvert UMaterialInstanceDynamic
---@field Iridescent boolean
---@field mIridescent UMaterial
---@field iIridescent UMaterialInstanceDynamic
---@field ['Iridescent Iridescence'] float
---@field Kuwahara boolean
---@field mKuwahara UMaterial
---@field iKuwahara UMaterialInstanceDynamic
---@field ['Kuwahara Amount'] int32
---@field Pulse boolean
---@field mPulse UMaterial
---@field iPulse UMaterialInstanceDynamic
---@field ['Pulse Center X'] float
---@field ['Pulse Center Y'] float
---@field ['Pulse Speed'] float
---@field ['Pulse Smoothing'] float
---@field Squares boolean
---@field mSquares UMaterial
---@field iSquares UMaterialInstanceDynamic
---@field ['Squares Scale'] float
---@field ['Squares Ratio'] float
---@field ['Squares Radius'] float
---@field ['Squares Brightness'] float
---@field Tiles boolean
---@field mTiles UMaterial
---@field iTiles UMaterialInstanceDynamic
---@field ['Tiles Centered'] boolean
---@field ['Tiles Count'] float
---@field ['TV Noise'] boolean
---@field mTVNoise UMaterial
---@field iTVNoise UMaterialInstanceDynamic
---@field ['TV Noise Contrast'] float
---@field ['TV Noise Intensity'] float
---@field ['Native Post Process'] FPostProcessSettings
---@field ['LOOK!'] boolean
---@field ['LOOK! Presets'] LOOKPresetsEnum::Type
---@field Circles boolean
---@field mCircles UMaterial
---@field iCircles UMaterialInstanceDynamic
---@field ['Circles Ratio'] float
---@field ['Circles Tiling'] float
---@field Sonar boolean
---@field mSonar UMaterial
---@field iSonar UMaterialInstanceDynamic
---@field ['Sonar Color'] FLinearColor
---@field ['Sonar Color Intensity'] float
---@field ['Sonar Depth'] float
---@field ['Sonar Wave Distance'] float
---@field ['Sonar Distortion Intensity'] float
---@field ['Sonar Sharpness'] float
---@field ['Alcohol Offset'] float
---@field ['Distance Distortion'] boolean
---@field mDistanceDistortion UMaterial
---@field iDistanceDistortion UMaterialInstanceDynamic
---@field ['Distance Distortion Normal'] UTexture2D
---@field ['Distance Distortion Amount'] float
---@field ['Distance Distortion Edge Distance'] float
---@field ['Distance Distortion Edge Fading'] float
---@field ['Distance Distortion Movement Speed'] float
---@field ['Distance Distortion Movement Scale'] float
---@field ['Distance Distortion Affected Brightness'] float
---@field ['Distance Distortion Unaffected Brightness'] float
---@field Drawing boolean
---@field mDrawing UMaterial
---@field iDrawing UMaterialInstanceDynamic
---@field ['Drawing Paper Texture'] UTexture2D
---@field ['Drawing Noise Algorithm'] DrawingNoiseModes::Type
---@field ['Drawing Ink Amount'] float
---@field ['Drawing Liner Amount'] float
---@field ['Drawing Blending Color'] FLinearColor
---@field ['Magic Transitions'] boolean
---@field mMagicTransitions UMaterial
---@field iMagicTransitions UMaterialInstanceDynamic
---@field ['Magic Transitions Final Texture'] UTexture2D
---@field ['Magic Transitions Mask Texture'] UTexture2D
---@field ['Magic Transitions Transition Amount'] float
---@field ['Magic Transitions Flashing Intensity'] float
---@field ['Magic Transitions Flashing Tolerance'] float
---@field ['Magic Transitions Flashing Color'] FLinearColor
---@field ['Screen Damage'] boolean
---@field mScreenDamage UMaterial
---@field iScreenDamage UMaterialInstanceDynamic
---@field ['Screen Damage Texture'] UTexture2D
---@field ['Screen Damage Intensity'] float
---@field ['Screen Damage Distortion'] float
---@field ['Screen Damage Tint'] FLinearColor
---@field ['Screen Damage Edge Size'] float
---@field ['Screen Damage Fading'] float
---@field ['Screen Decals'] boolean
---@field mScreenDecals UMaterial
---@field iScreenDecals UMaterialInstanceDynamic
---@field ['Screen Decals Slot 1 - Texture'] UTexture2D
---@field ['Screen Decals Slot 1 - Distortion'] float
---@field ['Screen Decals Slot 1 - Intensity'] float
---@field ['Screen Decals Slot 1 - Position X'] float
---@field ['Screen Decals Slot 1 - Position Y'] float
---@field ['Screen Decals Slot 1 - Rotation'] float
---@field ['Screen Decals Slot 1 - Size'] float
---@field ['Screen Decals Slot 2 - Texture'] UTexture2D
---@field ['Screen Decals Slot 2 - Distortion'] float
---@field ['Screen Decals Slot 2 - Intensity'] float
---@field ['Screen Decals Slot 2 - Position X'] float
---@field ['Screen Decals Slot 2 - Position Y'] float
---@field ['Screen Decals Slot 2 - Rotation'] float
---@field ['Screen Decals Slot 2 - Size'] float
---@field ['Screen Decals Slot 3 - Texture'] UTexture2D
---@field ['Screen Decals Slot 3 - Distortion'] float
---@field ['Screen Decals Slot 3 - Intensity'] float
---@field ['Screen Decals Slot 3 - Position X'] float
---@field ['Screen Decals Slot 3 - Position Y'] float
---@field ['Screen Decals Slot 3 - Rotation'] float
---@field ['Screen Decals Slot 3 - Size'] float
---@field ['Screen Decals Slot 4 - Texture'] UTexture2D
---@field ['Screen Decals Slot 4 - Distortion'] float
---@field ['Screen Decals Slot 4 - Intensity'] float
---@field ['Screen Decals Slot 4 - Position X'] float
---@field ['Screen Decals Slot 4 - Position Y'] float
---@field ['Screen Decals Slot 4 - Rotation'] float
---@field ['Screen Decals Slot 4 - Size'] float
---@field Sharpen boolean
---@field mSharpen UMaterial
---@field iSharpen UMaterialInstanceDynamic
---@field ['Sharpen Value'] float
---@field ['Toon Shading'] boolean
---@field mToonShading UMaterial
---@field iToonShading UMaterialInstanceDynamic
---@field ['Toon Shading Use Diffuse Buffer'] boolean
---@field ['Toon Shading Details'] float
---@field ['Toon Shading Fading '] float
---@field ['Toon Shading Size'] float
---@field ['Toon Shading Sobel Strength'] float
---@field ['Anamorphic Lens Flares'] boolean
---@field mAnamorphicLensFlares UMaterial
---@field iAnamorphicLensFlares UMaterialInstanceDynamic
---@field ['Anamorphic Lens Flares Linear Color'] float
---@field ['Anamorphic Lens Flares Exposure Scale'] float
---@field ['Anamorphic Lens Flares Threshold'] float
---@field ['Anamorphic Lens Flares Intensity'] float
---@field ['Anamorphic Lens Flares Steps'] float
---@field ['Anamorphic Lens Flares Length'] float
---@field ['Anamorphic Lens Flares Tint'] FLinearColor
---@field Frost boolean
---@field mFrost UMaterial
---@field iFrost UMaterialInstanceDynamic
---@field ['Frost Texture'] UTexture2D
---@field ['Frost Colorization'] float
---@field ['Frost Distortion Strength'] float
---@field ['Frost Visible Area'] float
---@field ['ASCII Color Multiplier'] FLinearColor
---@field Neon boolean
---@field mNeon UMaterial
---@field iNeon UMaterialInstanceDynamic
---@field ['Neon Color'] FLinearColor
---@field ['Neon Background Color'] FLinearColor
---@field ['Neon Power'] float
---@field ['Neon Noise'] float
---@field ['Neon Noise Speed'] float
---@field ['Custom Depth Highlighter'] boolean
---@field mCustomDepthHighlighter UMaterial
---@field iCustomDepthHighlighter UMaterialInstanceDynamic
---@field ['Custom Depth Highlighter Highlight Color'] FLinearColor
---@field ['Custom Depth Highlighter Highlight Opacity'] float
---@field ['Custom Depth Highlighter (Clip)'] boolean
---@field mCustomDepthHighlighterClip UMaterial
---@field iCustomDepthHighlighterClip UMaterialInstanceDynamic
---@field ['Custom Depth Highlighter (C) Highlight Color'] FLinearColor
---@field ['Custom Depth Highlighter (C) Highlight Opacity'] float
---@field ['Edge Detect Threshold'] float
---@field ['Scratches Noising'] float
---@field Enabled boolean
---@field Unbound boolean
---@field AllMaterials TArray<UMaterial>
---@field ['Screen Drops Layer 3 Noise'] float
---@field ['Screen Drops Diffuse Color'] FLinearColor
---@field ['Screen Drops Splashes Amount'] float
---@field ['Screen Drops Splashes Tiling'] float
---@field ['Screen Drops Splashes Intensity'] float
---@field ['Screen Drops Bump'] float
---@field ['2D Transform'] boolean
---@field m2DTransform UMaterial
---@field i2DTransform UMaterialInstanceDynamic
---@field Kaleidoscope boolean
---@field mKaleidoscope UMaterial
---@field iKaleidoscope UMaterialInstanceDynamic
---@field Letterboxing boolean
---@field mLetterboxing UMaterial
---@field iLetterboxing UMaterialInstanceDynamic
---@field Snow boolean
---@field mSnow UMaterial
---@field iSnow UMaterialInstanceDynamic
---@field ['2D Transform Anchor Point (X)'] float
---@field ['2D Transform Anchor Point (Y)'] float
---@field ['2D Transform Rotate'] float
---@field ['2D Transform Pan (X)'] float
---@field ['2D Transform Pan (Y)'] float
---@field ['2D Transform Scale (X)'] float
---@field ['2D Transform Scale (Y)'] float
---@field ['2D Transform Tiled'] boolean
---@field ['Kaleidoscope Amount'] int32
---@field ['Kaleidoscope SphericalDistortion'] float
---@field ['Kaleidoscope Warp'] float
---@field ['Kaleidoscope FMul'] float
---@field ['Letterboxing Texture'] UTexture2D
---@field ['Letterboxing Size'] float
---@field ['Letterboxing Horizontal'] boolean
---@field ['Letterboxing Vertical'] boolean
---@field ['Snow Amount'] float
---@field ['Snow Distortion'] float
---@field ['Snow Size'] float
---@field ['Snow Speed (X)'] float
---@field ['Snow Speed (Y)'] float
---@field ['Drawing Animation Speed'] float
---@field ['Distance Fog Edge Sharpness'] float
---@field ['Screen Drops Diffuse Intensity'] float
---@field ['World Splash'] boolean
---@field mWorldSplash UMaterial
---@field iWorldSplash UMaterialInstanceDynamic
---@field ['World Splash Distort'] float
---@field ['World Splash Smoothness'] float
---@field ['World Splash Tiling'] float
---@field ['World Splash Color Tint'] FLinearColor
---@field ['Blur Samples'] int32
---@field ['Frost Color'] FLinearColor
---@field ['Comic PreMultiplier'] float
---@field ['Comic Desaturation'] float
---@field ['World Glitch'] boolean
---@field mWorldGlitch UMaterial
---@field iWorldGlitch UMaterialInstanceDynamic
---@field ['World Glitch Animated'] boolean
---@field ['World Glitch Animation Speed'] float
---@field ['World Glitch Distance'] float
---@field ['World Glitch Distance Sharpness'] float
---@field ['World Glitch Phase'] float
---@field ['World Glitch Power'] float
---@field ['World Glitch Grid Position'] FVector
---@field ['World Glitch Grid Size'] FVector
---@field Digitize boolean
---@field mDigitize UMaterial
---@field iDigitize UMaterialInstanceDynamic
---@field ['Digitize Cell Color'] FLinearColor
---@field ['Digitize Cell Position'] FVector
---@field ['Digitize Cell Position Over Time'] FVector
---@field ['Digitize Distance'] float
---@field ['Digitize Distance Sharpness'] float
---@field ['Digitize Cell Size'] float
---@field ['Digitize Cell Color Multiplier'] float
---@field ['Digitize Cell Distortion'] float
---@field ['Digitize Background Color Multiplier'] float
---@field ALARM boolean
---@field mAlarm UMaterial
---@field iAlarm UMaterialInstanceDynamic
---@field ['Alarm Color'] FLinearColor
---@field ['Alarm Speed'] float
---@field Sketch boolean
---@field mSketch UMaterial
---@field iSketch UMaterialInstanceDynamic
---@field ['Sketch Color'] FLinearColor
---@field ['Sketch Background Color'] FLinearColor
---@field ['Sketch Power'] float
---@field ['Sketch Pattern Rotation'] float
---@field ['Sketch Pattern Speed'] float
---@field ['Custom Depth Highlighter Outline Color'] FLinearColor
---@field ['Custom Depth Highlighter Outline Opacity'] float
---@field ['Custom Depth Highlighter (C) Outline Color'] FLinearColor
---@field ['Custom Depth Highlighter (C) Outline Opacity'] float
---@field Wired boolean
---@field iWired UMaterialInstanceDynamic
---@field mWired UMaterial
---@field ['Wired Color'] FLinearColor
---@field ['Wired Power'] float
---@field ['Mosaic - Advanced'] FAdvancedEffectFeatures
---@field ['Drug - Advanced'] FAdvancedEffectFeatures
---@field ['Alcohol - Advanced'] FAdvancedEffectFeatures
---@field ['Pixel Dissolve - Advanced'] FAdvancedEffectFeatures
---@field ['Channel Clamper - Advanced'] FAdvancedEffectFeatures
---@field ['Channel Swapper - Advanced'] FAdvancedEffectFeatures
---@field ['Bleach Bypass - Advanced'] FAdvancedEffectFeatures
---@field ['Blur - Advanced'] FAdvancedEffectFeatures
---@field ['ASCII PreMultiplier'] float
---@field ['ASCII - Advanced'] FAdvancedEffectFeatures
---@field ['Colorize - Advanced'] FAdvancedEffectFeatures
---@field ['Edge Detect - Advanced'] FAdvancedEffectFeatures
---@field ['Emboss - Advanced'] FAdvancedEffectFeatures
---@field ['Hard Emboss - Advanced'] FAdvancedEffectFeatures
---@field ['Glitch Grid Distortion Power'] float
---@field ['Glitch Grid Distortion Size'] float
---@field ['Glitch Grid Distortion Speed'] float
---@field ['Glitch - Advanced'] FAdvancedEffectFeatures
---@field ['Monitor Effects Tiled'] boolean
---@field ['Monitor Effects - Advanced'] FAdvancedEffectFeatures
---@field ['Hue Panner - Advanced'] FAdvancedEffectFeatures
---@field ['Monochrome - Advanced'] FAdvancedEffectFeatures
---@field ['Radial Blur Center'] FVector2D
---@field ['Radial Blur Sample Offset'] FVector2D
---@field ['Radial Blur - Advanced'] FAdvancedEffectFeatures
---@field ['Scratches - Advanced'] FAdvancedEffectFeatures
---@field ['Screen Waves - Advanced'] FAdvancedEffectFeatures
---@field ['Distance Fog - Advanced'] FAdvancedEffectFeatures
---@field ['Screen Drops - Advanced'] FAdvancedEffectFeatures
---@field ['Invert - Advanced'] FAdvancedEffectFeatures
---@field ['Iridescent - Advanced'] FAdvancedEffectFeatures
---@field ['Kuwahara - Advanced'] FAdvancedEffectFeatures
---@field ['Pulse - Advanced'] FAdvancedEffectFeatures
---@field ['Squares - Advanced'] FAdvancedEffectFeatures
---@field ['Tiles - Advanced'] FAdvancedEffectFeatures
---@field ['TV Noise - Advanced'] FAdvancedEffectFeatures
---@field ['Circles - Advanced'] FAdvancedEffectFeatures
---@field ['Sonar - Advanced'] FAdvancedEffectFeatures
---@field ['Distance Distortion - Advanced'] FAdvancedEffectFeatures
---@field ['Drawing - Advanced'] FAdvancedEffectFeatures
---@field ['Magic Transitions - Advanced'] FAdvancedEffectFeatures
---@field ['Screen Damage - Advanced'] FAdvancedEffectFeatures
---@field ['Screen Decals - Advanced'] FAdvancedEffectFeatures
---@field ['Sharpen - Advanced'] FAdvancedEffectFeatures
---@field ['Toon Shading - Advanced'] FAdvancedEffectFeatures
---@field ['Anamorphic Lens Flares - Advanced'] FAdvancedEffectFeatures
---@field ['Frost - Advanced'] FAdvancedEffectFeatures
---@field ['Neon - Advanced'] FAdvancedEffectFeatures
---@field ['Custom Depth Highlighter - Advanced'] FAdvancedEffectFeaturesNoCustomDepth
---@field ['Custom Depth Highlighter (Clip) - Advanced'] FAdvancedEffectFeaturesNoCustomDepth
---@field ['2D Transform Background Color'] FLinearColor
---@field ['2D Transform - Advanced'] FAdvancedEffectFeatures
---@field ['Kaleidoscope - Advanced'] FAdvancedEffectFeatures
---@field ['Letterboxing - Advanced'] FAdvancedEffectFeatures
---@field ['Snow - Advanced'] FAdvancedEffectFeatures
---@field ['World Splash - Advanced'] FAdvancedEffectFeatures
---@field ['World Glitch - Advanced'] FAdvancedEffectFeatures
---@field ['Digitize - Advanced'] FAdvancedEffectFeatures
---@field ['Alarm - Advanced'] FAdvancedEffectFeatures
---@field ['Sketch - Advanced'] FAdvancedEffectFeatures
---@field ['Wired - Advanced'] FAdvancedEffectFeatures
---@field ['Comic Pattern Intensity'] float
---@field ['Comic Pattern Line Count'] int32
---@field ['Comic Pattern Rotation'] float
---@field ['Comic - Advanced'] FAdvancedEffectFeatures
---@field ['Actor Featurette'] boolean
---@field mActorFeaturette UMaterial
---@field iActorFeaturette UMaterialInstanceDynamic
---@field ['Actor Featurette Background Multiplier'] FLinearColor
---@field ['Actor Featurette Background Desaturation'] float
---@field ['Actor Featurette Foreground Multiplier'] FLinearColor
---@field ['Actor Featurette Foreground Saturation'] float
---@field ['Actor Featurette Blur Amount'] float
---@field ['Actor Featurette Blur Samples'] int32
---@field ['Actor Featurette Stencil Mask'] int32
---@field ['Actor Featurette - Advanced'] FAdvancedEffectFeaturesNoCustomDepth
---@field Infected boolean
---@field mInfected UMaterial
---@field iInfected UMaterialInstanceDynamic
---@field ['Infected Distortion Amount'] float
---@field ['Infected Smoothness'] float
---@field ['Infected Speed'] float
---@field ['Infected TransformZ'] float
---@field ['Infected - Advanced'] FAdvancedEffectFeatures
---@field ['Colored AO'] boolean
---@field mColoredAO UMaterial
---@field iColoredAO UMaterialInstanceDynamic
---@field ['Colored AO Color'] FLinearColor
---@field ['Colored AO Intensity'] float
---@field ['Colored AO - Advanced'] FAdvancedEffectFeatures
---@field ['Camera Shake'] boolean
---@field mCameraShake UMaterial
---@field iCameraShake UMaterialInstanceDynamic
---@field ['Camera Shake Power (X)'] float
---@field ['Camera Shake Power (Y)'] float
---@field ['Camera Shake Frequency'] float
---@field ['Camera Shake - Advanced'] FAdvancedEffectFeatures
---@field ['Disco Ball'] boolean
---@field mDiscoBall UMaterial
---@field iDiscoBall UMaterialInstanceDynamic
---@field ['Disco Ball WS Center'] FVector3DN
---@field ['Disco Ball Color 1'] FLinearColor
---@field ['Disco Ball Color 2'] FLinearColor
---@field ['Disco Ball Block Scale'] FVector
---@field ['Disco Ball Block Distribution'] float
---@field ['Disco Ball Rotation Speed'] float
---@field ['Disco Ball Manual Rotation'] float
---@field ['Disco Ball - Advanced'] FAdvancedEffectFeatures
---@field ['Hazy Lights'] boolean
---@field mHazyLights UMaterial
---@field iHazyLights UMaterialInstanceDynamic
---@field ['Hazy Lights Move Speed'] FVector2DN
---@field ['Hazy Lights Position'] FVector2DN
---@field ['Hazy Lights - Advanced'] FAdvancedEffectFeatures
---@field ['Melted World'] boolean
---@field mMeltedWorld UMaterial
---@field iMeltedWorld UMaterialInstanceDynamic
---@field ['Melted World Size'] FVector
---@field ['Melted World Distance'] float
---@field ['Melted World Power'] float
---@field ['Melted World Sharpness'] float
---@field ['Melted World - Advanced'] FAdvancedEffectFeatures
---@field ['Selective Color'] boolean
---@field mSelectiveColor UMaterial
---@field iSelectiveColor UMaterialInstanceDynamic
---@field ['Selective Color Mask Color'] FLinearColor
---@field ['Selective Color Hue Tolerance'] float
---@field ['Selective Color Saturation Tolerance'] float
---@field ['Selective Color Value Tolerance'] float
---@field ['Selective Color - Advanced'] FAdvancedEffectFeatures
---@field ['Screen Fire'] boolean
---@field mScreenFire UMaterial
---@field iScreenFire UMaterialInstanceDynamic
---@field ['Screen Fire Color'] FLinearColor
---@field ['Screen Fire Distortion Amount'] float
---@field ['Screen Fire Mask Contrast'] float
---@field ['Screen Fire Mask Scale'] float
---@field ['Screen Fire Flame Tiling'] float
---@field ['Screen Fire Speed'] float
---@field ['Screen Fire - Advanced'] FAdvancedEffectFeatures
---@field Haunted boolean
---@field mHaunted UMaterial
---@field iHaunted UMaterialInstanceDynamic
---@field ['Haunted Amount'] float
---@field ['Haunted Mask Scale'] float
---@field ['Haunted Texture'] UTexture2D
---@field ['Haunted Texture Scale'] float
---@field ['Haunted - Advanced'] FAdvancedEffectFeatures
---@field ['Grid Cell'] boolean
---@field mGridCell UMaterial
---@field iGridCell UMaterialInstanceDynamic
---@field ['Grid Cell Animated'] boolean
---@field ['Grid Cell Animation Speed'] float
---@field ['Grid Cell Color'] FLinearColor
---@field ['Grid Cell Void Color'] FLinearColor
---@field ['Grid Cell Tiling'] float
---@field ['Grid Cell Transition Amount'] float
---@field ['Lens Distortion'] boolean
---@field mLensDistortion UMaterial
---@field iLensDistortion UMaterialInstanceDynamic
---@field ['Lens Distortion Optic Refinement'] float
---@field ['Lens Distortion Optic Size'] float
---@field ['Lens Distortion Optic Position X'] float
---@field ['Lens Distortion Optic Position Y'] float
---@field ['Lens Distortion Scope Texture'] UTexture2D
---@field ['Lens Distortion Scope Texture Scale X'] float
---@field ['Lens Distortion Scope Texture Scale Y'] float
---@field ['Lens Distortion - Advanced'] FAdvancedEffectFeatures
---@field ['Grid Cell - Advanced'] FAdvancedEffectFeatures
---@field Zone boolean
---@field mZone UMaterial
---@field iZone UMaterialInstanceDynamic
---@field ['Zone Center'] FLinearColor
---@field ['Zone Radius'] float
---@field ['Zone Edge Hardness'] float
---@field ['Zone Edge Color'] FLinearColor
---@field ['Zone Coverage Color'] FLinearColor
---@field ['Zone - Advanced'] FAdvancedEffectFeatures
---@field Pyramid boolean
---@field mPyramid UMaterial
---@field iPyramid UMaterialInstanceDynamic
---@field ['Pyramid Masked'] boolean
---@field ['Pyramid Background Color'] FLinearColor
---@field ['Pyramid Width'] float
---@field ['Pyramid Pan'] float
---@field ['Pyramid Tile Amount'] float
---@field ['Pyramid - Advanced'] FAdvancedEffectFeatures
---@field Mojo boolean
---@field mMojo UMaterial
---@field iMojo UMaterialInstanceDynamic
---@field ['Mojo Animated'] boolean
---@field ['Mojo Animation Speed'] float
---@field ['Mojo Mask'] UTexture2D
---@field ['Mojo Distortion Map'] UTexture2D
---@field ['Mojo Distortion Amount'] float
---@field ['Mojo Color'] FLinearColor
---@field ['Mojo Intensity'] float
---@field ['Mojo Phase'] float
---@field ['Mojo Tolerance'] float
---@field ['Mojo - Advanced'] FAdvancedEffectFeatures
---@field ['Gradient Fog'] boolean
---@field mGradientFog UMaterial
---@field iGradientFog UMaterialInstanceDynamic
---@field ['Gradient Fog Colors'] TArray<FColor>
---@field ['Gradient Fog Distance'] float
---@field ['Gradient Fog Sharpness'] float
---@field ['Gradient Fog - Advanced'] FAdvancedEffectFeatures
---@field ColorIndexRT UTextureRenderTarget2D
---@field M_ColorIndexer UMaterial
---@field I_ColorIndexer UMaterialInstanceDynamic
---@field Dither boolean
---@field mDither UMaterial
---@field iDither UMaterialInstanceDynamic
---@field ['Dither Limit'] float
---@field ['Dither - Advanced'] FAdvancedEffectFeatures
---@field ['Speed Lines'] boolean
---@field ['mSpeedLines '] UMaterial
---@field iSpeedLines UMaterialInstanceDynamic
---@field ['Speed Lines Intensity'] float
---@field ['Speed Lines Line Width'] float
---@field ['Speed Lines Speed'] float
---@field ['Speed Lines Mask Radius'] float
---@field ['Speed Lines Mask Hardness'] float
---@field ['Speed Lines - Advanced'] FAdvancedEffectFeatures
---@field ['Cyber Scan'] boolean
---@field mCyberScan UMaterial
---@field iCyberScan UMaterialInstanceDynamic
---@field ['Cyber Scan Speed'] float
---@field ['Cyber Scan - Advanced'] FAdvancedEffectFeatures
local AChameleon_C = {}

---@param IsEnabled boolean
AChameleon_C['Cyber Scan Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Speed Lines Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Dither Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Gradient Fog Func'] = function(self, IsEnabled) end
---@param Material UMaterial
---@param Instance UMaterialInstanceDynamic
AChameleon_C['Create Effect Material Instance'] = function(self, Material, Instance) end
---@param IsEnabled boolean
AChameleon_C['Mojo Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Pyramid Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Zone Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Lens Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Grid Cell Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Haunted Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Screen Fire Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Selective Color Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Melted World Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Hazy Lights Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Disco Ball Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Camera Shake Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Colored AO Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Infected Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Actor Featurette Func'] = function(self, IsEnabled) end
---@param Features FAdvancedEffectFeaturesNoCustomDepth
---@param Material UMaterial
---@param Dynamic_Material_Instance UMaterialInstanceDynamic
AChameleon_C['Set Advanced Effect Features (No Custom Depth)'] = function(self, Features, Material, Dynamic_Material_Instance) end
---@param Features FAdvancedEffectFeatures
---@param Material UMaterial
---@param Dynamic_Material_Instance UMaterialInstanceDynamic
AChameleon_C['Set Advanced Effect Features'] = function(self, Features, Material, Dynamic_Material_Instance) end
---@param IsEnabled boolean
AChameleon_C['Wired Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Sketch Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Alarm Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Digitize Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['World Glitch Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['World Splash Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Snow Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Letterboxing Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Kaleidoscope Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['2D Transform Func'] = function(self, IsEnabled) end
---@param Priority int32
---@param Material UMaterial
function AChameleon_C:SetEffectPriority(Priority, Material) end
function AChameleon_C:ApplyChameleonSettings() end
---@param IsEnabled boolean
AChameleon_C['Custom Depth Highlighter (NC) Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Custom Depth Highlighter Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Neon Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Frost Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Anamorphic Lens Flares Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Toon Shading Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Sharpen Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Screen Decals Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Screen Damage Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Magic Transitions Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Drawing Func'] = function(self, IsEnabled) end
---@param Condition boolean
AChameleon_C['Distance Distortion Func'] = function(self, Condition) end
---@param Condition boolean
AChameleon_C['Sonar Func'] = function(self, Condition) end
---@param Condition boolean
AChameleon_C['Circles Func'] = function(self, Condition) end
---@param Condition boolean
AChameleon_C['LOOK Func'] = function(self, Condition) end
---@param IsEnabled boolean
AChameleon_C['TV Noise Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Tiles Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Squares Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Pulse Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Kuwahara Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Iridescent Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Invert Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Hard Emboss Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Emboss Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Edge Detect Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['ASCII Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Bleach Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Scratches Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Distance Fog Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Screen Waves Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Radial Blur Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Monochrome Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Hue Panner Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['MonitorFX Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Glitch Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Comic Func'] = function(self, IsEnabled) end
---@param Condition boolean
AChameleon_C['Colorize Func'] = function(self, Condition) end
---@param IsEnabled boolean
AChameleon_C['Blur Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Pixel Dissolve Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Drug Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Alcohol Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Mosaic Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Screen Drops Func'] = function(self, IsEnabled) end
function AChameleon_C:InitChameleon() end
---@param IsEnabled boolean
AChameleon_C['Channel Swapper Func'] = function(self, IsEnabled) end
---@param IsEnabled boolean
AChameleon_C['Channel Clamper Func'] = function(self, IsEnabled) end
AChameleon_C['Create Material Instances'] = function(self, ) end
function AChameleon_C:UserConstructionScript() end
---@param OtherActor AActor
function AChameleon_C:ReceiveActorBeginOverlap(OtherActor) end
---@param DeltaSeconds float
function AChameleon_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AChameleon_C:ExecuteUbergraph_Chameleon(EntryPoint) end


