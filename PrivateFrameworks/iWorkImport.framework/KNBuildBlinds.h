/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNMotionBlurAnimationPluginWrapper, NSMutableArray, NSString;

@interface KNBuildBlinds : KNAnimationEffect <KNChunkableBuildAnimator, KNAnimationPluginArchiving> {
    NSMutableArray *_layerToOldParentArray;
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)blindsAnimationsWithContext:(id)arg1 animationContext:(id)arg2 layerToOldParentArray:(id)arg3;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)generateParticles:(unsigned long long)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 direction:(unsigned long long)arg3 animationContext:(id)arg4;
+ (id)layersFromParticles:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 mainLayer:(id)arg3 direction:(unsigned long long)arg4 animationContext:(id)arg5;
+ (id)localizedMenuString:(int)arg1;
+ (bool)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;

@end
