/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <TSWPFootnoteHeightMeasurer>, <TSWPFootnoteMarkProvider>, <TSWPOffscreenColumn>, NSMutableArray, NSObject<TSWPTextDelegate>, NSString, TSDCanvas, TSDLayout, TSPObject<TSDHint>, TSUColor, TSWPColumnStyle, TSWPListStyle, TSWPPadding, TSWPParagraphStyle, TSWPStorage, TSWPTextParentInfo, TSWPTextParentLayout;

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGPoint { 
        double x; 
        double y; 
    } _anchor;
    TSWPColumnStyle *_columnStyle;
    NSMutableArray *_columns;
    NSObject<TSWPTextDelegate> *_delegate;
    int _flags;
    TSWPListStyle *_listStyle;
    } _maxSize;
    } _minSize;
    int _naturalAlignment;
    int _naturalDirection;
    unsigned long long _pageCount;
    unsigned long long _pageNumber;
    TSWPParagraphStyle *_paragraphStyle;
    TSWPTextParentInfo *_parentInfo;
    TSWPTextParentLayout *_parentLayout;
    TSWPStorage *_storage;
    TSUColor *_textColorOverride;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(readonly) const struct * nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(readonly) bool alwaysStartsNewTarget;
@property(readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property(retain) NSMutableArray * anchoredDrawablesForRelayout;
@property(readonly) unsigned int autosizeFlags;
@property(readonly) TSDCanvas * canvas;
@property(readonly) unsigned long long columnCount;
@property(retain,readonly) NSMutableArray * columns;
@property(readonly) bool columnsAreLeftToRight;
@property(readonly) struct CGSize { double x1; double x2; } currentSize;
@property(copy,readonly) NSString * debugDescription;
@property NSObject<TSWPTextDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer;
@property(readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;
@property(readonly) unsigned long long hash;
@property(readonly) struct __CFLocale { }* hyphenationLocale;
@property(readonly) bool layoutIsValid;
@property(readonly) TSWPPadding * layoutMargins;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property(readonly) double maxAnchorY;
@property(readonly) struct CGSize { double x1; double x2; } maxSize;
@property(readonly) struct CGSize { double x1; double x2; } minSize;
@property(readonly) int naturalAlignment;
@property(readonly) int naturalDirection;
@property(readonly) TSPObject<TSDHint> * nextTargetFirstChildHint;
@property(retain,readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn;
@property(readonly) unsigned long long pageCount;
@property(readonly) unsigned long long pageNumber;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) TSDLayout * parentLayoutForInlineAttachments;
@property(readonly) struct CGPoint { double x1; double x2; } position;
@property(retain,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property(readonly) bool shouldHyphenate;
@property(readonly) bool shrinkTextToFit;
@property(readonly) Class superclass;
@property(retain) TSUColor * textColorOverride;
@property(readonly) bool textIsVertical;
@property(readonly) double textScaleFactor;
@property(readonly) int verticalAlignment;
@property(readonly) bool wantsLineFragments;

- (id).cxx_construct;
- (void)addAttachmentLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (bool)caresAboutStorageChanges;
- (unsigned long long)columnCount;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (bool)columnsAreLeftToRight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)delegate;
- (void)drawColumn:(id)arg1 inContext:(struct CGContext { }*)arg2 isFlipped:(bool)arg3 viewScale:(double)arg4;
- (void)drawColumn:(id)arg1 selection:(id)arg2 inContext:(struct CGContext { }*)arg3 isFlipped:(bool)arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 inContext:(struct CGContext { }*)arg2 minSize:(struct CGSize { double x1; double x2; })arg3 maxSize:(struct CGSize { double x1; double x2; })arg4 anchor:(struct CGPoint { double x1; double x2; })arg5 flags:(int)arg6 viewScale:(double)arg7;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (bool)forceWesternLineBreaking;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(int)arg3 naturalDirection:(int)arg4;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(int)arg4 naturalDirection:(int)arg5;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (bool)layoutIsValid;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (id)layoutMargins;
- (id)layoutText:(id)arg1 kind:(int)arg2 minSize:(struct CGSize { double x1; double x2; })arg3 maxSize:(struct CGSize { double x1; double x2; })arg4 anchor:(struct CGPoint { double x1; double x2; })arg5 flags:(int)arg6;
- (id)layoutText:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 maxSize:(struct CGSize { double x1; double x2; })arg3 anchor:(struct CGPoint { double x1; double x2; })arg4 flags:(int)arg5;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 maxSize:(struct CGSize { double x1; double x2; })arg3 anchor:(struct CGPoint { double x1; double x2; })arg4 flags:(int)arg5;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 maxSize:(struct CGSize { double x1; double x2; })arg3 anchor:(struct CGPoint { double x1; double x2; })arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)nextTargetTopicNumbers;
- (void)p_setParentLayoutMaximumFrameSizeForChildren;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (id)paragraphStyle;
- (struct CGPoint { double x1; double x2; })position;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)previousTargetTopicNumbers;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextColorOverride:(id)arg1;
- (bool)shrinkTextToFit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textColorOverride;
- (bool)textIsVertical;
- (id)textWrapper;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (bool)wantsLineFragments;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
