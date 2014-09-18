/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, UIView;

@interface PUCropOverlayView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    UIView *__cropWindowView;
    NSArray *__maskViews;
    NSArray *__oneNinthCropLines;
    NSArray *__oneThirdCropLines;
    } _cropRect;
    bool_cropGridVisible;
    bool_maskedContentVisible;
    bool_straightenGridVisible;
}

@property(setter=_setCropWindowView:,retain) UIView * _cropWindowView;
@property(setter=_setMaskViews:,retain) NSArray * _maskViews;
@property(setter=_setOneNinethLines:,retain) NSArray * _oneNinthCropLines;
@property(setter=_setOneThirdLines:,retain) NSArray * _oneThirdCropLines;
@property(getter=isCropGridVisible) bool cropGridVisible;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property(readonly) id layoutReferenceItem;
@property(getter=isMaskedContentVisible) bool maskedContentVisible;
@property(getter=isStraightenGridVisible) bool straightenGridVisible;

- (void).cxx_destruct;
- (id)_addLinesSpacedForCount:(unsigned long long)arg1 drawFirstAndLast:(bool)arg2 visible:(bool)arg3;
- (id)_createConstraintsForLine:(id)arg1 centerMultiplier:(double)arg2 vertical:(bool)arg3;
- (id)_createLineViewForCount:(unsigned long long)arg1;
- (id)_createMaskView;
- (id)_cropWindowView;
- (id)_maskViews;
- (id)_oneNinthCropLines;
- (id)_oneThirdCropLines;
- (void)_setCropWindowView:(id)arg1;
- (void)_setGridViews:(id)arg1 visible:(bool)arg2 iVarVisibilePtr:(bool*)arg3 animated:(bool)arg4;
- (void)_setMaskViews:(id)arg1;
- (void)_setOneNinethLines:(id)arg1;
- (void)_setOneThirdLines:(id)arg1;
- (unsigned long long)_subviewIndexForLineForCount:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCropGridVisible;
- (bool)isMaskedContentVisible;
- (bool)isStraightenGridVisible;
- (id)layoutReferenceItem;
- (void)setCropGridVisible:(bool)arg1 animated:(bool)arg2;
- (void)setCropGridVisible:(bool)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaskedContentVisible:(bool)arg1 animated:(bool)arg2;
- (void)setMaskedContentVisible:(bool)arg1;
- (void)setStraightenGridVisible:(bool)arg1 animated:(bool)arg2;
- (void)setStraightenGridVisible:(bool)arg1;

@end
