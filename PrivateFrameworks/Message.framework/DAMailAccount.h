/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAAccount, MFDAMailbox, MFDAOfflineCache, MFRecursiveLock, NSArray, NSCountedSet, NSLock, NSMutableDictionary, NSObject<ASAccountActorMessages>, NSSet, NSString;

@interface DAMailAccount : MailAccount {
    NSObject<ASAccountActorMessages> *_accountConduit;
    NSString *_cachedAccountID;
    NSString *_cachedAccountPersistentUUID;
    NSString *_cachedDisplayName;
    NSString *_cachedEmailAddress;
    NSArray *_cachedEmailAddresses;
    NSString *_cachedIconString;
    NSString *_cachedInboxFolderID;
    NSString *_cachedJunkFolderID;
    NSString *_cachedSentMessagesFolderID;
    NSString *_cachedTrashFolderID;
    DAAccount *_daAccount;
    unsigned int _daysToSync;
    NSString *_folderTag;
    MFDAOfflineCache *_offlineCache;
    MFRecursiveLock *_offlineCacheLock;
    NSMutableDictionary *_requestQueuesByFolderID;
    int _supportsConversations;
    int _supportsMessageFlagging;
    int _supportsServerSearch;
    MFDAMailbox *_temporaryInbox;
    NSCountedSet *_userFocusMailboxIds;
    NSSet *_watchedFolderIds;
    NSLock *_watchedFolderIdsLock;
    bool_cachedArchiveByDefault;
    bool_cachedCalendarEnabled;
    bool_cachedIsActive;
    bool_cachedIsHotmailAccount;
    bool_cachedPerMessageEncryptionEnabled;
    bool_cachedRestrictMessageTransfersToOtherAccounts;
    bool_cachedRestrictSendingFromExternalProcesses;
    bool_cachedRestrictSyncingRecents;
    bool_cachedSecureMIMEEnabled;
    bool_cachedSecureMIMEShouldEncrypt;
    bool_cachedSecureMIMEShouldSign;
    bool_cachedSourceIsManaged;
    bool_doneInitialInboxCheck;
    bool_isNetworkReachable;
    bool_loadedInitialMailboxList;
    bool_observingPushedFoldersPrefsChanged;
    bool_receivedInitialMailboxUpdate;
}

+ (id)_URLScheme;
+ (Class)_accountConduitClass;
+ (id)accountIDForDirectoryName:(id)arg1 isAccountDirectory:(bool*)arg2;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)folderIDForRelativePath:(id)arg1 accountID:(id*)arg2;

- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (void)_deferMailboxRequests:(id)arg1 mailbox:(id)arg2 offlineCache:(id)arg3;
- (bool)_deleteMailbox:(id)arg1;
- (void)_ensureWeHaveLoadedInitialMailboxList;
- (id)_folderIdsForMailboxUids:(id)arg1;
- (id)_inboxFolderID;
- (id)_infoForMatchingURL:(id)arg1;
- (bool)_isUnitTesting;
- (void)_loadChildrenForParent:(id)arg1 fromMap:(id)arg2 intoArray:(id)arg3 replacingInbox:(id)arg4 withID:(id)arg5;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_offlineCache;
- (void)_performFolderChange:(id)arg1 completion:(id)arg2;
- (void)_reachabilityChanged:(id)arg1;
- (id)_relativePathForType:(int)arg1;
- (id)_relativePathSpecialMailboxUidWithType:(int)arg1 create:(bool)arg2;
- (bool)_replayOfflineCache:(id)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(bool)arg2;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_updateWatchedFolderIdsAndNotify:(bool)arg1;
- (id)_watchedFolderIds;
- (id)accountConduit;
- (id)accountForRenewingCredentials;
- (void)accountHierarchyChanged:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (void)addRequest:(id)arg1 mailbox:(id)arg2 consumer:(id)arg3;
- (void)addRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)addUserFocusMailbox:(id)arg1;
- (id)allMailboxUids;
- (bool)canGoOffline;
- (bool)canReceiveNewMailNotifications;
- (void)cancelSearchQuery:(id)arg1;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2;
- (unsigned int)daysToSync;
- (void)dealloc;
- (id)deliveryAccount;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayName;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (bool)finishedInitialMailboxListLoad;
- (id)folderIDForMailbox:(id)arg1;
- (void)foldersContentsChanged:(id)arg1;
- (id)hostname;
- (id)iconString;
- (id)identifier;
- (id)initWithDAAccount:(id)arg1;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isMailboxLocalForType:(int)arg1;
- (bool)isRunningInDisallowedBundle;
- (id)mailboxForFolderID:(id)arg1;
- (id)mailboxPathExtension;
- (id)mailboxUidForInfo:(id)arg1;
- (id)meetingStorePersistentID;
- (bool)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(bool)arg4 unsuccessfulOnes:(id)arg5 newMessages:(id)arg6;
- (bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (bool)perMessageEncryptionEnabled;
- (bool)performRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)performSearchQuery:(id)arg1;
- (id)primaryMailboxUid;
- (void)processRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)pushedFoldersPrefsChanged:(id)arg1;
- (id)pushedMailboxUids;
- (bool)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)removeUserFocusMailbox:(id)arg1;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)resetSpecialMailboxes;
- (bool)restrictedFromSendingExternally;
- (bool)restrictedFromSyncingRecents;
- (bool)restrictedFromTransferingMessagesToOtherAccounts;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (bool)secureMIMEEnabled;
- (void)setDAAccount:(id)arg1;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setSyncAnchor:(id)arg1 forFolderID:(id)arg2 mailbox:(id*)arg3;
- (bool)shouldAppearInMailSettings;
- (bool)shouldArchiveByDefault;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(bool)arg2;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (bool)sourceIsManaged;
- (void)startListeningForNotifications;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (bool)supportsMailboxEditing;
- (bool)supportsMessageFlagging;
- (bool)supportsRemoteAppend;
- (bool)supportsServerSearch;
- (bool)supportsThreadNotifications;
- (bool)supportsUserPushedMailboxes;
- (id)syncAnchorForFolderID:(id)arg1 mailbox:(id*)arg2;
- (id)syncAnchorForMailbox:(id)arg1;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id*)arg2;
- (id)uniqueId;
- (id)uniqueIdForPersistentConnection;
- (id)username;

@end
