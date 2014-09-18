/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDCurveFitter : NSObject {
    double mErrorDistance;
    long long mErrorIterations;
}

@property double errorDistance;
@property long long errorIterations;

+ (id)curveFitter;

- (id)bezierPathFittingPointArray:(struct { double x1; double x2; }*)arg1 count:(long long)arg2;
- (id)bezierPathFittingPoints:(id)arg1;
- (double)errorDistance;
- (long long)errorIterations;
- (void)fitCurveToPointArray:(struct { double x1; double x2; }*)arg1 count:(long long)arg2 bezierCallback:(int (*)())arg3 context:(void*)arg4;
- (void)fitCurveToPoints:(id)arg1 bezierCallback:(int (*)())arg2 context:(void*)arg3;
- (id)init;
- (void)setErrorDistance:(double)arg1;
- (void)setErrorIterations:(long long)arg1;

@end
