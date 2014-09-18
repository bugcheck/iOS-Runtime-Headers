/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxBluetoothState : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int btState : 1; 
    int _btState;
    } _has;
    unsigned long long _timestamp;
}

@property int btState;
@property bool hasBtState;
@property bool hasTimestamp;
@property unsigned long long timestamp;

- (int)btState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBtState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBtState:(int)arg1;
- (void)setHasBtState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
