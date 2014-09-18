/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString;

@interface FTRegConnectionHandler : NSObject {
    struct { 
        unsigned int listeningForNotifications : 1; 
    unsigned int _caps;
    } _handlerFlags;
    NSString *_listenerID;
    NSString *_logName;
    NSString *_name;
    long long _serviceType;
}

@property(setter=_setListenerID:,copy) NSString * _listenerID;
@property(retain) NSString * _logName;
@property(retain,readonly) NSString * _serviceName;
@property unsigned int caps;
@property(copy) NSString * name;
@property long long serviceType;

- (void)_disconnectFromDaemon;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (bool)_isServiceSupported;
- (id)_listenerID;
- (id)_logName;
- (id)_serviceName;
- (void)_setListenerID:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (unsigned int)caps;
- (bool)connectToDaemon:(bool)arg1;
- (bool)connectToDaemon;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2;
- (bool)isConnectedToDaemon;
- (id)name;
- (long long)serviceType;
- (void)setCaps:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)set_logName:(id)arg1;

@end
