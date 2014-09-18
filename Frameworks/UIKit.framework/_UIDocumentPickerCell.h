/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLayoutConstraint, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView;

@interface _UIDocumentPickerCell : UICollectionViewCell {
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;
    UIProgressView *_progressView;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;
    UIView *_thumbnailCenterView;
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;
    UIImageView *_thumbnailView;
    UILabel *_titleLabel;
}

@property(retain) UILongPressGestureRecognizer * pickableDiagnosticGestureRecognizer;
@property(retain) UIProgressView * progressView;
@property(retain) UILabel * subtitleLabel;
@property(retain) NSLayoutConstraint * thumbnailCenterHeightConstraint;
@property(retain) UIView * thumbnailCenterView;
@property(retain) NSLayoutConstraint * thumbnailCenterWidthConstraint;
@property(retain) UIImageView * thumbnailView;
@property(retain) UILabel * titleLabel;

+ (struct CGSize { double x1; double x2; })defaultSizeForTraits:(id)arg1;
+ (struct CGSize { double x1; double x2; })thumbnailSizeForTraits:(id)arg1;

- (void)_showPickableDiagnostic;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pickableDiagnosticGestureRecognizer;
- (void)prepareForReuse;
- (id)progressView;
- (void)reloadItem:(bool)arg1;
- (void)setPickableDiagnosticGestureRecognizer:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setThumbnailCenterHeightConstraint:(id)arg1;
- (void)setThumbnailCenterView:(id)arg1;
- (void)setThumbnailCenterWidthConstraint:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)thumbnailCenterHeightConstraint;
- (id)thumbnailCenterView;
- (id)thumbnailCenterWidthConstraint;
- (id)thumbnailView;
- (void)tintColorDidChange;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllerForDisplay;

@end
