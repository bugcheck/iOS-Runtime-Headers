/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKTiledLayoutGeneratorScanState;

@interface CKTiledLayoutGenerator : NSObject {
    struct { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        boolhasCaption; 
        boolisBatchStart; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    long long _cacheHeadLocation;
    long long _cacheTailLocation;
    id _cachedBatchID[20];
    } _cachedTileInfo[20];
    } _captionPadding;
    } _interTileSpacing;
    } _noCaptionSpacing;
    long long _numberOfMagneticGuidelines;
    id _parsedFrameBlock;
    double _roundingScale;
    long long _scanLocation;
    long long _scanSpecialSequenceCount;
    id _scannedBatchID;
    id _tileBatchIDBlock;
    id _tileCaptionSizeBlock;
    long long _tileCount;
    id _tileHasCaptionBlock;
    id _tileImageSizeBlock;
    id _tileMinimumSizeBlock;
    bool_scannedBatchHasCaption;
    bool_shouldStop;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } captionPadding;
@property struct CGSize { double x1; double x2; } interTileSpacing;
@property(readonly) bool isAtEnd;
@property struct CGSize { double x1; double x2; } noCaptionSpacing;
@property long long numberOfMagneticGuidelines;
@property id parsedFrameBlock;
@property double roundingScale;
@property long long scanLocation;
@property long long scanSpecialSequenceCount;
@property CKTiledLayoutGeneratorScanState * scanState;
@property bool scannedBatchHasCaption;
@property(retain) id scannedBatchID;
@property bool shouldStop;
@property(copy) id tileBatchIDBlock;
@property(copy) id tileCaptionSizeBlock;
@property long long tileCount;
@property(copy) id tileHasCaptionBlock;
@property(copy) id tileImageSizeBlock;
@property(copy) id tileMinimumSizeBlock;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })captionPadding;
- (struct CGSize { double x1; double x2; })captionSizeForTileAtIndex:(long long)arg1 proposedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)didParseTiles;
- (void)enumerateFramesWithBlock:(id)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })interTileSpacing;
- (bool)isAtEnd;
- (struct CGSize { double x1; double x2; })noCaptionSpacing;
- (long long)numberOfMagneticGuidelines;
- (bool)parseNextTiles;
- (void)parseTiles;
- (void)parsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (id)parsedFrameBlock;
- (double)roundingScale;
- (bool)scanAnyTile:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1;
- (long long)scanLocation;
- (long long)scanSpecialSequenceCount;
- (id)scanState;
- (bool)scanTile:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1 ofType:(long long)arg2;
- (bool)scanTile:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1 passingTest:(id)arg2;
- (bool)scanTile:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1 type:(long long*)arg2;
- (bool)scanTileWithHorizontalPanorama:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1;
- (bool)scanTileWithLandscapeImage:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1;
- (bool)scanTileWithPortraitImage:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1;
- (bool)scanTileWithSquareImage:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; boolx4; boolx5; }*)arg1;
- (bool)scannedBatchHasCaption;
- (id)scannedBatchID;
- (void)setCaptionPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInterTileSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfMagneticGuidelines:(long long)arg1;
- (void)setParsedFrameBlock:(id)arg1;
- (void)setRoundingScale:(double)arg1;
- (void)setScanLocation:(long long)arg1;
- (void)setScanSpecialSequenceCount:(long long)arg1;
- (void)setScanState:(id)arg1;
- (void)setScannedBatchHasCaption:(bool)arg1;
- (void)setScannedBatchID:(id)arg1;
- (void)setShouldStop:(bool)arg1;
- (void)setTileBatchIDBlock:(id)arg1;
- (void)setTileCaptionSizeBlock:(id)arg1;
- (void)setTileCount:(long long)arg1;
- (void)setTileHasCaptionBlock:(id)arg1;
- (void)setTileImageSizeBlock:(id)arg1;
- (void)setTileMinimumSizeBlock:(id)arg1;
- (bool)shouldStop;
- (id)tileBatchIDBlock;
- (id)tileCaptionSizeBlock;
- (long long)tileCount;
- (id)tileHasCaptionBlock;
- (id)tileImageSizeBlock;
- (id)tileMinimumSizeBlock;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(bool)arg2;
- (void)willParseTiles;

@end
