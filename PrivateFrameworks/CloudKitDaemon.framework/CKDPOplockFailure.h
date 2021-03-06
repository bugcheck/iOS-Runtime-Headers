/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecord;

@interface CKDPOplockFailure : PBCodable <NSCopying> {
    CKDPRecord *_recordForOplockFailure;
}

@property(readonly) BOOL hasRecordForOplockFailure;
@property(retain) CKDPRecord * recordForOplockFailure;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRecordForOplockFailure;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordForOplockFailure;
- (void)setRecordForOplockFailure:(id)arg1;
- (void)writeTo:(id)arg1;

@end
