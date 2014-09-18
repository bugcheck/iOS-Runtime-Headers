/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSString, TSDDrawableInfo<TSDContainerInfo>;

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection, NSCopying> {
    NSSet *mAdditionalInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
    NSSet *mExcludedInfos;
    NSSet *mInfos;
}

@property(readonly) int canvasSelectionKind;
@property(readonly) TSDDrawableInfo<TSDContainerInfo> * container;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long infoCount;
@property(readonly) NSSet * infos;
@property(readonly) bool isEmpty;
@property(readonly) NSSet * rawInfos;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unlockedInfoCount;
@property(readonly) NSSet * unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)canvasSelectionFromCanvasSelection:(id)arg1 withToggledInfo:(id)arg2;
+ (id)canvasSelectionFromSelection:(id)arg1;
+ (id)emptySelection;
+ (id)selectionWithInfos:(id)arg1;

- (int)canvasSelectionKind;
- (id)container;
- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 startChar:(unsigned long long)arg2 endChar:(unsigned long long)arg3 rightToLeft:(bool)arg4 sameLine:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; int x10; int x11; unsigned int x12[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 leadingCharIndex:(unsigned long long)arg7 infos:(id)arg8 excludedInfos:(id)arg9 additionalInfos:(id)arg10 container:(id)arg11;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)p_commonCopyTo:(id)arg1;
- (id)rawInfos;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; int x10; int x11; unsigned int x12[1]; }*)arg1 archiver:(id)arg2;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end
