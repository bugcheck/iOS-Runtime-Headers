/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSNumber;

@interface IDSCancelMessage : IDSFaceTimeMessage <NSCopying> {
    NSArray *_peers;
    NSNumber *_reason;
}

@property(copy) NSArray * peers;
@property(copy) NSNumber * reason;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)peers;
- (id)reason;
- (id)requiredKeys;
- (void)setPeers:(id)arg1;
- (void)setReason:(id)arg1;

@end
