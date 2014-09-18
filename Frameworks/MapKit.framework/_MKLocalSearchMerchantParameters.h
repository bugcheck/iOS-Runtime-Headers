/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSDate, NSString;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

@property(copy) NSString * merchantCode;
@property(copy) NSString * paymentNetwork;
@property(retain) NSDate * transactionDate;
@property(retain) CLLocation * transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)merchantCode;
- (id)paymentNetwork;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (id)transactionDate;
- (id)transactionLocation;

@end
