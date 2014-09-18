/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimatedSlideModel, KNPlaybackSession, KNSlide, KNSlideNode, NSIndexSet, NSMutableArray, NSMutableSet, NSSet, NSString, TSDCanvas, TSUNoCopyDictionary;

@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing> {
    boolmEventTriggered;
    boolmIsInDelayBeforeActiveAnimations;
    boolmPlaysAutomaticTransitions;
    boolmQueuedTrigger;
    boolmShouldStopAnimations;
    boolmSkipDelayOnTransition;
    boolmSlideIsBuildable;
    boolmTransitionInitialized;
    NSMutableSet *mActiveAnimatedBuilds;
    KNSlideNode *mAlternateDestinationSlideNode;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned long long mAnimationsActive;
    unsigned long long mAnimationsStarted;
    TSUNoCopyDictionary *mBuildsToStartAfterMovieStartsMap;
    TSDCanvas *mCanvas;
    NSMutableArray *mChunks;
    unsigned long long mCurrentEventIndex;
    SEL mEventAnimationActiveCallbackSelector;
    id mEventAnimationActiveCallbackTarget;
    SEL mEventEndCallbackSelector;
    id mEventEndCallbackTarget;
    SEL mEventImmediateEndCallbackSelector;
    id mEventImmediateEndCallbackTarget;
    NSIndexSet *mEventIndexesToAnimate;
    SEL mEventStartCallbackSelector;
    id mEventStartCallbackTarget;
    int mIsTexturePreloadingCancelled;
    SEL mMovieEndCallbackSelector;
    id mMovieEndCallbackTarget;
    NSMutableSet *mMovieRenderers;
    SEL mMovieStartCallbackSelector;
    id mMovieStartCallbackTarget;
    KNPlaybackSession *mSession;
    KNSlide *mSlide;
    unsigned long long mSlideNumber;
    TSUNoCopyDictionary *mTextureSetForRepMap;
    NSMutableSet *mTextureSets;
    double mTransitionStartTime;
}

@property(readonly) NSSet * activeAnimatedBuilds;
@property(readonly) TSDCanvas * canvas;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long eventCount;
@property bool eventHasTriggered;
@property unsigned long long eventIndex;
@property(copy) NSIndexSet * eventIndexesToAnimate;
@property(readonly) bool hasBuilds;
@property(readonly) unsigned long long hash;
@property(readonly) bool isAnimating;
@property(readonly) bool isDoneAnimating;
@property(readonly) bool isMovieAnimating;
@property(readonly) bool isNonMovieAnimationActive;
@property(readonly) bool isNonMovieAnimationAnimating;
@property(readonly) KNAnimatedSlideModel * model;
@property(readonly) NSSet * movieRenderers;
@property bool playsAutomaticTransitions;
@property(readonly) KNPlaybackSession * session;
@property bool skipDelayOnTransition;
@property(readonly) Class superclass;
@property bool triggerQueued;

+ (void)initialize;
+ (void)registerUserDefaults;

- (id)activeAnimatedBuilds;
- (void)addActiveAnimatedBuild:(id)arg1;
- (void)buildHasFinishedAnimating:(id)arg1;
- (void)cancelTexturePreloading;
- (id)canvas;
- (void)clearActiveAnimatedBuilds;
- (void)dealloc;
- (id)documentRoot;
- (unsigned long long)eventCount;
- (bool)eventHasTriggered;
- (unsigned long long)eventIndex;
- (id)eventIndexesToAnimate;
- (bool)hasBuilds;
- (bool)hasTransitionAtEventIndex:(long long)arg1;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)infosCurrentlyVisible;
- (id)infosVisibleAtEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;
- (void)interruptAndReset;
- (bool)isAnimating;
- (bool)isAtFirstEvent;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isDoneAnimating;
- (bool)isMovieAnimating;
- (bool)isNonMovieAnimationActive;
- (bool)isNonMovieAnimationAnimating;
- (bool)isPrintingCanvas;
- (id)model;
- (void)movieHasFinishedPlayback:(id)arg1;
- (id)movieRenderers;
- (void)p_addMovieRenderer:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (void)p_animateBuild:(id)arg1 isMoviePlayback:(bool)arg2;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateCurrentEventIgnoringDelays:(bool)arg1;
- (void)p_animateTransition:(id)arg1;
- (void)p_clearMovieRenderers;
- (id)p_getRenderersAtEventIndex:(long long)arg1;
- (id)p_infosForSlide;
- (double)p_minimumDelay;
- (void)p_movieStarted:(id)arg1;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1;
- (void)p_removeMovieRenderer:(id)arg1;
- (void)p_renderTexturesForEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 intoContext:(struct CGContext { }*)arg3 shouldPrepareBuildAnimation:(bool)arg4 ignoreBuildVisibility:(bool)arg5;
- (void)p_resetMovieTextures;
- (void)p_setupTransitionStartTime;
- (bool)p_shouldAddInfoToTree:(id)arg1;
- (bool)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2;
- (void)p_stopAllMovieRenderers;
- (void)p_tearDownTexturesIsExitingShow:(bool)arg1;
- (void)pauseAnimations;
- (bool)playAutomaticEvents;
- (bool)playsAutomaticTransitions;
- (void)preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2 priority:(long long)arg3 completionHandler:(id)arg4;
- (void)preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeActiveAnimatedBuild:(id)arg1;
- (void)renderCurrentEvent;
- (void)renderCurrentEventPreparingNextEvent:(bool)arg1;
- (void)renderEvent:(unsigned long long)arg1 intoContext:(struct CGContext { }*)arg2 ignoreBuildVisibility:(bool)arg3;
- (void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(bool)arg3 isIncomingSlideInTransition:(bool)arg4;
- (void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(bool)arg3;
- (void)renderEvent:(unsigned long long)arg1 shouldPrepareBuildAnimation:(bool)arg2 shouldPrepareTransition:(bool)arg3;
- (id)repsCurrentlyVisible;
- (void)reset;
- (void)resumeAnimationsIfPaused;
- (id)session;
- (void)setEventHasTriggered:(bool)arg1;
- (void)setEventIndex:(unsigned long long)arg1;
- (void)setEventIndexesToAnimate:(id)arg1;
- (void)setNewDestinationSlideNode:(id)arg1;
- (void)setPlaysAutomaticTransitions:(bool)arg1;
- (void)setSkipDelayOnTransition:(bool)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2;
- (void)setTriggerQueued:(bool)arg1;
- (void)setupTransition;
- (bool)shouldShowInstructionalText;
- (bool)shouldSuppressBackgrounds;
- (bool)skipDelayOnTransition;
- (bool)slideContainsRepsThatMustDrawOnMainThread;
- (unsigned long long)slideNumber;
- (void)stopAnimations;
- (id)textureSetForRep:(id)arg1;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)arg1;
- (void)triggerNextEvent;
- (void)triggerNextEventIgnoringDelay:(bool)arg1;
- (bool)triggerQueued;

@end
