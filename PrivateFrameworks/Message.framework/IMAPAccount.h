/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MFIMAPOperationCache, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSSet, NSString;

@interface IMAPAccount : MailAccount <MFIMAPMailboxListFilter> {
    unsigned int _lastConnectionFailed : 1;
    unsigned int _fetchedMailboxList : 1;
    unsigned int _isOffline : 1;
    unsigned int _observingPushedFoldersPrefsChanged : 1;
    unsigned int _mustRegisterForPushOnNextConnection : 1;
    unsigned int _didRequestPushRegistration : 1;
    unsigned int _listeningForDeviceTokenChanges : 1;
    NSString *_apsTopic;
    struct __CFArray { } *_cachedConnections;
    NSRecursiveLock *_connectionLock;
    NSRecursiveLock *_flagChangesLock;
    unsigned long long _greatestInboxUid;
    NSArray *_lastKnownCapabilities;
    double _lastPushRegistration;
    NSArray *_lockOrderingArray;
    struct __CFArray { } *_mailboxesToSynchronize;
    int _nextConnectionTag;
    MFIMAPOperationCache *_offlineCache;
    id _offlineCacheFlushHandler;
    void *_packetContextAssertion;
    NSMutableDictionary *_pushRegisteredMailboxes;
    NSSet *_pushedMailboxUids;
    unsigned int _readBufferSize;
    NSMutableArray *_recentFlagChanges;
    NSString *_separatorChar;
    int _supportedPushServiceLevel;
    double _timeLastFetchedMailboxList;
}

+ (void)_deleteQueuedMailboxes:(id)arg1;
+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (void*)legacyKeychainProtocol;
+ (id)saslProfileName;

- (id)_URLScheme;
- (void)_apsDeviceTokenChanged:(id)arg1;
- (id)_copyMailboxListForNames:(id)arg1;
- (id)_copyMailboxListPreferenceForKey:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyPushedMailboxesForPrefix:(id)arg1;
- (id)_copyUserPushedMailboxes;
- (id)_dataForTemporaryUid:(unsigned int)arg1;
- (bool)_deleteMailbox:(id)arg1;
- (void)_didSynchronizeMailboxCachesAndFoundChanges:(bool)arg1;
- (id)_externalMailboxUids;
- (id)_fileSystemServerPathPrefix;
- (void)_flushOfflineCache;
- (id)_infoForMatchingURL:(id)arg1;
- (void)_invokeBlock:(id)arg1;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(bool)arg2 onlySubscribed:(bool)arg3 withConnection:(id)arg4;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(bool)arg2 onlySubscribed:(bool)arg3;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(bool)arg2;
- (void)_mailboxListingChanged;
- (id)_mailboxPathPrefix;
- (id)_mailboxUidForName:(id)arg1;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (id)_nameForMailboxUid:(id)arg1;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_notesPrefix;
- (id)_notificationNameForMailbox:(id)arg1 withPrefix:(id)arg2;
- (id)_pathComponentForUidName:(id)arg1;
- (void)_purgeStaleFlagChanges;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)_registerForDeviceTokenChanges;
- (bool)_registerPushNotificationPrefix:(id)arg1 forMailboxNames:(id)arg2;
- (void)_releaseAllConnectionsAndCallSuper:(bool)arg1 edgeForcedOnly:(bool)arg2 ifIdleForTimeInterval:(double)arg3 saveOfflineCache:(bool)arg4;
- (void)_releaseAllConnectionsAndCallSuper:(bool)arg1;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (void)_schedulePushRegistrationConnection;
- (void)_setCapabilities:(id)arg1;
- (bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (id)_specialMailboxUidWithType:(int)arg1 create:(bool)arg2;
- (void)_synchronizeAccountWithServer;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (void)_unregisterForDeviceTokenChanges;
- (void)_updatePushedMailboxesAndNotify:(bool)arg1;
- (void)_validateConnections;
- (void)_waitForMailboxListingLoadToComplete;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)acquireNetworkAssertion;
- (void)addFlagChanges:(id)arg1 forMailboxPath:(id)arg2 UID:(unsigned int)arg3;
- (id)allMailMailboxUid;
- (bool)allowsPartialDownloads;
- (id)apsTopic;
- (bool)canAttemptPushRegistration;
- (bool)canFetch;
- (bool)canGoOffline;
- (bool)canMailboxBeDeleted:(id)arg1;
- (bool)canReceiveNewMailNotifications;
- (id)certUIService;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (void)checkInConnectionsForStore:(id)arg1;
- (id)clientToken;
- (bool)compactWhenClosingMailboxes;
- (bool)connectAndAuthenticate:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg3;
- (bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned long long x4; id x5; }*)arg3;
- (Class)connectionClass;
- (void)connectionDidDisconnect:(id)arg1;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (bool)deleteInPlaceForAllMailboxes;
- (bool)deleteInPlaceForMailbox:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)errorForResponse:(id)arg1;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned int)arg2 connectTime:(double)arg3;
- (id)flagChangesLock;
- (void)flushOfflineCache;
- (bool)getMailboxListWithConnection:(id)arg1;
- (unsigned long long)greatestInboxUid;
- (void)handleAlertResponse:(id)arg1;
- (void)handleOverQuotaResponse:(id)arg1;
- (void)handlePushNotificationOnMailboxes:(id)arg1 missedNotifications:(bool)arg2;
- (bool)hasPendingOfflineOperations;
- (id)hostname;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (bool)isMailboxLocalForType:(int)arg1;
- (bool)isOffline;
- (id)lastKnownCapabilities;
- (double)lastPushRegistration;
- (id)mailboxNamesForPushRegistration;
- (id)mailboxPathExtension;
- (id)mailboxUidForRelativePath:(id)arg1 create:(bool)arg2;
- (id)mailboxesRegisteredForPushByHash;
- (void)messagesAdded:(id)arg1;
- (id)mf_lockOrdering;
- (unsigned long long)minID;
- (unsigned long long)minUID;
- (unsigned int)minimumPartialDownloadSize;
- (bool)mustRegisterForPushOnNextConnection;
- (id)nameForMailboxUid:(id)arg1;
- (bool)needToSynchronizeMailboxCaches;
- (void)networkChanged;
- (bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (id)notificationNamesForPrefix:(id)arg1 mailboxUids:(id)arg2;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (id)offlineCache;
- (id)offlineCacheDirectoryPath;
- (id)offlineCacheIfExists;
- (id)offlineCacheIfOffline;
- (id)pushedMailboxUids;
- (unsigned int)readBufferSize;
- (id)registerPushNotificationPrefix:(id)arg1 forMailboxUids:(id)arg2;
- (void)releaseAllConnections;
- (void)releaseAllConnectionsIdleForTimeInterval:(double)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseNetworkAssertion;
- (void)removeFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)removeFlagChangesCommittedBefore:(double)arg1;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (bool)requiresAuthentication;
- (bool)requiresDataForOfflineTransfersFromStore:(id)arg1;
- (void)resetMailboxTimer;
- (void)saveState;
- (id)secureServiceName;
- (id)separatorChar;
- (id)serverPathPrefix;
- (void)serverRegisteredMailboxes:(id)arg1 withTopic:(id)arg2 version:(int)arg3;
- (id)serviceName;
- (void)setAPSTopic:(id)arg1;
- (void)setAllowsPartialDownloads:(bool)arg1;
- (void)setCommitTime:(double)arg1 forConnectionTag:(unsigned int)arg2;
- (void)setCompactWhenClosingMailboxes:(bool)arg1;
- (void)setConnectionTag:(unsigned int)arg1 forFlagChanges:(id)arg2 forMessages:(id)arg3;
- (void)setDisplayName:(id)arg1;
- (void)setHandlerForOfflineCacheFlush:(id)arg1;
- (void)setIsOffline:(bool)arg1;
- (void)setLastPushRegistration:(double)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMustRegisterForPushOnNextConnection:(bool)arg1;
- (void)setReadBufferSize:(unsigned int)arg1;
- (void)setServerPathPrefix:(id)arg1 shouldSync:(bool)arg2;
- (void)setServerPathPrefix:(id)arg1;
- (void)setStoreMailboxType:(int)arg1 onServer:(bool)arg2;
- (void)setSupportedPushServiceLevel:(int)arg1;
- (void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2;
- (bool)shouldExpungeMessagesOnDelete;
- (bool)shouldRegisterForPush;
- (bool)shouldRestoreMessagesAfterFailedDelete;
- (id)specialUseAttributeForType:(int)arg1;
- (void)startListeningForNotifications;
- (id)statisticsKind;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (bool)storeMailboxTypeOnServer:(int)arg1;
- (int)supportedPushServiceLevel;
- (bool)supportsAppend;
- (bool)supportsMailboxEditing;
- (bool)supportsRemoteAppend;
- (bool)supportsUserPushedMailboxes;
- (void)throttledGetMailboxListWithConnection:(id)arg1;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (void)unselectMailbox:(id)arg1;
- (void)updatePushRegisteredMailboxes:(id)arg1;
- (void)validateConnections;
- (bool)xListSupportedOnConnection:(id)arg1;

@end
