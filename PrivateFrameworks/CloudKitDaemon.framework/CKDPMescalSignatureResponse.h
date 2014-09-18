/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    } _has;
    NSData *_mescalHeaderData;
    int _status;
}

@property(readonly) bool hasMescalHeaderData;
@property bool hasStatus;
@property(retain) NSData * mescalHeaderData;
@property int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMescalHeaderData;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mescalHeaderData;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setMescalHeaderData:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
