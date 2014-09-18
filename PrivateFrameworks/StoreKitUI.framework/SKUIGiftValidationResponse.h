/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUIGiftValidationResponse : NSObject {
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    bool_valid;
}

@property(readonly) NSString * errorString;
@property(readonly) NSString * giftKey;
@property(readonly) NSString * totalGiftAmountString;
@property(getter=isValid,readonly) bool valid;

- (void).cxx_destruct;
- (id)errorString;
- (id)giftKey;
- (id)initWithValidationDictionary:(id)arg1;
- (bool)isValid;
- (id)totalGiftAmountString;

@end
