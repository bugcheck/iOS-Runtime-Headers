/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, UIControl, UISegmentedControl, UIView, _UIBackdropView;

@interface SKUIProductPageHeaderFloatingView : UIView {
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    SKUIColorScheme *_colorScheme;
    UISegmentedControl *_sectionControl;
    UIView *_separatorView;
    bool_isPad;
}

@property double backdropAlpha;
@property(retain) SKUIColorScheme * colorScheme;
@property(readonly) UIControl * sectionControl;
@property long long selectedSectionIndex;

- (void).cxx_destruct;
- (void)_reloadBackdropView;
- (double)backdropAlpha;
- (id)colorScheme;
- (id)initWithSectionTitles:(id)arg1 isPad:(bool)arg2;
- (void)layoutSubviews;
- (id)sectionControl;
- (long long)selectedSectionIndex;
- (void)setBackdropAlpha:(double)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setSelectedSectionIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
