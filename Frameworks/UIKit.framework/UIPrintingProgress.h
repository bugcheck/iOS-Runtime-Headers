/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {
    UIAlertView *_alert;
    id _cancelHandler;
    double _displayTime;
    NSString *_printerName;
    double _startTime;
    UIPrintingProgressViewController *_viewController;
    bool_donePrinting;
    bool_forceDisplayAsAlert;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)endProgress;
- (void)hideProgressAnimated:(bool)arg1;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(bool)arg2 cancelHandler:(id)arg3;
- (double)nextPrintDelay;
- (void)progressCancel;
- (bool)progressVisible;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)showProgress:(id)arg1 immediately:(bool)arg2;

@end
