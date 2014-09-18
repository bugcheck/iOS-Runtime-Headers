/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SSPurchaseRequestDelegate>, NSArray, NSMutableSet, NSString, SSPurchaseManager;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {
    id _completionBlock;
    NSMutableSet *_openPurchaseIdentifiers;
    id _purchaseBlock;
    SSPurchaseManager *_purchaseManager;
    id _purchaseResponseBlock;
    NSArray *_purchases;
    bool_createsDownloads;
    bool_isBackgroundRequest;
    bool_needsAuthentication;
    bool_shouldValidatePurchases;
}

@property(getter=isBackgroundRequest) bool backgroundRequest;
@property bool createsDownloads;
@property(copy,readonly) NSString * debugDescription;
@property <SSPurchaseRequestDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool needsAuthentication;
@property(readonly) NSArray * purchases;
@property bool shouldValidatePurchases;
@property(readonly) Class superclass;

- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)cancel;
- (id)copyXPCEncoding;
- (bool)createsDownloads;
- (void)dealloc;
- (id)init;
- (id)initWithPurchases:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundRequest;
- (bool)needsAuthentication;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (id)purchases;
- (void)setBackgroundRequest:(bool)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setShouldValidatePurchases:(bool)arg1;
- (bool)shouldValidatePurchases;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(id)arg2;
- (void)startWithPurchaseResponseBlock:(id)arg1 completionBlock:(id)arg2;

@end
