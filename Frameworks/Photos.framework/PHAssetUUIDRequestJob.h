/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface PHAssetUUIDRequestJob : PLDaemonJob {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSString *_uuid;
}

@property(copy) id completionHandler;
@property(copy) NSString * uuid;

+ (void)requestUUIDWithCustomUUID:(id)arg1 completionHandler:(id)arg2;

- (void).cxx_destruct;
- (id)completionHandler;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (void)setCompletionHandler:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
