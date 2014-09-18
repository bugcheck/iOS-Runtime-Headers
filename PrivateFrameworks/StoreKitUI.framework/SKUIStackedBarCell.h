/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIButton, UILabel, UIView;

@interface SKUIStackedBarCell : UIButton {
    UIButton *_backButton;
    UILabel *_expandedLabel;
    UIView *_separator;
    bool_expanded;
}

@property(readonly) UIButton * backButton;
@property bool expanded;

- (void).cxx_destruct;
- (id)backButton;
- (bool)expanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExpanded:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
