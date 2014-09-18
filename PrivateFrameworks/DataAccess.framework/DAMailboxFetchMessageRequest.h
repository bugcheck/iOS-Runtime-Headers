/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
    int _maxSize;
}

@property int maxSize;
@property(copy) NSString * messageID;

- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)maxSize;
- (void)setMaxSize:(int)arg1;

@end
