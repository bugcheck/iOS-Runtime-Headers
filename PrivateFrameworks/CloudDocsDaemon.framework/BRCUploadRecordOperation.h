/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKRecord;

@interface BRCUploadRecordOperation : BRCMultiplexableOperation {
    CKRecord *_record;
    id _uploadCompletionBlock;
}

@property(retain) CKRecord * record;
@property(copy) id uploadCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithMultiplexer:(id)arg1;
- (id)name;
- (id)record;
- (void)setRecord:(id)arg1;
- (void)setUploadCompletionBlock:(id)arg1;
- (id)uploadCompletionBlock;

@end
