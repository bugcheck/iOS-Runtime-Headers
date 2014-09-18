/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UILabel, UIView;

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell {
    UILabel *_dividerLabel;
    UIView *_leftLine;
    UIView *_rightLine;
    double _topEdgeInset;
}

@property(copy) NSString * dividerTitle;
@property double topEdgeInset;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)dividerTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setDividerTitle:(id)arg1;
- (void)setTopEdgeInset:(double)arg1;
- (double)topEdgeInset;

@end
