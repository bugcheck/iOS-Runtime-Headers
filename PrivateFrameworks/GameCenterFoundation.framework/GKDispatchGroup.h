/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKThreadsafeDictionary, NSError, NSObject<OS_dispatch_group>, NSString;

@interface GKDispatchGroup : NSObject {
    NSError *_error;
    NSObject<OS_dispatch_group> *_group;
    NSString *_name;
    id _result;
    int _sequence;
    GKThreadsafeDictionary *_values;
    bool_loggingEnabled;
    id result;
}

@property(retain) NSError * error;
@property NSObject<OS_dispatch_group> * group;
@property(getter=isLoggingEnabled) bool loggingEnabled;
@property(retain) id result;

+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;

- (id)_values;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (id)allValues;
- (void)dealloc;
- (id)description;
- (void)enter;
- (id)error;
- (id)group;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isLoggingEnabled;
- (void)join:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)leave;
- (void)notifyOnMainQueueWithBlock:(id)arg1;
- (void)notifyOnQueue:(id)arg1 block:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)perform:(id)arg1;
- (id)result;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setLoggingEnabled:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResult:(id)arg1;
- (void)wait;
- (void)waitWithTimeout:(double)arg1;

@end
