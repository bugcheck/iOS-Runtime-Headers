/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKGameCenterControllerDelegate>, GKHostedGameCenterViewController, GKRemoteGameCenterViewController, NSMutableDictionary, NSString, UIAlertController;

@interface GKGameCenterViewController : UINavigationController {
    UIAlertController *_alertController;
    <GKGameCenterControllerDelegate> *_gameCenterDelegateWeak;
    GKHostedGameCenterViewController *_privateViewController;
    GKRemoteGameCenterViewController *_remoteViewController;
    NSMutableDictionary *_volatileProperties;
}

@property(retain) UIAlertController * alertController;
@property <GKGameCenterControllerDelegate> * gameCenterDelegate;
@property(retain) NSString * leaderboardCategory;
@property(retain) NSString * leaderboardIdentifier;
@property long long leaderboardTimeScope;
@property(retain) GKHostedGameCenterViewController * privateViewController;
@property(retain) GKRemoteGameCenterViewController * remoteViewController;
@property long long viewState;
@property(retain) NSMutableDictionary * volatileProperties;

+ (bool)_preventsAppearanceProxyCustomization;
+ (bool)accessInstanceVariablesDirectly;

- (bool)_canSetPropertiesOnRemoteViewController;
- (void)_flushVolatileProperties;
- (bool)_remoteControllerIsPresented;
- (void)_setupChildViewController;
- (id)alertController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (id)gameCenterDelegate;
- (id)init;
- (id)leaderboardCategory;
- (id)leaderboardIdentifier;
- (long long)leaderboardTimeScope;
- (void)loadView;
- (void)notifyDelegateOnWillFinish;
- (id)privateViewController;
- (id)remoteViewController;
- (void)setAlertController:(id)arg1;
- (void)setGameCenterDelegate:(id)arg1;
- (void)setLeaderboardCategory:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardTimeScope:(long long)arg1;
- (void)setPrivateViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setViewState:(long long)arg1;
- (void)setVolatileProperties:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)valueForKey:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (long long)viewState;
- (void)viewWillAppear:(bool)arg1;
- (id)volatileProperties;

@end
