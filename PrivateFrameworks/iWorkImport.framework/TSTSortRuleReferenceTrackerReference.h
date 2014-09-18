/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCETrackedReference;

@interface TSTSortRuleReferenceTrackerReference : NSObject {
    unsigned char mColumnIndex;
    TSCETrackedReference *mTrackedReference;
}

@property unsigned char columnIndex;
@property(retain) TSCETrackedReference * trackedReference;

+ (id)referenceWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;

- (unsigned char)columnIndex;
- (bool)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColumnIndex:(unsigned char)arg1;
- (void)setTrackedReference:(id)arg1;
- (id)trackedReference;

@end
