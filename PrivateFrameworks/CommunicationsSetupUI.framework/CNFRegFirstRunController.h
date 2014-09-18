/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class <CNFRegFirstRunDelegate>, IMAccount, NSString, NSTimer, UIBarButtonItem;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    IMAccount *_account;
    Class _completionControllerClass;
    UIBarButtonItem *_customLeftButton;
    UIBarButtonItem *_customRightButton;
    <CNFRegFirstRunDelegate> *_delegate;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    NSTimer *_timeoutTimer;
    bool_cancelled;
    bool_previousHidesBackButton;
    bool_showingActivityIndicator;
    bool_timedOut;
}

@property(retain) IMAccount * account;
@property Class completionControllerClass;
@property(readonly) long long currentAppearanceStyle;
@property(retain) UIBarButtonItem * customLeftButton;
@property(retain) UIBarButtonItem * customRightButton;
@property(copy,readonly) NSString * debugDescription;
@property <CNFRegFirstRunDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool previousHidesBackButton;
@property(retain) UIBarButtonItem * previousLeftButton;
@property(retain) UIBarButtonItem * previousRightButton;
@property(readonly) Class superclass;
@property bool timedOut;

- (void)_cancelValidationMode;
- (void)_executeDismissBlock:(id)arg1;
- (void)_handleReturnKeyTapped:(id)arg1;
- (void)_handleTimeout;
- (void)_handleValidationModeCancelled;
- (bool)_hidesBackButton;
- (id)_leftButtonItem;
- (void)_leftButtonTapped;
- (void)_refreshCurrentState;
- (void)_refreshNavBarAnimated:(bool)arg1;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setupEventHandlers;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2 allowCancel:(bool)arg3;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2;
- (void)_startListeningForReturnKey;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_startValidationModeAnimated:(bool)arg1 allowCancel:(bool)arg2;
- (void)_startValidationModeAnimated:(bool)arg1;
- (void)_stopActivityIndicatorAnimated:(bool)arg1;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(bool)arg2;
- (void)_stopListeningForReturnKey;
- (void)_stopTimeout;
- (void)_stopValidationModeAnimated:(bool)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)_validationModeCancelButton;
- (id)account;
- (Class)completionControllerClass;
- (long long)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (id)customTitle;
- (void)dealloc;
- (id)delegate;
- (bool)dismissWithState:(unsigned long long)arg1;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1;
- (bool)previousHidesBackButton;
- (id)previousLeftButton;
- (id)previousRightButton;
- (bool)pushCompletionControllerIfPossible;
- (void)setAccount:(id)arg1;
- (void)setCellsChecked:(bool)arg1;
- (void)setCompletionControllerClass:(Class)arg1;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviousHidesBackButton:(bool)arg1;
- (void)setPreviousLeftButton:(id)arg1;
- (void)setPreviousRightButton:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (bool)timedOut;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
