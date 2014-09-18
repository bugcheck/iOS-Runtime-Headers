/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCSERemovedEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int reason : 1; 
    } _has;
    unsigned int _reason;
    unsigned long long _timestamp;
}

@property bool hasReason;
@property bool hasTimestamp;
@property unsigned int reason;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
