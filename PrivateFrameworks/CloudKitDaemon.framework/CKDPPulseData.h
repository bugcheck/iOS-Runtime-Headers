/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying> {
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    long long _customState;
    } _has;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    long long _stateTTLMillis;
    CKDPIdentifier *_user;
}

@property long long customState;
@property bool hasCustomState;
@property(readonly) bool hasLastCustom;
@property(readonly) bool hasLastEdited;
@property(readonly) bool hasLastInvisible;
@property(readonly) bool hasLastViewed;
@property bool hasState;
@property bool hasStateTTLMillis;
@property(readonly) bool hasUser;
@property(retain) CKDPDate * lastCustom;
@property(retain) CKDPDate * lastEdited;
@property(retain) CKDPDate * lastInvisible;
@property(retain) CKDPDate * lastViewed;
@property int state;
@property long long stateTTLMillis;
@property(retain) CKDPIdentifier * user;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomState;
- (bool)hasLastCustom;
- (bool)hasLastEdited;
- (bool)hasLastInvisible;
- (bool)hasLastViewed;
- (bool)hasState;
- (bool)hasStateTTLMillis;
- (bool)hasUser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastInvisible;
- (id)lastViewed;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomState:(long long)arg1;
- (void)setHasCustomState:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasStateTTLMillis:(bool)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setUser:(id)arg1;
- (int)state;
- (long long)stateTTLMillis;
- (id)user;
- (void)writeTo:(id)arg1;

@end
