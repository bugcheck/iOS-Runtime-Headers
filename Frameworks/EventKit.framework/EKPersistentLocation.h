/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSNumber, NSString;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}

@property(copy) NSString * address;
@property(copy) NSString * addressBookEntityID;
@property(copy) NSNumber * latitude;
@property(copy) NSNumber * longitude;
@property(copy) NSNumber * radius;
@property(copy) NSString * routing;
@property(copy) NSString * title;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)address;
- (id)addressBookEntityID;
- (id)alarmOwner;
- (id)calendarItemOwner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)init;
- (id)latitude;
- (id)longitude;
- (id)radius;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (void)setAlarmOwner:(id)arg1;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setRadius:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
