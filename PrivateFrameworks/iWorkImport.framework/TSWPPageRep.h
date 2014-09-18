/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageRep : TSDContainerRep {
}

+ (id)p_overflowKnobImage;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (id)headerFooterRep:(int)arg1 atIndex:(int)arg2;
- (id)headerFooterRepForStorage:(id)arg1;
- (void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1;
- (void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2;
- (bool)p_hasValidHeaderFooterForType:(int)arg1;
- (bool)p_headerFooterBorderVisibleForType:(int)arg1;
- (double)p_headerFooterBorderWidth;
- (bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (void)p_updateBorderLayers;
- (void)p_updateHeaderFooterRepClipping:(int)arg1;
- (void)p_updateLayoutBordersVisibility;
- (void)updateFromLayout;
- (void)viewScrollDidChange;
- (void)viewScrollingEnded;

@end
