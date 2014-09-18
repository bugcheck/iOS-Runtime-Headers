/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStarRatingView, NSArray, NSString, UILabel;

@interface MKStarRatingAndLabelView : UIView {
    unsigned long long _numberOfReviews;
    UILabel *_reviewsLabel;
    NSArray *_reviewsLabelConstraints;
    NSString *_sourceName;
    MKStarRatingView *_starRatingView;
    bool_displaysSourceOfReviews;
}

@property unsigned long long numberOfReviews;
@property(readonly) UILabel * reviewsLabel;
@property(retain) NSString * sourceName;
@property(readonly) MKStarRatingView * starRatingView;

- (void).cxx_destruct;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (void)_updateFonts;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)numberOfReviews;
- (id)reviewsLabel;
- (void)setDisplaysSourceOfReviews:(bool)arg1;
- (void)setNumberOfReviews:(unsigned long long)arg1;
- (void)setSourceName:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceName;
- (id)starRatingView;
- (id)viewForBaselineLayout;

@end
