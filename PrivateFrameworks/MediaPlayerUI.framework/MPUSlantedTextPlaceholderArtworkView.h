/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIColor, UIImage;

@interface MPUSlantedTextPlaceholderArtworkView : UIImageView {
    struct CGSize { 
        double width; 
        double height; 
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIColor *_externalBackgroundColor;
    long long _externalContentMode;
    UIImage *_externalImage;
    UIColor *_placeholderBackgroundColor;
    long long _placeholderContentMode;
    NSObject<OS_dispatch_queue> *_placeholderCreationQueue;
    UIImage *_placeholderImage;
    } _placeholderSize;
    UIColor *_placeholderStrokeColor;
    double _placeholderStrokeLineWidth;
    long long _placeholderStyle;
    NSString *_placeholderSubtitle;
    NSMutableDictionary *_placeholderSubtitleTextAttributes;
    NSString *_placeholderTitle;
    NSMutableDictionary *_placeholderTitleTextAttributes;
    unsigned long long _placeholderVersion;
    bool_drawsArtworkAsynchronously;
    bool_hasValidEffectiveImage;
    bool_hasValidPlaceholderImage;
    bool_hasValidPlaceholderTextAttributes;
}

@property bool drawsArtworkAsynchronously;
@property(retain) UIColor * placeholderBackgroundColor;
@property long long placeholderContentMode;
@property(retain) UIImage * placeholderImage;
@property struct CGSize { double x1; double x2; } placeholderSize;
@property(retain) UIColor * placeholderStrokeColor;
@property double placeholderStrokeLineWidth;
@property long long placeholderStyle;
@property(copy) NSString * placeholderSubtitle;
@property(copy) NSString * placeholderTitle;

- (void).cxx_destruct;
- (void)_drawPlaceholderWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayScale:(double)arg2;
- (void)_invalidateEffectiveImage;
- (void)_invalidateForChangedPlaceholderProperties;
- (void)_invalidatePlaceholderTextAttributes;
- (void)_updateEffectiveImage;
- (void)_updatePlaceholderImage;
- (void)_updatePlaceholderTextAttributes;
- (bool)drawsArtworkAsynchronously;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (id)placeholderBackgroundColor;
- (long long)placeholderContentMode;
- (id)placeholderImage;
- (struct CGSize { double x1; double x2; })placeholderSize;
- (id)placeholderStrokeColor;
- (double)placeholderStrokeLineWidth;
- (long long)placeholderStyle;
- (id)placeholderSubtitle;
- (id)placeholderTitle;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDrawsArtworkAsynchronously:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPlaceholderBackgroundColor:(id)arg1;
- (void)setPlaceholderContentMode:(long long)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholderStrokeColor:(id)arg1;
- (void)setPlaceholderStrokeLineWidth:(double)arg1;
- (void)setPlaceholderStyle:(long long)arg1;
- (void)setPlaceholderSubtitle:(id)arg1;
- (void)setPlaceholderTitle:(id)arg1;

@end
