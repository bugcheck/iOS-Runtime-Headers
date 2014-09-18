/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject {
    TSDStroke *mExteriorStroke;
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    unsigned int mVisibleMask;
}

@property(retain) TSDStroke * exteriorStroke;
@property(retain) TSDStroke * horizontalStroke;
@property unsigned int mask;
@property(retain) TSDStroke * verticalStroke;

- (void)dealloc;
- (id)exteriorStroke;
- (id)horizontalStroke;
- (id)init;
- (id)initWithArchive:(const struct StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct StrokeArchive {} *x4; struct StrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Deprecated_TableStrokeArchive {} *x3; struct Deprecated_TableStrokeArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)mask;
- (void)saveToArchive:(struct StrokePresetDataArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StrokeArchive {} *x3; struct StrokeArchive {} *x4; struct StrokeArchive {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)setExteriorStroke:(id)arg1;
- (void)setHorizontalStroke:(id)arg1;
- (void)setMask:(unsigned int)arg1;
- (void)setVerticalStroke:(id)arg1;
- (id)verticalStroke;

@end
