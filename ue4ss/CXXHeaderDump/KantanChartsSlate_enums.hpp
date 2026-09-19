enum class ECartesianRangeBoundType {
    FixedValue = 0,
    FitToData = 1,
    FitToDataRounded = 2,
    ECartesianRangeBoundType_MAX = 3,
};

enum class ECartesianScalingType {
    FixedScale = 0,
    FixedRange = 1,
    ECartesianScalingType_MAX = 2,
};

enum class EChartAxisPosition {
    LeftBottom = 0,
    RightTop = 1,
    Floating = 2,
    EChartAxisPosition_MAX = 3,
};

enum class EKantanBarChartOrientation {
    Vertical = 0,
    Horizontal = 1,
    EKantanBarChartOrientation_MAX = 2,
};

enum class EKantanBarLabelPosition {
    NoLabels = 0,
    Standard = 1,
    Overlaid = 2,
    EKantanBarLabelPosition_MAX = 3,
};

enum class EKantanBarValueExtents {
    NoValueLines = 0,
    ZeroLineOnly = 1,
    ZeroAndMaxLines = 2,
    EKantanBarValueExtents_MAX = 3,
};

namespace EKantanDataPointSize {
    enum Type {
        Small = 0,
        Medium = 1,
        Large = 2,
        EKantanDataPointSize_MAX = 3,
    };
}

