/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSString;

@interface GEOUserSession : NSObject {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    NSLock *_lock;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
    } _sessionID;
    NSString *_sessionIDString;
    } _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
}

@property(readonly) unsigned int sequenceNumber;
@property(readonly) double sessionCreationTime;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(readonly) NSString * sessionIDString;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } usageCollectionSessionID;

+ (void)setIsGeod;
+ (id)sharedInstance;

- (id)_defaultForKey:(id)arg1;
- (void)_renewUsageCollectionSessionID;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)_updateSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)sequenceNumber;
- (double)sessionCreationTime;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionIDString;
- (struct { unsigned long long x1; unsigned long long x2; })usageCollectionSessionID;

@end
