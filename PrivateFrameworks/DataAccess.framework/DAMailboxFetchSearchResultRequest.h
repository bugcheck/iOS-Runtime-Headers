/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {
    int _bodyFormat;
    NSString *_longID;
    int _maxSize;
}

@property int bodyFormat;
@property(copy) NSString * longID;
@property int maxSize;

- (void).cxx_destruct;
- (int)bodyFormat;
- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)longID;
- (int)maxSize;
- (void)setBodyFormat:(int)arg1;
- (void)setLongID:(id)arg1;
- (void)setMaxSize:(int)arg1;

@end
