/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleWebVTTCueCALayer : CALayer {
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal { id x1; id x2; struct OpaqueFigSubtitleRenderer {} *x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct __CFAttributedString {} *x5; unsigned char x6; } *layerInternal;
}

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)finalize;
- (struct __CFString { }*)getContentID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getSuggestedBounds:(unsigned char)arg1;
- (id)init;
- (unsigned char)isDirty;
- (void)layoutSublayers;
- (void)setContent:(struct __CFAttributedString { }*)arg1;
- (void)setCuePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDefaultFontSize:(double)arg1;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { }*)arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
