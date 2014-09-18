/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <TSWPFootnoteHeightMeasurer>, <TSWPFootnoteMarkProvider>, <TSWPOffscreenColumn>, NSMutableArray, NSString, TPFootnoteHeightMeasurer, TSDCanvas, TSDLayout, TSPObject<TSDHint>;

@interface TPBodyLayout : TSDLayout <TSWPLayoutTarget, TPAttachmentLayoutParent> {
    NSMutableArray *_anchoredDrawablesForRelayout;
    NSMutableArray *_columns;
    TPFootnoteHeightMeasurer *_footnoteHeightMeasurer;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(readonly) const struct * nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property(retain) NSMutableArray * anchoredDrawablesForRelayout;
@property(readonly) unsigned int autosizeFlags;
@property(readonly) TSDCanvas * canvas;
@property(retain,readonly) NSMutableArray * columns;
@property(readonly) struct CGSize { double x1; double x2; } currentSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer;
@property(readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;
@property(readonly) unsigned long long hash;
@property(readonly) struct __CFLocale { }* hyphenationLocale;
@property(readonly) bool layoutIsValid;
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
@property(readonly) TSDLayout * parentLayoutForInlineAttachments;
@property(readonly) struct CGPoint { double x1; double x2; } position;
@property(retain,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property(readonly) bool shouldHyphenate;
@property(readonly) Class superclass;
@property(readonly) bool textIsVertical;
@property(readonly) int verticalAlignment;
@property(readonly) bool wantsLineFragments;

+ (struct CGSize { double x1; double x2; })minimumBodySize;

- (void)addAttachmentLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGPoint { double x1; double x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)anchoredDrawablesForRelayout;
- (unsigned int)autosizeFlags;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (double)contentHeight;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)existingAttachmentLayoutForInfo:(id)arg1;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (bool)invalidateForPageCountChange;
- (void)invalidateSize;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (void)killColumns;
- (bool)layoutIsValid;
- (struct CGPoint { double x1; double x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSearchForAnnotationWithHitBlock:(id)arg1;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (int)naturalAlignment;
- (int)naturalDirection;
- (bool)needsInflation;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)nextTargetTopicNumbers;
- (id)p_attachedLayoutsInLayout:(id)arg1;
- (void)p_killDrawableLayouts:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForSelection:(id)arg1 useParagraphModeRects:(bool)arg2;
- (id)p_validatedLayoutForDrawable:(id)arg1 inContainingLayout:(id)arg2;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (id)parentLayoutForInlineAttachments;
- (struct CGPoint { double x1; double x2; })position;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)previousTargetTopicNumbers;
- (bool)processWidowAndInflation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (void)setAnchoredDrawablesForRelayout:(id)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldProvideSizingGuides;
- (bool)siblingTargetIsManipulatingDrawable:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (void)updateStartCharIndex;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForInlineDrawable:(id)arg1;
- (int)verticalAlignment;
- (bool)wantsLineFragments;

@end
