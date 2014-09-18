/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <BRCFSEventsDelegate>, BRCAccountSession, BRCFSEventsPersistedState, BRCRelativePath, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate> {
    PQLConnection *_db;
    <BRCFSEventsDelegate> *_delegate;
    NSString *_devicePath;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    BRCFSEventsPersistedState *_persistedState;
    BRCFSEventsPersistedState *_rendezVous;
    BRCRelativePath *_root;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BRCAccountSession *_session;
    struct __FSEventStream { } *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    bool_drainEvents;
    bool_volumeHasLowDiskSpace;
    bool_volumeIsCaseSensitive;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_resetCount;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;
}

@property(setter=setDB:,retain) PQLConnection * db;
@property(copy,readonly) NSString * debugDescription;
@property <BRCFSEventsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) BRCRelativePath * root;
@property(readonly) Class superclass;
@property(readonly) bool volumeIsCaseSensitive;

- (void).cxx_destruct;
- (void)_cancel;
- (void)close;
- (id)db;
- (void)dealloc;
- (id)delegate;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(bool)arg6;
- (id)initWithAccountSession:(id)arg1;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;
- (bool)openWithRootPath:(id)arg1 error:(id*)arg2;
- (void)reset;
- (void)resume;
- (id)root;
- (void)setDB:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setUpRootAtPath:(id)arg1 error:(id*)arg2;
- (bool)setUpStreamSynchronously:(bool)arg1 error:(id*)arg2;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (void)suspend;
- (bool)volumeIsCaseSensitive;

@end
