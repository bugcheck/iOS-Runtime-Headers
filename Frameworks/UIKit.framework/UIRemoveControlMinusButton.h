/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMinusButton : UIControl {
    unsigned int _rotated : 1;
    unsigned int _rotating : 1;
    unsigned int _hiding : 1;
    unsigned int _showAsPlus : 1;
    unsigned int _reserved : 28;
    float _verticalOffset;
}

+ (float)defaultWidth;
+ (id)minusImage;
+ (id)plusImage;

- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(bool)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRemoveControl:(id)arg1;
- (bool)isHiding;
- (bool)isRotated;
- (bool)isRotating;
- (void)setHiding:(bool)arg1;
- (void)toggleRotate:(bool)arg1;

@end
