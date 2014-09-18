/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TUIDSUtilities : NSObject <IDSIDQueryControllerDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)_IDSFormattedDestinationsForPerson:(id)arg1;
+ (bool)_anyStatusInResultDictionary:(id)arg1 equalsIDStatus:(long long)arg2;
+ (bool)_availabilityForDestinations:(id)arg1 serviceType:(unsigned long long)arg2;
+ (bool)_availabilityForPerson:(id)arg1 serviceType:(unsigned long long)arg2;
+ (bool)_refreshAvailabilityForDestinations:(id)arg1 serviceType:(unsigned long long)arg2 userInfo:(id)arg3;
+ (bool)_refreshAvailabilityForPerson:(id)arg1 serviceType:(unsigned long long)arg2;
+ (id)idsServiceForType:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isService:(unsigned long long)arg1 availableForABRecordID:(int)arg2;
+ (bool)isService:(unsigned long long)arg1 availableForDestinations:(id)arg2;
+ (id)personForABRecordID:(int)arg1;
+ (bool)refreshAvailabilityForABRecordID:(int)arg1 serviceType:(unsigned long long)arg2;

@end
