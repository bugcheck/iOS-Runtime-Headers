/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CHDrawing : NSObject <NSCopying> {
    struct CJKChar { 
        struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
            struct vector<double, std::__1::allocator<double> > {} *__begin_; 
            struct vector<double, std::__1::allocator<double> > {} *__end_; 
            struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { 
                struct vector<double, std::__1::allocator<double> > {} *__first_; 
            } __end_cap_; 
        } strokes; 
        unsigned long long currentStrokeIndex; 
        unsigned int mSize; 
        struct Matrix<double> { 
            int (**_vptr$Matrix)(); 
            double *_data; 
            unsigned int _w; 
            unsigned int _h; 
        } bitmap; 
        double lineHeight; 
    } _drawing;
}

@property /* Warning: unhandled struct encoding: '{CJKChar={vector<std::__1::vector<double' */ struct  drawing; /* unknown property attribute:  std::__1::allocator<double> >}}}QI{Matrix<double>=^^?^dII}d} */

- (struct CJKChar { struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_1_1_1; struct vector<double, std::__1::allocator<double> > {} *x_1_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned int x3; struct Matrix<double> { int (**x_4_1_1)(); double *x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; double x5; })drawing;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })bitmapRepresentationForSize:(struct CGSize { double x1; double x2; })arg1 drawingAlgorithm:(int)arg2;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })bitmapRepresentationForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)endStroke;
- (id)initWithContentsOfFile:(id)arg1;
- (bool)isPrefixForDrawing:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchingStrokePrefixRangeForDrawing:(id)arg1;
- (unsigned long long)pointCount;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)setDrawing:(struct CJKChar { struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_1_1_1; struct vector<double, std::__1::allocator<double> > {} *x_1_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned int x3; struct Matrix<double> { int (**x_4_1_1)(); double *x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; } x4; double x5; })arg1;
- (void)setLineHeight:(double)arg1;
- (id)sortedDrawing;
- (unsigned long long)strokeCount;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })strokeIndicesSortedByMinXCoordinate;
- (id)xyRepresentation;

@end
