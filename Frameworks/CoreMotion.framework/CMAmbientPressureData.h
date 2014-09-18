/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureData : CMLogItem {
    id _internal;
}

@property(readonly) struct { double x1; double x2; } ambientPressure;

- (struct { double x1; double x2; })ambientPressure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(struct { float x1; float x2; })arg1 andTimestamp:(double)arg2;

@end
