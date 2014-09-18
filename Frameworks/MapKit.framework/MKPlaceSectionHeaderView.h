/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableArray, NSString, UILabel, _MKRightImageButton;

@interface MKPlaceSectionHeaderView : UIView {
    SEL _action;
    NSArray *_noSeeMoreButtonConstraints;
    NSMutableArray *_scaledConstraints;
    UILabel *_sectionHeaderLabel;
    NSString *_sectionHeaderText;
    _MKRightImageButton *_seeMoreButton;
    NSArray *_seeMoreButtonConstraints;
    id _target;
    bool_showSeeMoreButton;
}

@property SEL action;
@property(retain) NSArray * noSeeMoreButtonConstraints;
@property(retain) NSMutableArray * scaledConstraints;
@property(retain) UILabel * sectionHeaderLabel;
@property(copy) NSString * sectionHeaderText;
@property(retain) _MKRightImageButton * seeMoreButton;
@property(retain) NSArray * seeMoreButtonConstraints;
@property bool showSeeMoreButton;
@property id target;

+ (double)intrinsicContentHeight;

- (void).cxx_destruct;
- (SEL)action;
- (id)chevronImage;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)noSeeMoreButtonConstraints;
- (id)scaledConstraints;
- (id)sectionHeaderLabel;
- (id)sectionHeaderText;
- (id)seeMoreButton;
- (id)seeMoreButtonConstraints;
- (void)setAction:(SEL)arg1;
- (void)setNoSeeMoreButtonConstraints:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)setSectionHeaderLabel:(id)arg1;
- (void)setSectionHeaderText:(id)arg1;
- (void)setSeeMoreButton:(id)arg1;
- (void)setSeeMoreButtonConstraints:(id)arg1;
- (void)setShowSeeMoreButton:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1;
- (bool)showSeeMoreButton;
- (id)target;
- (void)updateConstraints;

@end
