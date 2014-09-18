/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, CAShapeLayer, TSDBezierPath, TSDRep;

@interface TSDKnob : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    boolmOffsetValid;
    boolmShouldDisplayDirectlyOverRep;
    boolmWorksWhenInVersionBrowsingMode;
    boolmWorksWhenRepLocked;
    CAShapeLayer *mHitRegionLayer;
    TSDBezierPath *mHitRegionPath;
    CALayer *mLayer;
    } mOffset;
    } mPosition;
    double mRadius;
    TSDRep *mRep;
    unsigned long long mTag;
    int mType;
}

@property(copy) TSDBezierPath * hitRegionPath;
@property(readonly) CALayer * layer;
@property struct CGPoint { double x1; double x2; } offset;
@property bool offsetValid;
@property struct CGPoint { double x1; double x2; } position;
@property double radius;
@property(readonly) TSDRep * rep;
@property bool shouldDisplayDirectlyOverRep;
@property unsigned long long tag;
@property int type;
@property bool worksWhenInVersionBrowsingMode;
@property bool worksWhenRepLocked;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;
- (void)dealloc;
- (id)description;
- (int)dragType;
- (id)hitRegionLayerForRep:(id)arg1;
- (id)hitRegionPath;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (id)init;
- (id)initWithType:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2 returningDistance:(double*)arg3;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2;
- (id)knobImage;
- (id)layer;
- (bool)obscuresKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)offsetValid;
- (bool)overlapsWithKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })pixelAlignedScaledCanvasCenterPositionFromKnobPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })position;
- (double)radius;
- (id)rep;
- (void)setHitRegionPath:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffsetValid:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setShouldDisplayDirectlyOverRep:(bool)arg1;
- (void)setTag:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setWorksWhenInVersionBrowsingMode:(bool)arg1;
- (void)setWorksWhenRepLocked:(bool)arg1;
- (bool)shouldDisplayDirectlyOverRep;
- (unsigned long long)tag;
- (int)type;
- (void)updateHitRegionPathForRep:(id)arg1;
- (bool)worksWhenInVersionBrowsingMode;
- (bool)worksWhenRepLocked;

@end
