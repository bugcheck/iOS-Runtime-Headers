/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSDictionary, NSString, NSURL, SKUIArtworkList, UIImage;

@interface SKUIRedeem : NSObject {
    double _ITunesPassLearnMoreAlertInterval;
    NSString *_balance;
    NSString *_credit;
    SKUIArtworkList *_headerArtworkList;
    UIImage *_headerImage;
    NSString *_inAppPurchase;
    NSArray *_items;
    NSArray *_links;
    NSString *_message;
    NSURL *_redirectURL;
    NSDictionary *_thankYouDictionary;
    NSString *_title;
    bool_hideItemView;
}

@property double ITunesPassLearnMoreAlertInterval;
@property(copy) NSString * balance;
@property(copy) NSString * credit;
@property(retain) SKUIArtworkList * headerArtworkList;
@property(retain) UIImage * headerImage;
@property bool hideItemView;
@property(retain) NSString * inAppPurchase;
@property(retain) NSArray * items;
@property(retain) NSArray * links;
@property(copy) NSString * message;
@property(retain) NSURL * redirectURL;
@property(retain) NSDictionary * thankYouDictionary;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (double)ITunesPassLearnMoreAlertInterval;
- (id)balance;
- (id)credit;
- (id)headerArtworkList;
- (id)headerImage;
- (bool)hideItemView;
- (id)inAppPurchase;
- (id)init;
- (id)items;
- (id)links;
- (id)message;
- (id)redirectURL;
- (void)setBalance:(id)arg1;
- (void)setCredit:(id)arg1;
- (void)setHeaderArtworkList:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHideItemView:(bool)arg1;
- (void)setITunesPassLearnMoreAlertInterval:(double)arg1;
- (void)setInAppPurchase:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setThankYouDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)thankYouDictionary;
- (id)title;

@end
