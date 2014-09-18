/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSAttributedString, UILabel, _UIBackdropView;

@interface RUTableSectionHeaderView : UITableViewHeaderFooterView {
    double _backdropTransitionWeighting;
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
}

@property(copy) NSAttributedString * attributedTitle;
@property double backdropTransitionWeighting;

- (void).cxx_destruct;
- (id)attributedTitle;
- (double)backdropTransitionWeighting;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackdropTransitionWeighting:(double)arg1;
- (void)setTableViewStyle:(long long)arg1;

@end
