/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class <ACDDataclassOwnersManagerProtocol>, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {
    NSXPCConnection *_connection;
    <ACDDataclassOwnersManagerProtocol> *_remoteDOM;
}

- (void).cxx_destruct;
- (void)_connectToRemoteDataclassOwnersManager;
- (id)_remoteDOM;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3;

@end
