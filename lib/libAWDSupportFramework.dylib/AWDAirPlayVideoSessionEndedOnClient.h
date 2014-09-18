/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionEndedOnClient : PBCodable <NSCopying> {
    struct { 
        unsigned int bandwidthMax : 1; 
        unsigned int bandwidthMean : 1; 
        unsigned int bandwidthStdDev : 1; 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int localFairPlayCount : 1; 
        unsigned int localNonFairPlayCount : 1; 
        unsigned int readyToPlayMs : 1; 
        unsigned int reason : 1; 
        unsigned int remoteFairPlayCount : 1; 
        unsigned int remoteNonFairPlayCount : 1; 
        unsigned int stallCount : 1; 
    double _bandwidthMax;
    double _bandwidthMean;
    double _bandwidthStdDev;
    unsigned int _duration;
    } _has;
    unsigned int _localFairPlayCount;
    unsigned int _localNonFairPlayCount;
    unsigned int _readyToPlayMs;
    int _reason;
    unsigned int _remoteFairPlayCount;
    unsigned int _remoteNonFairPlayCount;
    NSString *_sessionUUID;
    unsigned int _stallCount;
    unsigned long long _timestamp;
}

@property double bandwidthMax;
@property double bandwidthMean;
@property double bandwidthStdDev;
@property unsigned int duration;
@property bool hasBandwidthMax;
@property bool hasBandwidthMean;
@property bool hasBandwidthStdDev;
@property bool hasDuration;
@property bool hasLocalFairPlayCount;
@property bool hasLocalNonFairPlayCount;
@property bool hasReadyToPlayMs;
@property bool hasReason;
@property bool hasRemoteFairPlayCount;
@property bool hasRemoteNonFairPlayCount;
@property(readonly) bool hasSessionUUID;
@property bool hasStallCount;
@property bool hasTimestamp;
@property unsigned int localFairPlayCount;
@property unsigned int localNonFairPlayCount;
@property unsigned int readyToPlayMs;
@property int reason;
@property unsigned int remoteFairPlayCount;
@property unsigned int remoteNonFairPlayCount;
@property(retain) NSString * sessionUUID;
@property unsigned int stallCount;
@property unsigned long long timestamp;

- (double)bandwidthMax;
- (double)bandwidthMean;
- (double)bandwidthStdDev;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasBandwidthMax;
- (bool)hasBandwidthMean;
- (bool)hasBandwidthStdDev;
- (bool)hasDuration;
- (bool)hasLocalFairPlayCount;
- (bool)hasLocalNonFairPlayCount;
- (bool)hasReadyToPlayMs;
- (bool)hasReason;
- (bool)hasRemoteFairPlayCount;
- (bool)hasRemoteNonFairPlayCount;
- (bool)hasSessionUUID;
- (bool)hasStallCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)localFairPlayCount;
- (unsigned int)localNonFairPlayCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)readyToPlayMs;
- (int)reason;
- (unsigned int)remoteFairPlayCount;
- (unsigned int)remoteNonFairPlayCount;
- (id)sessionUUID;
- (void)setBandwidthMax:(double)arg1;
- (void)setBandwidthMean:(double)arg1;
- (void)setBandwidthStdDev:(double)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasBandwidthMax:(bool)arg1;
- (void)setHasBandwidthMean:(bool)arg1;
- (void)setHasBandwidthStdDev:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasLocalFairPlayCount:(bool)arg1;
- (void)setHasLocalNonFairPlayCount:(bool)arg1;
- (void)setHasReadyToPlayMs:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRemoteFairPlayCount:(bool)arg1;
- (void)setHasRemoteNonFairPlayCount:(bool)arg1;
- (void)setHasStallCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocalFairPlayCount:(unsigned int)arg1;
- (void)setLocalNonFairPlayCount:(unsigned int)arg1;
- (void)setReadyToPlayMs:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setRemoteFairPlayCount:(unsigned int)arg1;
- (void)setRemoteNonFairPlayCount:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStallCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)stallCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
