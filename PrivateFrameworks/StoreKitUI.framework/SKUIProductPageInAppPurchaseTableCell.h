/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIColorScheme, UILabel;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    SKUIColorScheme *_colorScheme;
    } _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy) NSString * indexString;
@property(copy) NSString * priceString;
@property(copy) NSString * productName;

- (void).cxx_destruct;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)indexString;
- (void)layoutSubviews;
- (id)priceString;
- (id)productName;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIndexString:(id)arg1;
- (void)setPriceString:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
