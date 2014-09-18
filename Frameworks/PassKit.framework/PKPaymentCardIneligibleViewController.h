/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PKPaymentSetupViewControllerDelegate>, NSString, PKPaymentCredential, UIWebView;

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate> {
    PKPaymentCredential *_credential;
    id _learnMorePresentationHandler;
    id _preflightCompletion;
    long long _setupContext;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    UIWebView *_webView;
    bool_preloadLearnMoreWebView;
}

@property(retain) PKPaymentCredential * credential;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) id learnMorePresentationHandler;
@property bool preloadLearnMoreWebView;
@property long long setupContext;
@property <PKPaymentSetupViewControllerDelegate> * setupDelegate;
@property(readonly) Class superclass;

- (id)_alertWithLearnMoreURL:(id)arg1 isPreloaded:(bool)arg2;
- (id)_learnMoreURLForEligibiltyStatus:(long long)arg1;
- (void)_webViewDidLoad:(bool)arg1 withError:(id)arg2;
- (id)credential;
- (void)dealloc;
- (void)handleDone:(id)arg1;
- (id)initWithCredential:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)learnMorePresentationHandler;
- (void)preflightWithCompletion:(id)arg1;
- (bool)preloadLearnMoreWebView;
- (void)setCredential:(id)arg1;
- (void)setLearnMorePresentationHandler:(id)arg1;
- (void)setPreloadLearnMoreWebView:(bool)arg1;
- (void)setSetupContext:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (long long)setupContext;
- (id)setupDelegate;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)webView;
- (void)webViewDidFinishLoad:(id)arg1;

@end
