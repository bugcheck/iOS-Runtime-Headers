/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIEditorialCellLayout, UIImage, UIImageView, UIView;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    NSString *_accessibilityLabel;
    UIImageView *_brickImageView;
    } _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property(copy) NSString * accessibilityLabel;
@property(retain) UIImage * brickImage;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2;
- (id)brickImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBrickImage:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
