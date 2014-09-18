/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSString, NSURL;

@interface NSFileCoordinator : NSObject {
    id _accessArbiter;
    id _accessClaimIDOrIDs;
    id _fileReactor;
    NSMutableDictionary *_movedItems;
    id _purposeID;
    NSURL *_recentFilePresenterURL;
    bool_isCancelled;
}

@property(copy) NSString * purposeIdentifier;

+ (void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3;
+ (void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2;
+ (void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)_accessProcessIdentifiersUsingBlock:(id)arg1;
+ (void)_addFileProvider:(id)arg1 completionHandler:(id)arg2;
+ (void)_addFileProvider:(id)arg1;
+ (void)_addProcessIdentifier:(int)arg1 forID:(id)arg2;
+ (id)_canonicalURLForURL:(id)arg1;
+ (id)_currentFileCoordinator;
+ (id)_fileProviders;
+ (void)_printDebugInfo;
+ (int)_processIdentifierForID:(id)arg1;
+ (int)_processIdentifierForPresenterWithID:(id)arg1;
+ (void)_removeFileProvider:(id)arg1;
+ (void)_removeProcessIdentifierForID:(id)arg1;
+ (bool)_skipCoordinationWork;
+ (void)addFilePresenter:(id)arg1;
+ (id)filePresenters;
+ (void)removeFilePresenter:(id)arg1;
+ (void)tsp_addFilePresenter:(id)arg1;
+ (bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id*)arg4 byAccessor:(id)arg5;
+ (bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id*)arg6 byAccessor:(id)arg7;
+ (bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id*)arg4 byAccessor:(id)arg5;
+ (bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id*)arg6 byAccessor:(id)arg7;
+ (void)tsp_removeFilePresenter:(id)arg1;

- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(id)arg4;
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(id)arg6;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(id)arg4;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(id)arg6;
- (void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(id)arg5;
- (void)_blockOnAccessClaim:(id)arg1;
- (void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(id)arg3;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)_didEndWrite:(id)arg1;
- (void)_forgetAccessClaimForID:(id)arg1;
- (void)_invokeAccessor:(id)arg1 orDont:(bool)arg2 andRelinquishAccessClaim:(id)arg3;
- (void)_invokeAccessor:(id)arg1 thenCompletionHandler:(id)arg2;
- (void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)_itemDidDisappearAtURL:(id)arg1;
- (void)_lockdownPurposeIdentifier;
- (bool)_purposeIdentifierLockedDown;
- (void)_requestAccessClaim:(id)arg1 withProcedure:(id)arg2;
- (void)_setFileProvider:(id)arg1;
- (void)_setPurposeIdentifier:(id)arg1;
- (void)_ubiquityDidChangeForItemAtURL:(id)arg1;
- (id)_willStartWriteWithIntents:(id)arg1 async:(bool)arg2;
- (void)cancel;
- (void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(id)arg3;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)dealloc;
- (id)init;
- (id)initWithFilePresenter:(id)arg1;
- (void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2;
- (void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (id)purposeIdentifier;
- (void)releaseAccess:(id)arg1;
- (id)retainAccess;
- (void)setPurposeIdentifier:(id)arg1;

@end
