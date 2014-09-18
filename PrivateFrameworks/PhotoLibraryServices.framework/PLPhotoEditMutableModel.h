/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSString, _UIDynamicValueAnimation;

@interface PLPhotoEditMutableModel : PLPhotoEditModel {
    _UIDynamicValueAnimation *_currentCopyAnimation;
    long long _transactionDepth;
}

@property(copy) NSArray * autoRedEyeCorrections;
@property(copy) NSString * autoSmartColorIdentifier;
@property double autoSmartColorLevel;
@property(copy) NSString * autoSmartToneIdentifier;
@property double autoSmartToneLevel;
@property(copy) NSString * autoWhiteBalanceIdentifier;
@property(copy) NSDictionary * autoWhiteBalanceSettings;
@property double blackPointLevelOffset;
@property double brightnessLevelOffset;
@property double bwGrainLevelOffset;
@property double bwHueLevelOffset;
@property double bwNeutralGammaLevelOffset;
@property double bwStrengthLevelOffset;
@property double bwToneLevelOffset;
@property double colorCastLevelOffset;
@property double colorContrastLevelOffset;
@property double colorVibrancyLevelOffset;
@property double contrastLevelOffset;
@property(copy) NSString * effectFilterName;
@property long long effectFilterVersion;
@property double exposureLevelOffset;
@property double highlightsLevelOffset;
@property(copy) NSArray * legacyAutoEnhanceFilters;
@property bool legacyAutoEnhanceIsOn;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property(copy) NSArray * redEyeCorrections;
@property unsigned long long rotation;
@property double shadowsLevelOffset;
@property(getter=isSmartBWEnabled) bool smartBWEnabled;
@property double smartBWLevel;
@property(copy) NSDictionary * smartBWStatistics;
@property(getter=isSmartColorEnabled) bool smartColorEnabled;
@property double smartColorLevel;
@property(copy) NSDictionary * smartColorStatistics;
@property(getter=isSmartToneEnabled) bool smartToneEnabled;
@property double smartToneLevel;
@property(copy) NSDictionary * smartToneStatistics;
@property double straightenAngle;
@property(getter=isWhiteBalanceEnabled) bool whiteBalanceEnabled;
@property double whiteBalanceFaceI;
@property double whiteBalanceFaceQ;
@property double whiteBalanceFaceStrength;
@property double whiteBalanceFaceWarmth;

- (id)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(double*)arg1 toValue:(double)arg2;
- (void)addRedEyeCorrections:(id)arg1;
- (void)copyValuesFromModel:(id)arg1 animated:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)performChangesWithBlock:(id)arg1;
- (void)removeRedEyeCorrections:(id)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setAutoSmartColorIdentifier:(id)arg1;
- (void)setAutoSmartColorLevel:(double)arg1;
- (void)setAutoSmartToneIdentifier:(id)arg1;
- (void)setAutoSmartToneLevel:(double)arg1;
- (void)setAutoWhiteBalanceIdentifier:(id)arg1;
- (void)setAutoWhiteBalanceSettings:(id)arg1;
- (void)setBlackPointLevelOffset:(double)arg1;
- (void)setBrightnessLevelOffset:(double)arg1;
- (void)setBwGrainLevelOffset:(double)arg1;
- (void)setBwHueLevelOffset:(double)arg1;
- (void)setBwNeutralGammaLevelOffset:(double)arg1;
- (void)setBwStrengthLevelOffset:(double)arg1;
- (void)setBwToneLevelOffset:(double)arg1;
- (void)setColorCastLevelOffset:(double)arg1;
- (void)setColorContrastLevelOffset:(double)arg1;
- (void)setColorVibrancyLevelOffset:(double)arg1;
- (void)setContrastLevelOffset:(double)arg1;
- (void)setCropConstraintWidth:(long long)arg1 height:(long long)arg2;
- (void)setEffectFilterName:(id)arg1;
- (void)setEffectFilterVersion:(long long)arg1;
- (void)setExposureLevelOffset:(double)arg1;
- (void)setHighlightsLevelOffset:(double)arg1;
- (void)setLegacyAutoEnhanceFilters:(id)arg1;
- (void)setLegacyAutoEnhanceIsOn:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setShadowsLevelOffset:(double)arg1;
- (void)setSmartBWEnabled:(bool)arg1;
- (void)setSmartBWLevel:(double)arg1;
- (void)setSmartBWStatistics:(id)arg1;
- (void)setSmartColorEnabled:(bool)arg1;
- (void)setSmartColorLevel:(double)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneEnabled:(bool)arg1;
- (void)setSmartToneLevel:(double)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setStraightenAngle:(double)arg1;
- (void)setWhiteBalanceEnabled:(bool)arg1;
- (void)setWhiteBalanceFaceI:(double)arg1;
- (void)setWhiteBalanceFaceQ:(double)arg1;
- (void)setWhiteBalanceFaceStrength:(double)arg1;
- (void)setWhiteBalanceFaceWarmth:(double)arg1;

@end
