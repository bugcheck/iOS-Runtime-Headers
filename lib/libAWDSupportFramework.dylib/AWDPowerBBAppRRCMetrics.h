/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numRRCConnections : 1; 
    NSMutableArray *_appConnStats;
    } _has;
    unsigned int _numRRCConnections;
    unsigned long long _timestamp;
}

@property(retain) NSMutableArray * appConnStats;
@property bool hasNumRRCConnections;
@property bool hasTimestamp;
@property unsigned int numRRCConnections;
@property unsigned long long timestamp;

- (void)addAppConnStats:(id)arg1;
- (id)appConnStats;
- (id)appConnStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appConnStatsCount;
- (void)clearAppConnStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumRRCConnections;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numRRCConnections;
- (bool)readFrom:(id)arg1;
- (void)setAppConnStats:(id)arg1;
- (void)setHasNumRRCConnections:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumRRCConnections:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
