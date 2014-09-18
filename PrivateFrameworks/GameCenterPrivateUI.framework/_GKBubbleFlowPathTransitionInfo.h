/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKBubbleSet, NSDictionary, UIView;

@interface _GKBubbleFlowPathTransitionInfo : NSObject {
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    NSDictionary *_auxiliaryInfo;
    } _bubbleEndPositionsByType[12];
    } _bubbleStartPositionsByType[12];
    GKBubbleSet *_bubbles;
    double _duration;
    UIView *_effectiveView;
    long long _focusBubbleType;
    long long _newlyVisibleBubbles;
    double _startTime;
    bool_couldUseFallbackAnimator;
}

@property(retain) NSDictionary * auxiliaryInfo;
@property GKBubbleSet * bubbles;
@property bool couldUseFallbackAnimator;
@property double duration;
@property UIView * effectiveView;
@property long long focusBubbleType;
@property long long newlyVisibleBubbles;
@property double startTime;

- (id)auxiliaryInfo;
- (id)bubbles;
- (bool)couldUseFallbackAnimator;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)effectiveView;
- (long long)focusBubbleType;
- (id)init;
- (long long)newlyVisibleBubbles;
- (void)setAuxiliaryInfo:(id)arg1;
- (void)setBubbles:(id)arg1;
- (void)setCouldUseFallbackAnimator:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEffectiveView:(id)arg1;
- (void)setFocusBubbleType:(long long)arg1;
- (void)setNewlyVisibleBubbles:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
