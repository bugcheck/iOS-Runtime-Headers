/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject {
    NSArray *addresses;
    NSArray *names;
    id reserved;
}

@property(copy,readonly) NSString * address;
@property(copy,readonly) NSArray * addresses;
@property(copy,readonly) NSString * localizedName;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSArray * names;
@property(retain) __NSHostExtraIvars * reserved;

+ (id)currentHost;
+ (void)flushHostCache;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (bool)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(bool)arg1;

- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(id)arg3;
- (id)_thingToResolve;
- (id)address;
- (id)addresses;
- (void)blockingResolveUntil:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)initToResolve:(id)arg1 as:(int)arg2;
- (bool)isEqualToHost:(id)arg1;
- (id)localizedName;
- (id)name;
- (id)names;
- (id)reserved;
- (void)resolve:(id)arg1;
- (void)resolveCurrentHostWithHandler:(id)arg1;
- (void)setReserved:(id)arg1;

@end
