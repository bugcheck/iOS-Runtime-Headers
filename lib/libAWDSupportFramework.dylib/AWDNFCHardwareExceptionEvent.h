/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDNFCHardwareExceptionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    NSString *_exceptionData;
    } _has;
    unsigned long long _timestamp;
    unsigned int _type;
}

@property(retain) NSString * exceptionData;
@property(readonly) bool hasExceptionData;
@property bool hasTimestamp;
@property bool hasType;
@property unsigned long long timestamp;
@property unsigned int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exceptionData;
- (bool)hasExceptionData;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExceptionData:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
