/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSSPropertyMap;

@interface TSCHConfiguration : NSObject {
    boolmDisableHighQualityRenderingIfNecessary;
    boolmExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    boolmShouldForceDiscreteGraphicsFor3D;
    boolmShowMessageOnSelection;
    boolmSupports3DFillDataEmbeddingRecovery;
    boolmSupportsChartDataEditor;
    boolmSupportsChartRangeEditingMode;
    boolmSupportsNumberFormatSameAsSource;
    boolmSupportsTextBackground;
    boolmSupportsTextWrapping;
    boolmUse3DFillFor3DChartFallback;
    Class mMultiDataChartOptionsControllerBuildSupportClass;
    NSString *mSaveChartStyleHelpKey;
}

@property(readonly) TSSPropertyMap * appSpecificPropertyOverrides;
@property bool disableHighQualityRenderingIfNecessary;
@property bool exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property Class multiDataChartOptionsControllerBuildSupportClass;
@property(copy) NSString * saveChartStyleHelpKey;
@property bool shouldForceDiscreteGraphicsFor3D;
@property bool showMessageOnSelection;
@property bool supports3DFillDataEmbeddingRecovery;
@property bool supportsChartDataEditor;
@property bool supportsChartRangeEditingMode;
@property bool supportsNumberFormatSameAsSource;
@property bool supportsTextBackground;
@property bool supportsTextWrapping;
@property bool use3DFillFor3DChartFallback;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)resetSharedChartConfiguration;
+ (id)sharedChartConfiguration;

- (id)appSpecificPropertyOverrides;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableHighQualityRenderingIfNecessary;
- (bool)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (id)init;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)saveChartStyleHelpKey;
- (void)setDisableHighQualityRenderingIfNecessary:(bool)arg1;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(bool)arg1;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1;
- (void)setSaveChartStyleHelpKey:(id)arg1;
- (void)setShouldForceDiscreteGraphicsFor3D:(bool)arg1;
- (void)setShowMessageOnSelection:(bool)arg1;
- (void)setSupports3DFillDataEmbeddingRecovery:(bool)arg1;
- (void)setSupportsChartDataEditor:(bool)arg1;
- (void)setSupportsChartRangeEditingMode:(bool)arg1;
- (void)setSupportsNumberFormatSameAsSource:(bool)arg1;
- (void)setSupportsTextBackground:(bool)arg1;
- (void)setSupportsTextWrapping:(bool)arg1;
- (void)setUse3DFillFor3DChartFallback:(bool)arg1;
- (bool)shouldForceDiscreteGraphicsFor3D;
- (bool)showMessageOnSelection;
- (bool)supports3DFillDataEmbeddingRecovery;
- (bool)supportsChartDataEditor;
- (bool)supportsChartRangeEditingMode;
- (bool)supportsNumberFormatSameAsSource;
- (bool)supportsTextBackground;
- (bool)supportsTextWrapping;
- (bool)use3DFillFor3DChartFallback;

@end
