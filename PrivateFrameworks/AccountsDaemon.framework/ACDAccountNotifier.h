/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSSet;

@interface ACDAccountNotifier : NSObject {
    NSSet *_notificationPlugins;
}

@property(readonly) NSSet * notificationPlugins;

+ (id)sharedAccountNotifier;

- (void).cxx_destruct;
- (void)_faultInNotificationPlugins;
- (bool)canRemoveAccount:(id)arg1 inStore:(id)arg2;
- (bool)canSaveAccount:(id)arg1 inStore:(id)arg2;
- (id)notificationPlugins;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;

@end
