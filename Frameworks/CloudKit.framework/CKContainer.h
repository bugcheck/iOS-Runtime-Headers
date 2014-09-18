/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class ACAccountStore, CKAccountInfo, CKContainerID, CKDatabase, CKOperationCallbackManager, CKOperationFlowControlManager, CKRecordID, NSMutableArray, NSOperationQueue, NSString, NSXPCConnection;

@interface CKContainer : NSObject {
    CKAccountInfo *_accountInfoOverride;
    ACAccountStore *_accountStore;
    CKOperationCallbackManager *_callbackManager;
    CKContainerID *_containerID;
    CKRecordID *_containerScopedUserID;
    NSOperationQueue *_convenienceOperationQueue;
    CKOperationFlowControlManager *_flowControlManager;
    int _killSwitchToken;
    CKDatabase *_privateCloudDatabase;
    CKDatabase *_publicCloudDatabase;
    NSMutableArray *_sandboxExtensionHandles;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    int _statusReportToken;
    NSOperationQueue *_throttlingOperationQueue;
    NSXPCConnection *_xpcConnection;
    bool_connectionIsInvalid;
    bool_shouldSendClientIDs;
}

@property(copy) CKAccountInfo * accountInfoOverride;
@property(retain) ACAccountStore * accountStore;
@property(retain) CKOperationCallbackManager * callbackManager;
@property bool connectionIsInvalid;
@property(retain) CKContainerID * containerID;
@property(readonly) NSString * containerIdentifier;
@property(retain) CKRecordID * containerScopedUserID;
@property(retain) NSOperationQueue * convenienceOperationQueue;
@property(retain) CKOperationFlowControlManager * flowControlManager;
@property int killSwitchToken;
@property(retain) CKDatabase * privateCloudDatabase;
@property(retain) CKDatabase * publicCloudDatabase;
@property(retain) NSMutableArray * sandboxExtensionHandles;
@property bool shouldSendClientIDs;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property int statusReportToken;
@property(retain) NSOperationQueue * throttlingOperationQueue;
@property(retain) NSXPCConnection * xpcConnection;

+ (id)containerWithIdentifier:(id)arg1;
+ (id)defaultContainer;
+ (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id)arg3;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_checkSelfCloudServicesEntitlement;
- (id)_checkSelfContainerIdentifier;
- (void)_cleanupSandboxExtensionHandles:(id)arg1;
- (void)_consumeSandboxExtensions:(id)arg1;
- (id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)_initWithContainerIdentifier:(id)arg1;
- (void)_setupWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (void)_synchronouslySendContextInformation;
- (long long)_untrustedDatabaseEnvironment;
- (id)_untrustedEntitlementForKey:(id)arg1;
- (void)accountChangedWithID:(id)arg1;
- (id)accountInfoOverride;
- (void)accountStatusWithCompletionHandler:(id)arg1;
- (id)accountStore;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id)arg2;
- (void)addOperation:(id)arg1;
- (void)addPresenceObserver:(id)arg1 inShareWithID:(id)arg2;
- (id)callbackManager;
- (id)connection;
- (bool)connectionIsInvalid;
- (id)containerID;
- (id)containerIdentifier;
- (id)containerScopedUserID;
- (id)convenienceOperationQueue;
- (id)daemonWithErrorHandler:(id)arg1;
- (void)dealloc;
- (void)deleteCommentWithID:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)deleteShareWithID:(id)arg1 completionHandler:(id)arg2;
- (id)description;
- (void)discoverAllContactUserInfosWithCompletionHandler:(id)arg1;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(id)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(id)arg2;
- (void)fetchAllReceivedInvitationsWithCompletionHandler:(id)arg1;
- (void)fetchAllSharesWithCompletionHandler:(id)arg1;
- (void)fetchCommentsForItem:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)fetchLikesForItem:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)fetchShareWithID:(id)arg1 completionHandler:(id)arg2;
- (void)fetchUserRecordIDWithCompletionHandler:(id)arg1;
- (id)flowControlManager;
- (void)getNewWebSharingIdentity:(id)arg1;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (id)initWithContainerID:(id)arg1;
- (int)killSwitchToken;
- (id)privateCloudDatabase;
- (id)publicCloudDatabase;
- (void)removePresenceObserver:(id)arg1 inShareWithID:(id)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(bool)arg2 completionHandler:(id)arg3;
- (id)sandboxExtensionHandles;
- (void)saveComment:(id)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)saveShare:(id)arg1 completionHandler:(id)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg1;
- (void)setAccountInfoOverride:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id)arg3;
- (void)setCallbackManager:(id)arg1;
- (void)setConnectionIsInvalid:(bool)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setConvenienceOperationQueue:(id)arg1;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFlowControlManager:(id)arg1;
- (void)setKillSwitchToken:(int)arg1;
- (void)setLike:(bool)arg1 forItem:(id)arg2 inShareWithID:(id)arg3 completionHandler:(id)arg4;
- (void)setPrivateCloudDatabase:(id)arg1;
- (void)setPublicCloudDatabase:(id)arg1;
- (void)setSandboxExtensionHandles:(id)arg1;
- (void)setShouldSendClientIDs:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStatusReportToken:(int)arg1;
- (void)setThrottlingOperationQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldSendClientIDs;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)statusReport;
- (int)statusReportToken;
- (id)throttlingOperationQueue;
- (void)tossConfigWithCompletionHandler:(id)arg1;
- (void)updateCurrentUserStatus:(long long)arg1 inShareWithID:(id)arg2 completionHandler:(id)arg3;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (id)xpcConnection;

@end
