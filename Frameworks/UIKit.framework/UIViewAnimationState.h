/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIBasicAnimationFactory>, CAMediaTimingFunction, NSMutableArray, NSString, NSUUID, UIView, UIViewAnimationState;

@interface UIViewAnimationState : NSObject {
    NSMutableArray *_addedCompletions;
    BOOL _allowUserInteractionToCutOffEndOfAnimation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alongsideAnimations;

    BOOL _animationDidStopSent;
    <_UIBasicAnimationFactory> *_animationFactory;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    NSString *_animationID;
    unsigned int _autoreverses : 1;
    unsigned int _cacheTransition : 1;
    void *_context;
    int _curve;
    CAMediaTimingFunction *_customCurve;
    double _delay;
    id _delegate;
    int _didEndCount;
    SEL _didEndSelector;
    double _duration;
    int _filter;
    float _filterValue;
    UIView *_filterView;
    double _frameInterval;
    unsigned int _layoutSubviews : 1;
    UIViewAnimationState *_nextState;
    struct CGPoint { 
        float x; 
        float y; 
    } _position;
    unsigned int _preventsAdditive : 1;
    float _repeatCount;
    BOOL _retainedSelf;
    unsigned int _roundsToInteger : 1;
    double _start;
    NSMutableArray *_trackedAnimations;
    int _transition;
    UIView *_transitionView;
    unsigned int _useCurrentLayerState : 1;
    NSUUID *_uuid;
    SEL _willStartSelector;
    unsigned int _willStartSent : 1;
}

@property(readonly) BOOL _allowsUserInteraction;

+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void*)arg2;

- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (void)_addAnimationStateForTracking:(id)arg1;
- (BOOL)_allowsUserInteraction;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 disableTrackingIfNeeded:(BOOL)arg2;
- (void)_runAlongsideAnimations;
- (void)_setAlongsideAnimations:(id)arg1;
- (BOOL)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2;
- (BOOL)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (id)_trackedAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)pop;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4;
- (void)setupCustomTimingCurve;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;

@end
