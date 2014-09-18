/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke {
    struct CGSize { 
        double width; 
        double height; 
    boolmScaledSizesValid;
    } mAdornmentSize;
    double mAssetScale;
    double mBottomHeight;
    NSString *mFrameName;
    double mLeftWidth;
    double mRightWidth;
    TSDFrameSpec *mSpec;
    double mTopHeight;
}

@property(readonly) double assetScale;
@property(readonly) TSDFrameSpec * frameSpec;

+ (Class)mutableClass;

- (id)archivableFrameName;
- (double)assetScale;
- (bool)canApplyDirectlyToRepCALayer;
- (bool)canApplyToCAShapeLayer;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 whenStrokingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (double)equivalentStrokeWidth;
- (id)frameName;
- (id)frameSpec;
- (bool)hasMask;
- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)i_bottomHeight;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (bool)i_willRenderForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithFrameName:(id)arg1;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2;
- (id)initWithFrameSpec:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFrame;
- (bool)isNullStroke;
- (double)minimumAssetScale;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; })outsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })p_minimumRenderedSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_uncoveredRectWithoutAdornment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)saveToArchive:(struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;
- (bool)shouldRender;
- (bool)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x1; double x2; })arg1;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)supportsColor;
- (bool)supportsLineOptions;
- (bool)supportsPattern;

@end
