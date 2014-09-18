/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableArray, NSString, SKUIColorScheme, UILabel, UIView;

@interface SKUIProductInformationView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    SKUIColorScheme *_colorScheme;
    } _contentInset;
    NSMutableArray *_imageValues;
    NSArray *_informationLines;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property bool hidesSeparatorView;
@property(retain) NSArray * informationLines;
@property(retain) NSString * title;

- (void).cxx_destruct;
- (double)_keyWidth;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (bool)hidesSeparatorView;
- (id)informationLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHidesSeparatorView:(bool)arg1;
- (void)setInformationLines:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
