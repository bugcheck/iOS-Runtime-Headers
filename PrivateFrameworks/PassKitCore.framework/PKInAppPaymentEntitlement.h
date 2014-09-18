/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {
    NSArray *_merchantIdentifiers;
    bool_ignoreMerchantIdentifiers;
}

@property(readonly) bool hasMerchantIdentifiers;
@property(readonly) bool ignoreMerchantIdentifiers;

- (void)_probeEntitlementsWithToken:(struct { unsigned int x1[8]; })arg1;
- (void)dealloc;
- (bool)hasMerchantIdentifier:(id)arg1;
- (bool)hasMerchantIdentifiers;
- (bool)ignoreMerchantIdentifiers;
- (id)initWithToken:(struct { unsigned int x1[8]; })arg1;

@end
