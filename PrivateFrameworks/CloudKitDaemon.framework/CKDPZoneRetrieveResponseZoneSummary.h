/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPZone, NSData;

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int assetQuotaUsage : 1; 
        unsigned int metadataQuotaUsage : 1; 
        unsigned int deviceCount : 1; 
    long long _assetQuotaUsage;
    NSData *_clientChangeToken;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    } _has;
    long long _metadataQuotaUsage;
    CKDPZone *_targetZone;
}

@property long long assetQuotaUsage;
@property(retain) NSData * clientChangeToken;
@property(retain) NSData * currentServerContinuationToken;
@property int deviceCount;
@property bool hasAssetQuotaUsage;
@property(readonly) bool hasClientChangeToken;
@property(readonly) bool hasCurrentServerContinuationToken;
@property bool hasDeviceCount;
@property bool hasMetadataQuotaUsage;
@property(readonly) bool hasTargetZone;
@property long long metadataQuotaUsage;
@property(retain) CKDPZone * targetZone;

- (void).cxx_destruct;
- (long long)assetQuotaUsage;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerContinuationToken;
- (id)description;
- (int)deviceCount;
- (id)dictionaryRepresentation;
- (bool)hasAssetQuotaUsage;
- (bool)hasClientChangeToken;
- (bool)hasCurrentServerContinuationToken;
- (bool)hasDeviceCount;
- (bool)hasMetadataQuotaUsage;
- (bool)hasTargetZone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)metadataQuotaUsage;
- (bool)readFrom:(id)arg1;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setCurrentServerContinuationToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setHasAssetQuotaUsage:(bool)arg1;
- (void)setHasDeviceCount:(bool)arg1;
- (void)setHasMetadataQuotaUsage:(bool)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setTargetZone:(id)arg1;
- (id)targetZone;
- (void)writeTo:(id)arg1;

@end
