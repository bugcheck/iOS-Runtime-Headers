/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDate, NSString;

@interface CertificateViewController : UITableViewController {
    int _certUIAction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _certificateButtonActionHandler;

    NSString *_certificateButtonDescription;
    BOOL _certificateButtonIsDestructiveAction;
    NSString *_certificateButtonTitle;
    NSDate *_certificateExpiration;
    BOOL _certificateIsRoot;
    NSString *_certificateIssuer;
    NSArray *_certificateProperties;
    NSString *_certificatePurpose;
    NSString *_certificateTitle;
    id _certificateTrust;
    BOOL _showCertificateButton;
}

@property int certUIAction;
@property(copy) id certificateButtonActionHandler;
@property(retain) NSString * certificateButtonDescription;
@property BOOL certificateButtonIsDestructiveAction;
@property(retain) NSString * certificateButtonTitle;
@property(retain) NSDate * certificateExpiration;
@property BOOL certificateIsRoot;
@property(retain) NSString * certificateIssuer;
@property(retain) NSArray * certificateProperties;
@property(retain) NSString * certificatePurpose;
@property(retain) NSString * certificateTitle;
@property(retain) id certificateTrust;
@property BOOL showCertificateButton;

- (void).cxx_destruct;
- (int)certUIAction;
- (id)certificateButtonActionHandler;
- (id)certificateButtonDescription;
- (BOOL)certificateButtonIsDestructiveAction;
- (id)certificateButtonTitle;
- (id)certificateExpiration;
- (BOOL)certificateIsRoot;
- (id)certificateIssuer;
- (id)certificateProperties;
- (id)certificatePurpose;
- (id)certificateTitle;
- (id)certificateTrust;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCertUIAction:(int)arg1;
- (void)setCertificateButtonActionHandler:(id)arg1;
- (void)setCertificateButtonDescription:(id)arg1;
- (void)setCertificateButtonIsDestructiveAction:(BOOL)arg1;
- (void)setCertificateButtonTitle:(id)arg1;
- (void)setCertificateExpiration:(id)arg1;
- (void)setCertificateIsRoot:(BOOL)arg1;
- (void)setCertificateIssuer:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (void)setCertificatePurpose:(id)arg1;
- (void)setCertificateTitle:(id)arg1;
- (void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(BOOL)arg6 action:(int)arg7;
- (void)setCertificateTrust:(id)arg1;
- (void)setShowCertificateButton:(BOOL)arg1;
- (void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(id)arg5;
- (BOOL)showCertificateButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
