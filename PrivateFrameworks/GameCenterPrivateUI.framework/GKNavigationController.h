/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSMutableArray, NSString;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate> {
    NSMutableArray *_deferredTransitions;
}

@property(copy,readonly) NSString * debugDescription;
@property(retain) NSMutableArray * deferredTransitions;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(bool)arg3;
- (void)_performDeferredTransition;
- (void)dealloc;
- (id)deferredTransitions;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDeferredTransitions:(id)arg1;
- (void)setupGKNavigationController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;

@end
