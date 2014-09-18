/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
        unsigned int networkSecurity : 1; 
        unsigned int networkTypeBitMap : 1; 
    unsigned int _eventType;
    } _has;
    unsigned int _networkSecurity;
    unsigned int _networkTypeBitMap;
    NSData *_oui;
    unsigned long long _timestamp;
}

@property unsigned int eventType;
@property bool hasEventType;
@property bool hasNetworkSecurity;
@property bool hasNetworkTypeBitMap;
@property(readonly) bool hasOui;
@property bool hasTimestamp;
@property unsigned int networkSecurity;
@property unsigned int networkTypeBitMap;
@property(retain) NSData * oui;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasEventType;
- (bool)hasNetworkSecurity;
- (bool)hasNetworkTypeBitMap;
- (bool)hasOui;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)networkSecurity;
- (unsigned int)networkTypeBitMap;
- (id)oui;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasNetworkSecurity:(bool)arg1;
- (void)setHasNetworkTypeBitMap:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNetworkSecurity:(unsigned int)arg1;
- (void)setNetworkTypeBitMap:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
