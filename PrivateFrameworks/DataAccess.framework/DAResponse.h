/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResponse : DAAction {
    long long _status;
}

@property long long status;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
