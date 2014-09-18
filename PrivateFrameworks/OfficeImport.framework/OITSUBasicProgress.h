/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress {
    OITSUBasicProgressStorage *mStorage;
}

@property(getter=isIndeterminate) bool indeterminate;
@property double value;

- (void)dealloc;
- (id)init;
- (id)initWithMaxValue:(double)arg1;
- (bool)isIndeterminate;
- (double)maxValue;
- (void)setIndeterminate:(bool)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
