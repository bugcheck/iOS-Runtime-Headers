/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class UIActivityIndicatorView, UILabel, UINavigationItem;

@interface CNFRegNavigationBarTitleView : UIView {
    UIActivityIndicatorView *_activityIndicator;
    UINavigationItem *_item;
    UILabel *_titleLabel;
}

@property UINavigationItem * item;

- (id)_currentTextColorForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_defaultFont;
- (id)_titleTextColorForBarStyle:(long long)arg1;
- (void)_updateTitleLabel;
- (bool)_useSilverLookForBarStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithNavigationItem:(id)arg1;
- (id)item;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
