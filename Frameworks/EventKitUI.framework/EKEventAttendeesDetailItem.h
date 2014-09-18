/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventDetailAttendeesCell, NSArray, NSMutableDictionary;

@interface EKEventAttendeesDetailItem : EKEventDetailItem {
    NSArray *_attendees;
    NSMutableDictionary *_attendeesCells;
    EKEventDetailAttendeesCell *_cell;
    int _status;
}

@property(retain) NSArray * attendees;
@property int status;

- (void).cxx_destruct;
- (id)attendees;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)setAttendees:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
