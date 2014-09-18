/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIImage, _UIBackdropColorSettings, _UIBackdropView;

@interface _UIBackdropViewSettings : NSObject {
    _UIBackdropView *_backdrop;
    long long _blurHardEdges;
    NSString *_blurQuality;
    double _blurRadius;
    double _colorBurnTintAlpha;
    double _colorBurnTintLevel;
    UIImage *_colorBurnTintMaskImage;
    _UIBackdropColorSettings *_colorSettings;
    UIColor *_colorTint;
    double _colorTintAlpha;
    double _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    UIColor *_combinedTintColor;
    double _darkeningTintAlpha;
    double _darkeningTintBrightness;
    double _darkeningTintHue;
    UIImage *_darkeningTintMaskImage;
    double _darkeningTintSaturation;
    double _filterMaskAlpha;
    UIImage *_filterMaskImage;
    long long _graphicsQuality;
    double _grayscaleTintAlpha;
    double _grayscaleTintLevel;
    double _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    UIColor *_legibleColor;
    long long _renderingHint;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    double _saturationDeltaFactor;
    double _scale;
    long long _stackingLevel;
    double _statisticsInterval;
    long long _style;
    long long _suppressSettingsDidChange;
    unsigned long long _version;
    bool_appliesTintAndBlurSettings;
    bool_backdropVisible;
    bool_darkenWithSourceOver;
    bool_designMode;
    bool_enabled;
    bool_explicitlySetGraphicsQuality;
    bool_highlighted;
    bool_lightenGrayscaleWithSourceOver;
    bool_requiresColorStatistics;
    bool_selected;
    bool_usesBackdropEffectView;
    bool_usesColorBurnTintView;
    bool_usesColorTintView;
    bool_usesContentView;
    bool_usesDarkeningTintView;
    bool_usesGrayscaleTintView;
    bool_zoomsBack;
}

@property bool appliesTintAndBlurSettings;
@property _UIBackdropView * backdrop;
@property(getter=isBackdropVisible) bool backdropVisible;
@property long long blurHardEdges;
@property(copy) NSString * blurQuality;
@property double blurRadius;
@property bool blursWithHardEdges;
@property double colorBurnTintAlpha;
@property double colorBurnTintLevel;
@property(retain) UIImage * colorBurnTintMaskImage;
@property(retain) _UIBackdropColorSettings * colorSettings;
@property(retain) UIColor * colorTint;
@property double colorTintAlpha;
@property double colorTintMaskAlpha;
@property(retain) UIImage * colorTintMaskImage;
@property(retain) UIColor * combinedTintColor;
@property bool darkenWithSourceOver;
@property double darkeningTintAlpha;
@property double darkeningTintBrightness;
@property double darkeningTintHue;
@property(retain) UIImage * darkeningTintMaskImage;
@property double darkeningTintSaturation;
@property(setter=setDesignMode:) bool designMode;
@property(getter=isEnabled) bool enabled;
@property bool explicitlySetGraphicsQuality;
@property double filterMaskAlpha;
@property(retain) UIImage * filterMaskImage;
@property long long graphicsQuality;
@property double grayscaleTintAlpha;
@property double grayscaleTintLevel;
@property double grayscaleTintMaskAlpha;
@property(retain) UIImage * grayscaleTintMaskImage;
@property(getter=isHighlighted) bool highlighted;
@property(retain) UIColor * legibleColor;
@property bool lightenGrayscaleWithSourceOver;
@property long long renderingHint;
@property bool requiresColorStatistics;
@property struct __CFRunLoopObserver { }* runLoopObserver;
@property double saturationDeltaFactor;
@property double scale;
@property(getter=isSelected) bool selected;
@property long long stackingLevel;
@property double statisticsInterval;
@property long long style;
@property long long suppressSettingsDidChange;
@property bool usesBackdropEffectView;
@property bool usesColorBurnTintView;
@property bool usesColorTintView;
@property bool usesContentView;
@property bool usesDarkeningTintView;
@property bool usesGrayscaleTintView;
@property unsigned long long version;
@property bool zoomsBack;

+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForPrivateStyle:(long long)arg1;
+ (id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForStyle:(long long)arg1;

- (void)addKeyPathObserver:(id)arg1;
- (bool)appliesTintAndBlurSettings;
- (id)backdrop;
- (long long)blurHardEdges;
- (id)blurQuality;
- (double)blurRadius;
- (bool)blursWithHardEdges;
- (void)clearRunLoopObserver;
- (double)colorBurnTintAlpha;
- (double)colorBurnTintLevel;
- (id)colorBurnTintMaskImage;
- (id)colorSettings;
- (id)colorTint;
- (double)colorTintAlpha;
- (double)colorTintMaskAlpha;
- (id)colorTintMaskImage;
- (id)combinedTintColor;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (bool)darkenWithSourceOver;
- (double)darkeningTintAlpha;
- (double)darkeningTintBrightness;
- (double)darkeningTintHue;
- (id)darkeningTintMaskImage;
- (double)darkeningTintSaturation;
- (void)dealloc;
- (void)decrementSuppressSettingsDidChange;
- (id)description;
- (bool)designMode;
- (bool)explicitlySetGraphicsQuality;
- (double)filterMaskAlpha;
- (id)filterMaskImage;
- (long long)graphicsQuality;
- (double)grayscaleTintAlpha;
- (double)grayscaleTintLevel;
- (double)grayscaleTintMaskAlpha;
- (id)grayscaleTintMaskImage;
- (void)incrementSuppressSettingsDidChange;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithDefaultValuesForGraphicsQuality:(long long)arg1;
- (bool)isBackdropVisible;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)legibleColor;
- (bool)lightenGrayscaleWithSourceOver;
- (void)removeKeyPathObserver:(id)arg1;
- (long long)renderingHint;
- (bool)requiresColorStatistics;
- (void)restoreDefaultValues;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (double)saturationDeltaFactor;
- (double)scale;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)setAppliesTintAndBlurSettings:(bool)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBlurHardEdges:(long long)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlursWithHardEdges:(bool)arg1;
- (void)setColorBurnTintAlpha:(double)arg1;
- (void)setColorBurnTintLevel:(double)arg1;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (void)setColorSettings:(id)arg1;
- (void)setColorTint:(id)arg1;
- (void)setColorTintAlpha:(double)arg1;
- (void)setColorTintMaskAlpha:(double)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setCombinedTintColor:(id)arg1;
- (void)setDarkenWithSourceOver:(bool)arg1;
- (void)setDarkeningTintAlpha:(double)arg1;
- (void)setDarkeningTintBrightness:(double)arg1;
- (void)setDarkeningTintHue:(double)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintSaturation:(double)arg1;
- (void)setDefaultValues;
- (void)setDesignMode:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExplicitlySetGraphicsQuality:(bool)arg1;
- (void)setFilterMaskAlpha:(double)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setGraphicsQuality:(long long)arg1;
- (void)setGrayscaleTintAlpha:(double)arg1;
- (void)setGrayscaleTintLevel:(double)arg1;
- (void)setGrayscaleTintMaskAlpha:(double)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLegibleColor:(id)arg1;
- (void)setLightenGrayscaleWithSourceOver:(bool)arg1;
- (void)setRenderingHint:(long long)arg1;
- (void)setRequiresColorStatistics:(bool)arg1;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStackingLevel:(long long)arg1;
- (void)setStackinglevel:(long long)arg1;
- (void)setStatisticsInterval:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuppressSettingsDidChange:(long long)arg1;
- (void)setUsesBackdropEffectView:(bool)arg1;
- (void)setUsesColorBurnTintView:(bool)arg1;
- (void)setUsesColorTintView:(bool)arg1;
- (void)setUsesContentView:(bool)arg1;
- (void)setUsesDarkeningTintView:(bool)arg1;
- (void)setUsesGrayscaleTintView:(bool)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (void)setZoomsBack:(bool)arg1;
- (long long)stackingLevel;
- (double)statisticsInterval;
- (long long)style;
- (long long)suppressSettingsDidChange;
- (bool)usesBackdropEffectView;
- (bool)usesColorBurnTintView;
- (bool)usesColorTintView;
- (bool)usesContentView;
- (bool)usesDarkeningTintView;
- (bool)usesGrayscaleTintView;
- (unsigned long long)version;
- (bool)zoomsBack;

@end
