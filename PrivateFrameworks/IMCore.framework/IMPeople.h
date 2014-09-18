/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSMutableArray;

@interface IMPeople : NSObject {
    int _coalesceCount;
    NSMutableArray *_people;
    bool_hidePeople;
}

@property(readonly) bool coalescingChanges;
@property(readonly) unsigned long long count;
@property(readonly) NSArray * groups;
@property(setter=setShouldHidePeople:) bool hidePeople;
@property(readonly) NSArray * people;

- (void)_addedPeople:(id)arg1;
- (bool)addIMHandle:(id)arg1;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (bool)addPeopleFromArray:(id)arg1 skipMe:(bool)arg2;
- (bool)addPeopleFromArray:(id)arg1;
- (void)addedIMHandle:(id)arg1;
- (void)beginCoalescedChanges;
- (bool)coalescingChanges;
- (bool)containsIMHandle:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)endCoalescedChanges;
- (id)groups;
- (bool)hidePeople;
- (void)imHandle:(id)arg1 buddyStatusChanged:(bool)arg2;
- (id)people;
- (bool)removeIMHandle:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (bool)removePeopleFromArray:(id)arg1;
- (void)removedIMHandle:(id)arg1;
- (void)setShouldHidePeople:(bool)arg1;

@end
