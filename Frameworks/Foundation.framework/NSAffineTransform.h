/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
    struct { 
        double m11; 
        double m12; 
        double m21; 
        double m22; 
        double tX; 
        double tY; 
    } _transformStruct;
}

@property struct { double x1; double x2; double x3; double x4; double x5; double x6; } transformStruct;

+ (id)transform;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (float)angle;
- (void)appendTransform:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfTransformedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cgAffineTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)differOnlyByTranslation:(id)arg1;
- (bool)differsFrom:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(id)arg1;
- (void)invert;
- (bool)isAxisAligned;
- (bool)isEqual:(id)arg1;
- (void)prependTransform:(id)arg1;
- (void)rotateByDegrees:(double)arg1;
- (void)rotateByRadians:(double)arg1;
- (void)scaleBy:(double)arg1;
- (void)scaleXBy:(double)arg1 yBy:(double)arg2;
- (void)setTransformStruct:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)shearXBy:(float)arg1 yBy:(float)arg2;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 upperLeft:(struct CGPoint { double x1; double x2; }*)arg2 lowerLeft:(struct CGPoint { double x1; double x2; }*)arg3 lowerRight:(struct CGPoint { double x1; double x2; }*)arg4 upperRight:(struct CGPoint { double x1; double x2; }*)arg5;
- (struct CGSize { double x1; double x2; })transformSize:(struct CGSize { double x1; double x2; })arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })transformStruct;
- (void)translateXBy:(double)arg1 yBy:(double)arg2;

@end
