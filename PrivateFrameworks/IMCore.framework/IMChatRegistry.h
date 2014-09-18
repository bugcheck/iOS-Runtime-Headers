/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUserActivity;

@interface IMChatRegistry : NSObject <NSFastEnumeration> {
    NSMutableArray *_allChats;
    NSMutableArray *_allChatsInThreadNameMap;
    NSMutableDictionary *_chatGUIDToChatMap;
    NSMutableDictionary *_chatGUIDToCurrentThreadMap;
    NSMutableDictionary *_chatGUIDToInfoMap;
    NSMutableDictionary *_chatGUIDToiMessageSentOrReceivedMap;
    long long _daemonLastFailedMessageID;
    unsigned long long _daemonUnreadCount;
    unsigned long long _defaultNumberOfMessagesToLoad;
    NSString *_historyModificationStamp;
    IMTimer *_markAsReadTimer;
    NSMutableArray *_pendingQueries;
    NSMutableDictionary *_threadNameToChatMap;
    double _timerStartTimeInterval;
    NSUserActivity *_userActivity;
    NSMutableArray *_waitingForQueries;
    bool_daemonHadTerminated;
    bool_firstLoad;
    bool_loading;
    bool_postMessageSentNotifications;
    bool_wantsHistoryReload;
}

@property(setter=_setDefaultNumberOfMessagesToLoad:) unsigned long long _defaultNumberOfMessagesToLoad;
@property(readonly) bool _isLoading;
@property(setter=_setPostMessageSentNotifications:) bool _postMessageSentNotifications;
@property(readonly) NSArray * allExistingChats;
@property(readonly) unsigned long long numberOfExistingChats;

+ (Class)chatClass;
+ (Class)chatRegistryClass;
+ (Class)messageClass;
+ (void)setChatClass:(Class)arg1;
+ (void)setChatRegistryClass:(Class)arg1;
+ (void)setMessageClass:(Class)arg1;
+ (id)sharedInstance;

- (void)__blockUntilQueriesComplete;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (id)_allCreatedChats;
- (id)_allGUIDsForChat:(id)arg1;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 updateDisplayName:(id)arg2;
- (id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(bool)arg3 createdChat:(bool*)arg4 outGUID:(id*)arg5;
- (id)_chatInstanceForGUID:(id)arg1;
- (void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_leave:(id)arg1;
- (void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat_remove:(id)arg1;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat_storeItem:(id)arg1 inChat:(id)arg2;
- (id)_chatsWithMessage:(id)arg1;
- (id)_ck_chatForHandles:(id)arg1 createIfNecessary:(bool)arg2;
- (id)_ck_chatForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3 createIfNecessary:(bool)arg4;
- (void)_clearMarkAsReadTimerIfNecessary;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(bool)arg5;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)_daemonReallyDied:(id)arg1;
- (unsigned long long)_defaultNumberOfMessagesToLoad;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
- (bool)_firstLoad;
- (void)_handleChatReconstructions:(id)arg1;
- (bool)_hasChat:(id)arg1 forService:(id)arg2;
- (bool)_isLoading;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (bool)_postMessageSentNotifications;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5;
- (void)_registerChat:(id)arg1 isIncoming:(bool)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(bool)arg3 newGUID:(id)arg4;
- (void)_setChatHasCommunicatedOveriMessage:(id)arg1;
- (void)_setDefaultNumberOfMessagesToLoad:(unsigned long long)arg1;
- (void)_setPostMessageSentNotifications:(bool)arg1;
- (void)_startMarkAsReadTimerIfNecessary;
- (void)_unregisterChat:(id)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(bool)arg3;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (id)allExistingChats;
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)chat:(id)arg1 displayNameUpdated:(id)arg2;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)chat:(id)arg1 updated:(id)arg2;
- (id)chatForIMHandle:(id)arg1;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForURL:(id)arg1 outMessageText:(id*)arg2 outRecipientIDs:(id*)arg3 outService:(id*)arg4 outMessageGUID:(id*)arg5;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(bool)arg2;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(bool)arg5;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2 groupID:(id)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(bool)arg2;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(bool)arg3;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatWithChatIdentifier:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithGroupID:(id)arg1;
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (id)init;
- (long long)lastFailedMessageID;
- (void)lastFailedMessageIDChanged:(long long)arg1;
- (void)leftChat:(id)arg1;
- (id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3;
- (unsigned long long)numberOfExistingChats;
- (void)setActiveChatURL:(id)arg1;
- (void)setupComplete:(bool)arg1 info:(id)arg2;
- (void)setupComplete;
- (void)systemApplicationDidResume;
- (unsigned long long)unreadCount;
- (void)unreadCountChanged:(long long)arg1;
- (void)unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;

@end
