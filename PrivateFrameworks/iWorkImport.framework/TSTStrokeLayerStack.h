/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSPointerArray;

@interface TSTStrokeLayerStack : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    long long _maxStrokeIndex;
    long long _stackKind;
    NSPointerArray *_strokeLayers;
    long long _type;
    } mRWLock;
}

@property long long maxStrokeIndex;
@property long long stackKind;
@property(retain) NSPointerArray * strokeLayers;
@property long long type;

+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 atRowIndex:(long long)arg3;
+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 atColumnIndex:(long long)arg3;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
+ (id)strokeLayerStackWithStackKind:(long long)arg1 andStrokeLayer:(id)arg2 atLayerIndex:(long long)arg3;
+ (id)strokeLayerStackWithStackKind:(long long)arg1;

- (void)dealloc;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 usingBlock:(id)arg2;
- (id)initMergedCopyWithMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithStackKind:(long long)arg1;
- (void)insertStroke:(id)arg1 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2 atLayerIndex:(long long)arg3;
- (void)invalidateStrokesAtLayerIndex:(long long)arg1 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2;
- (void)invalidateStrokesAtLayerIndex:(long long)arg1;
- (void)lockForRead;
- (void)lockForWrite;
- (id)lookupStrokeAtIndex:(long long)arg1;
- (long long)maxStrokeIndex;
- (void)p_invalidateStrokesAtLayerIndex:(long long)arg1;
- (bool)replaceStrokeLayerAtLayerIndex:(long long)arg1 withStrokeLayer:(id)arg2;
- (void)setMaxStrokeIndex:(long long)arg1;
- (void)setStackKind:(long long)arg1;
- (void)setStrokeLayers:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)stackKind;
- (id)strokeLayers;
- (long long)type;
- (void)unlock;

@end
