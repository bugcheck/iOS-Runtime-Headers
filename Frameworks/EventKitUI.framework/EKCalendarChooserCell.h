/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIImage, UIImageView;

@interface EKCalendarChooserCell : EKUIConstrainedFontsTableViewCell {
    UIImageView *_checkmarkView;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    bool_checked;
    bool_shouldAnimate;
    bool_showCheckmarksOnLeft;
    bool_showsColorDot;
}

@property bool checked;
@property bool shouldAnimate;
@property bool showCheckmarksOnLeft;
@property bool showsColorDot;

- (void).cxx_destruct;
- (bool)checked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setShouldAnimate:(bool)arg1;
- (void)setShowCheckmarksOnLeft:(bool)arg1 animated:(bool)arg2;
- (void)setShowCheckmarksOnLeft:(bool)arg1;
- (void)setShowsColorDot:(bool)arg1;
- (bool)shouldAnimate;
- (bool)showCheckmarksOnLeft;
- (bool)showsColorDot;
- (double)textLeftIndent;

@end
