/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSURL, SACalendar, SAUIAppPunchOut;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * bookingId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SAUIAppPunchOut * makeReservationPunchOut;
@property(copy) NSNumber * partySize;
@property(readonly) Class superclass;
@property(retain) SACalendar * timeSlot;

+ (id)opening;
+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;

- (id)bookingId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)makeReservationPunchOut;
- (id)partySize;
- (void)setBookingId:(id)arg1;
- (void)setMakeReservationPunchOut:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setTimeSlot:(id)arg1;
- (id)timeSlot;

@end
