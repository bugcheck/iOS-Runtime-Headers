/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSAnimationSettings, BSMachSendRight, BSMutableSettings, NSSet;

@interface FBSSceneTransitionContext : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_actions;
    BSMachSendRight *_animationFencePort;
    BSAnimationSettings *_animationSettings;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

@property(copy) NSSet * actions;
@property(copy) BSMachSendRight * animationFencePort;
@property(copy) BSAnimationSettings * animationSettings;

+ (id)transitionContext;

- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)actions;
- (id)animationFencePort;
- (id)animationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setActions:(id)arg1;
- (void)setAnimationFencePort:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (id)transientLocalClientSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
