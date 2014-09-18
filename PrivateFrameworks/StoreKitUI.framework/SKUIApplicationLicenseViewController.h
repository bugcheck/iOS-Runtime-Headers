/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL, SKUIApplicationLicensePage, SSVLoadURLOperation, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (void)_displayPage:(id)arg1 error:(id)arg2;
- (id)initWithLicenseAgreementPage:(id)arg1;
- (id)initWithLicenseAgreementURL:(id)arg1;
- (void)loadView;
- (void)reloadData;
- (void)viewWillAppear:(bool)arg1;

@end
