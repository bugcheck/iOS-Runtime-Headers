/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    struct CGSize { 
        double width; 
        double height; 
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    } _wrappedViewSize;
}

@property(retain) UIView * wrappedView;

- (id)_anyDateLabel;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (id)wrappedView;

@end
