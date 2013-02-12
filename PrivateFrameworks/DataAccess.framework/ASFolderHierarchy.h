/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
    ASAccount *_account;
    id _delegate;
    NSMutableDictionary *_folderByIdCache;
    NSMutableDictionary *_folderCache;
}

+ (id)_folderCacheFilenameWithId:(id)arg1;
+ (void)cleanUpFilesForAccountWithId:(id)arg1;

- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
- (id)_folderCacheFilename;
- (void)_identityMatchFoldersThatExternalClientsCareAbout:(id)arg1;
- (id)_oldFolderPathsThatExternalClientsCareAbout;
- (id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3;
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
- (void)_setFolderByIdCacheFromCurrentCache;
- (void)_setFolderCache:(id)arg1;
- (void)_setOldFolderPathsFromCurrentCache;
- (void)_setOldFolderPathsThatExternalClientsCareAbout:(id)arg1;
- (void)blowAwayFolderCache;
- (void)clearLocalCache;
- (void)dealloc;
- (id)description;
- (id)folderCache;
- (id)folderForID:(id)arg1;
- (id)folderIdsThatExternalClientsCareAbout;
- (id)folderIdsThatExternalClientsCareAboutForType:(NSInteger)arg1;
- (id)folders;
- (id)foldersTag;
- (id)foldersUnderFolderWithID:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFolderCache:(id)arg1;
- (void)setFolderIdsThatExternalClientsCareAbout:(id)arg1;

@end