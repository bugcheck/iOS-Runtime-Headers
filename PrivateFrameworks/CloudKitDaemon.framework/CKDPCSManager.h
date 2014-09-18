/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, CKDPCSCache, CKDPCSFetchAggregator, NSMutableDictionary, NSOperationQueue, NSString;

@interface CKDPCSManager : NSObject {
    NSMutableDictionary *_backgroundRecordCacheByPrivateZoneID;
    CKDPCSCache *_backgroundZoneCache;
    CKDClientContext *_context;
    NSString *_currentAccountIdentifier;
    struct _PCSIdentityData { } *_myPCSIdentity;
    NSOperationQueue *_operationQueue;
    struct _PCSIdentityData { } *_publicZoneIdentity;
    NSMutableDictionary *_recordCacheByPrivateZoneID;
    CKDPCSFetchAggregator *_recordFetchAggregator;
    NSString *_serviceName;
    CKDPCSCache *_shareCache;
    CKDPCSCache *_zoneCache;
}

@property(retain) NSMutableDictionary * backgroundRecordCacheByPrivateZoneID;
@property(retain) CKDPCSCache * backgroundZoneCache;
@property(readonly) CKDClientContext * context;
@property(retain) NSString * currentAccountIdentifier;
@property struct _PCSIdentityData { }* myPCSIdentity;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) NSMutableDictionary * recordCacheByPrivateZoneID;
@property(retain) CKDPCSFetchAggregator * recordFetchAggregator;
@property(retain) NSString * serviceName;
@property(retain) CKDPCSCache * shareCache;
@property(retain) CKDPCSCache * zoneCache;

- (void).cxx_destruct;
- (void)_fetchPCSForRecordWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_fetchPCSForShareWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_fetchPCSForZoneWithIDFromServer:(id)arg1 operation:(id)arg2 forCache:(id)arg3;
- (void)_handleRecordFetchedFromServer:(id)arg1 withID:(id)arg2 forCache:(id)arg3 operation:(id)arg4 error:(id)arg5;
- (id)_newPCSRecordCache;
- (void)_saveNewPCSOnDefaultZone:(id)arg1 operation:(id)arg2 cache:(id)arg3;
- (id)_serviceNameForContainerID:(id)arg1;
- (id)addWebSharingIdentity:(struct _PCSIdentityData { }*)arg1 toRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)backgroundRecordCacheByPrivateZoneID;
- (id)backgroundZoneCache;
- (void)clearPCSCaches;
- (id)context;
- (struct _PCSIdentityData { }*)copyServiceIdentityWithError:(id*)arg1;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 webSharingIdentity:(struct _PCSIdentityData { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { }*)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (struct _PCSIdentityData { }*)createWebSharingIdentityFromData:(id)arg1 error:(id*)arg2;
- (struct _PCSIdentityData { }*)createWebSharingIdentityWithError:(id*)arg1;
- (struct _OpaquePCSShareProtection { }*)createZonePCSFromData:(id)arg1 error:(id*)arg2;
- (struct _OpaquePCSShareProtection { }*)createZonePCSWithError:(id*)arg1;
- (id)currentAccountIdentifier;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)dataFromWebSharingIdentity:(struct _PCSIdentityData { }*)arg1 error:(id*)arg2;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)etagFromPCSData:(id)arg1;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (void)fetchPCSForRecordWithID:(id)arg1 operation:(id)arg2 fetchFromServer:(bool)arg3 withCompletionHandler:(id)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 operation:(id)arg2 fetchFromServer:(bool)arg3 withCompletionHandler:(id)arg4;
- (void)fetchPCSForZoneWithID:(id)arg1 operation:(id)arg2 fetchFromServer:(bool)arg3 withCompletionHandler:(id)arg4;
- (id)initWithClientContext:(id)arg1;
- (struct _PCSIdentityData { }*)myPCSIdentity;
- (id)newAssetKey;
- (id)operationQueue;
- (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection { }*)arg1;
- (id)recordCacheByPrivateZoneID;
- (id)recordFetchAggregator;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (id)removeWebSharingIdentity:(struct _PCSIdentityData { }*)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)repairZonePCSData:(id)arg1 error:(id*)arg2;
- (id)serviceName;
- (void)setBackgroundRecordCacheByPrivateZoneID:(id)arg1;
- (void)setBackgroundZoneCache:(id)arg1;
- (void)setCurrentAccountIdentifier:(id)arg1;
- (void)setMyPCSIdentity:(struct _PCSIdentityData { }*)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3;
- (void)setRecordCacheByPrivateZoneID:(id)arg1;
- (void)setRecordFetchAggregator:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShareCache:(id)arg1;
- (void)setZoneCache:(id)arg1;
- (id)shareCache;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 withError:(id*)arg3;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection { }*)arg2 withError:(id*)arg3;
- (id)zoneCache;

@end
