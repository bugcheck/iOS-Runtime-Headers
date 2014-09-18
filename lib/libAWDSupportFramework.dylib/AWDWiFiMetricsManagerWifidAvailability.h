/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerWifidAvailability : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int wifidBootTimeDiff : 1; 
        unsigned int pid : 1; 
    } _has;
    unsigned int _pid;
    unsigned long long _timestamp;
    double _wifidBootTimeDiff;
}

@property bool hasPid;
@property bool hasTimestamp;
@property bool hasWifidBootTimeDiff;
@property unsigned int pid;
@property unsigned long long timestamp;
@property double wifidBootTimeDiff;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPid;
- (bool)hasTimestamp;
- (bool)hasWifidBootTimeDiff;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pid;
- (bool)readFrom:(id)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifidBootTimeDiff:(bool)arg1;
- (void)setPid:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifidBootTimeDiff:(double)arg1;
- (unsigned long long)timestamp;
- (double)wifidBootTimeDiff;
- (void)writeTo:(id)arg1;

@end
