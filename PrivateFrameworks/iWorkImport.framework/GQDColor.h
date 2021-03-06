/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface GQDColor : NSObject <GQDNameMappable> {
    float mAlpha;
    float mBlue;
    float mGreen;
    float mRed;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)blackColor;
+ (id)cmykColorFromReader:(struct _xmlTextReader { }*)arg1;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader { }*)arg2;
+ (id)rgbColorFromReader:(struct _xmlTextReader { }*)arg1 calibrated:(BOOL)arg2;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (id)whiteColorFromReader:(struct _xmlTextReader { }*)arg1 calibrated:(BOOL)arg2;

- (float)alphaComponent;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)blueComponent;
- (id)description;
- (void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (float)greenComponent;
- (int)htmlBlue;
- (int)htmlGreen;
- (int)htmlRed;
- (id)initWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (float)redComponent;

@end
