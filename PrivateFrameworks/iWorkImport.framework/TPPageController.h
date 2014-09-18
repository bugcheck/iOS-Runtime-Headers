/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, NSMutableArray, NSString, TPDocumentRoot, TPFootnoteLayoutController, TPOffscreenLayoutController, TPPageLayoutState, TSUMutablePointerSet, TSWPLayoutManager;

@interface TPPageController : NSObject <TSWPLayoutOwner, TPLayoutStateConsumer, TPLayoutStateProvider, TPPageLayoutInfoProvider> {
    struct multimap<unsigned long, TPPageLayout *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TPPageLayout *> > > { 
        struct __tree<std::__1::__value_type<unsigned long, TPPageLayout *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, TPPageLayout *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, TPPageLayout *> > > { 
            struct __tree_node<std::__1::__value_type<unsigned long, TPPageLayout *>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, TPPageLayout *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, TPPageLayout *>, std::__1::less<unsigned long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    int _backgroundLayoutEnabled;
    int _backgroundLayoutSuspendCount;
    NSDate *_bgLayoutStartDate;
    int _bgLayoutStatus;
    TSWPLayoutManager *_bodyLayoutManager;
    unsigned long long _completePageCount;
    TPDocumentRoot *_documentRoot;
    TPOffscreenLayoutController *_drawablesLayoutController;
    TPFootnoteLayoutController *_footnoteLayoutController;
    int _isScrolling;
    unsigned long long _lastKnownPageCount;
    TSUMutablePointerSet *_layoutObservers;
    TPPageLayoutState *_layoutState;
    NSMutableArray *_pageGeneratorStack;
    } _pageLayoutCache;
    NSMutableArray *_sectionHints;
    bool_checkedForBackUp;
    bool_handleBackgroundLayoutScheduled;
    bool_shouldUpdatePageCount;
}

@property bool backgroundLayoutEnabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long firstPageIndexNeedingLayout;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long pageCount;
@property(readonly) Class superclass;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accquireLockAndPerformAction:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (void)archivedLayoutState:(id)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setLastPageCount:(unsigned long long)arg2;
- (bool)archivedLayoutState:(id)arg1 setSectionHints:(id)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id)arg1 setSectionPageIndex:(unsigned long long)arg2;
- (bool)backgroundLayoutEnabled;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
- (bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (bool)caresAboutStorageChanges;
- (int)contentFlagsForPageIndex:(unsigned long long)arg1;
- (void)d_timeLayout;
- (void)dealloc;
- (void)didScroll;
- (void)didZoom;
- (unsigned long long)documentPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)firstPageIndexNeedingLayout;
- (double)footerHeight;
- (id)footnoteLayoutController;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (double)headerHeight;
- (id)i_columnAfterPageIndex:(unsigned long long)arg1;
- (id)i_columnPriorToPageIndex:(unsigned long long)arg1;
- (id)i_firstChildHintAfterPageIndex:(unsigned long long)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (id)i_pageHintForPageIndex:(unsigned long long)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(unsigned long long)arg2;
- (bool)i_shouldLayoutBodyVertically;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)i_topicHintsAfterPageIndex:(unsigned long long)arg1;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)i_topicHintsPriorToPageIndex:(unsigned long long)arg1;
- (void)i_trimPageAtIndex:(unsigned long long)arg1 toCharIndex:(unsigned long long)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (void)i_unregisterPageLayout:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isLayoutComplete;
- (bool)isLayoutCompleteThroughPageIndex:(unsigned long long)arg1;
- (unsigned long long)lastPageCountForArchivedLayoutState:(id)arg1;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (void)layoutThroughPageIndex:(unsigned long long)arg1;
- (id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (bool)okToAnchorDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (void)p_advanceSectionIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_anchoredRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (void)p_backgroundLayoutReadEntry;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_bodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (id)p_cachedPageLayoutForPageIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2;
- (bool)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (void)p_cancelBGLayout;
- (void)p_checkForBackUp;
- (void)p_destroyBodyLayoutState;
- (void)p_didLayout;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_footnoteLayoutRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (void)p_forceRestartLayout;
- (void)p_handleBGLayoutStatusChange;
- (void)p_handleBackgroundLayout;
- (void)p_handleBackgroundLayoutMainThreadEntry;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (void)p_invalidatePageIndex:(unsigned long long)arg1;
- (bool)p_isBackgroundLayoutActive;
- (bool)p_isLayoutComplete;
- (id)p_lastValidPageHint;
- (id)p_lastValidTextPageHint;
- (unsigned long long)p_lastValidTextPageIndex;
- (unsigned long long)p_layoutEndCharIndex;
- (unsigned long long)p_layoutEndFootnoteIndex;
- (void)p_layoutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layoutIntoPageLayout:(id)arg1 outDidSync:(bool*)arg2;
- (void)p_layoutNextPageForLayoutController:(id)arg1;
- (void)p_layoutTextIntoPageLayout:(id)arg1 outDidSync:(bool*)arg2;
- (void)p_layoutThroughPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(bool)arg3;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(bool)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(bool)arg1;
- (id)p_pageHintForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (unsigned long long)p_pageIndexContainingIndex:(unsigned long long)arg1 ofType:(int)arg2;
- (unsigned long long)p_pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 searchAfterLayoutPoint:(bool)arg3;
- (unsigned long long)p_pageIndexForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2 forceLayout:(bool)arg3 searchAfterLayoutPoint:(bool)arg4;
- (unsigned long long)p_pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 searchAfterLayoutPoint:(bool)arg3;
- (id)p_pageIndexPathForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (id)p_pageMasterForPageIndex:(unsigned long long)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (void)p_prepareLayoutStateForNextPage;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_rangeOfContinuousSectionsAtPageIndex:(unsigned long long)arg1 startPage:(unsigned long long*)arg2;
- (void)p_removeFinishedPageGenerators;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_resetPageGenerators;
- (void)p_scheduleBGLayout;
- (void)p_scheduleImmediateBGLayout;
- (id)p_sectionAtSectionIndex:(unsigned long long)arg1;
- (id)p_sectionHintForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 allowAfterLayoutPoint:(bool)arg3;
- (void)p_setBackgroundLayoutStartDate:(id)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(unsigned long long)arg1;
- (void)p_setNeedsLayoutOnPageIndex:(unsigned long long)arg1;
- (void)p_syncFromNextPage;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndex:(unsigned long long)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (unsigned long long)p_textPageIndexPrecedingPageIndex:(unsigned long long)arg1;
- (void)p_updateBackgroundLayoutStartDate;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1;
- (void)p_updatePageCount;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(id)arg3;
- (bool)pageAtIndexHasBody:(unsigned long long)arg1;
- (bool)pageBeginsWithPaginatedAttachment:(unsigned long long)arg1;
- (unsigned long long)pageCount;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (bool)pageEndsWithPaginatedAttachment:(unsigned long long)arg1;
- (unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (unsigned long long)pageIndexForCharIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (unsigned long long)pageIndexForFootnoteIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (id)pageInfoForAttachmentAtBodyCharIndex:(unsigned long long)arg1 selection:(id)arg2;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRangeForSelection:(id)arg1 outEndIsValid:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pageRangeOfSectionIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })positionForPositionerForDrawable:(id)arg1;
- (void)removeLayoutObserver:(id)arg1;
- (void)resumeBackgroundLayout;
- (void)scheduleImmediateBackgroundLayout;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionBodyRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (id)sectionHintsForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionIndexForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (unsigned long long)sectionPageIndexForArchivedLayoutState:(id)arg1;
- (unsigned long long)sectionPageIndexForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionPageRangeForPageIndex:(unsigned long long)arg1 forceLayout:(bool)arg2 outEndIsValid:(bool*)arg3;
- (void)setBackgroundLayoutEnabled:(bool)arg1;
- (void)setupListenersForInteractiveCanvasController;
- (bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (void)suspendBackgroundLayout;
- (void)teardown;
- (id)textWrapper;
- (void)willScroll;
- (void)willZoom;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 executeBlock:(id)arg2;
- (void)withPageLayoutAtIndex:(unsigned long long)arg1 preferredLayoutController:(id)arg2 executeBlock:(id)arg3;

@end
