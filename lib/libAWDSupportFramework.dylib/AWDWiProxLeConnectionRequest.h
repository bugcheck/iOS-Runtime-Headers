/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeConnectionRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSString *_peerId;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property(readonly) bool hasPeerId;
@property(readonly) bool hasSessionId;
@property bool hasTimestamp;
@property(retain) NSString * peerId;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerId;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPeerId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
