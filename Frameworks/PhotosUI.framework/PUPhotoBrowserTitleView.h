/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSDate, NSString, PLDateRangeFormatter, UILabel;

@interface PUPhotoBrowserTitleView : UIView {
    NSDate *_creationDate;
    NSString *_geoDateString;
    NSString *_geoDescription;
    PLDateRangeFormatter *_labelDateFormatter;
    UILabel *_landscapeTitleLabel;
    NSArray *_landscapeTitleLabelConstraints;
    NSArray *_mainLabelConstraints;
    NSString *_primaryDateString;
    UILabel *_primaryTitleLabel;
    NSString *_secondaryDateString;
    UILabel *_secondaryTitleLabel;
    bool_wantsSubtitle;
}

@property(retain) NSDate * creationDate;
@property(retain) NSString * geoDescription;
@property bool wantsSubtitle;

- (void).cxx_destruct;
- (void)_dateFormatterChanged:(id)arg1;
- (void)_updateDateStrings;
- (void)_updateLabels;
- (void)_updateWidth;
- (id)creationDate;
- (void)dealloc;
- (id)geoDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCreationDate:(id)arg1;
- (void)setGeoDescription:(id)arg1;
- (void)setWantsSubtitle:(bool)arg1;
- (void)updateConstraints;
- (bool)wantsSubtitle;

@end
