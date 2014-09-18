/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    boolmInOutwardLayout;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    unsigned long long mRelayoutDepth;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
}

- (void)buildSubTree;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_currentBufferAreaUnitRect;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (double)p_dataSetNameLabelPadding;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (void)p_updateMinHitSizes;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id)arg2;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;

@end
