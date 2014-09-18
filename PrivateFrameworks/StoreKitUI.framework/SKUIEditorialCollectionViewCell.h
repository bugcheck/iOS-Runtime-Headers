/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIEditorialCellLayout;

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    SKUIEditorialCellLayout *_layout;
    bool_layoutNeedsLayout;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SKUIEditorialCellLayout * layout;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutNeedsLayout;

@end
