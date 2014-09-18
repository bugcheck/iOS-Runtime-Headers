/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView {
    UIImage *_templateImage;
    unsigned char _tipDirection;
}

@property(retain) UIImage * templateImage;
@property unsigned char tipDirection;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTemplateImage:(id)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (id)templateImage;
- (void)tintColorDidChange;
- (unsigned char)tipDirection;
- (void)updateImage;
- (void)updateTransform;

@end
