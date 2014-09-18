/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable <NSCopying> {
    CKDPUserAlias *_alias;
    NSString *_firstName;
    CKDPIdentifier *_identifier;
    NSString *_lastName;
}

@property(retain) CKDPUserAlias * alias;
@property(retain) NSString * firstName;
@property(readonly) bool hasAlias;
@property(readonly) bool hasFirstName;
@property(readonly) bool hasIdentifier;
@property(readonly) bool hasLastName;
@property(retain) CKDPIdentifier * identifier;
@property(retain) NSString * lastName;

- (void).cxx_destruct;
- (id)alias;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (bool)hasAlias;
- (bool)hasFirstName;
- (bool)hasIdentifier;
- (bool)hasLastName;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
