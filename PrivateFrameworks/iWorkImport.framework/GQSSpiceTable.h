/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSSpiceTable : GQSTable {
    boolmReadingRowVectors;
    struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; } *mColumnPositions;
    float mCurrentCellMaxX;
    float mCurrentCellMaxY;
    float mCurrentCellMinX;
    float mCurrentCellMinY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
    struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; } *mRowPositions;
    struct __CFDictionary { } *mVectorUidToAlongMap;
}

- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)dealloc;
- (id)init;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;

@end
