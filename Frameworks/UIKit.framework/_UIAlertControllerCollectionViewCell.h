/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertAction, _UIAlertControllerActionView;

@interface _UIAlertControllerCollectionViewCell : UICollectionViewCell {
    _UIAlertControllerActionView *_actionView;
}

@property(copy) UIAlertAction * action;
@property(readonly) _UIAlertControllerActionView * actionView;

- (id)action;
- (id)actionView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAction:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
