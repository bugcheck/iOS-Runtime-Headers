/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSArray, NSNumber, NSURL;

@interface BRQueryStitch : NSObject {
    NSURL *_fromURL;
    BOOL _kind;
    NSNumber *_objid;
    NSArray *_queries;
    NSURL *_url;
}

@property(retain) NSURL * fromURL;
@property(retain) NSArray * queries;

- (void)_creationDone;
- (void)_deletionDone;
- (void)_renameDone;
- (void)dealloc;
- (id)description;
- (void)done;
- (id)fromURL;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (id)queries;
- (void)setFromURL:(id)arg1;
- (void)setQueries:(id)arg1;

@end
