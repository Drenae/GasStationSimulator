#ifndef UE4SS_SDK_WidgetCarousel_HPP
#define UE4SS_SDK_WidgetCarousel_HPP

struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HighlightBrush;                                                       // 0x0008 (size: 0x88)
    FButtonStyle LeftButtonStyle;                                                     // 0x0090 (size: 0x278)
    FButtonStyle CenterButtonStyle;                                                   // 0x0308 (size: 0x278)
    FButtonStyle RightButtonStyle;                                                    // 0x0580 (size: 0x278)

}; // Size: 0x7F8

struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle InnerButtonStyle;                                                    // 0x0008 (size: 0x278)
    FSlateBrush NavigationButtonLeftImage;                                            // 0x0280 (size: 0x88)
    FSlateBrush NavigationButtonRightImage;                                           // 0x0308 (size: 0x88)

}; // Size: 0x390

#endif
