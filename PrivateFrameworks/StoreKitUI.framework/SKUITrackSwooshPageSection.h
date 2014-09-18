/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIMissingItemLoader, SKUISwooshPageComponent, SKUITrackSwooshArtworkLoader, SKUITrackSwooshViewController;

@interface SKUITrackSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUITrackSwooshViewControllerDelegate> {
    SKUITrackSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUITrackSwooshViewController *_swooshViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SKUISwooshPageComponent * pageComponent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;
- (id)_artworkLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)swoosh:(id)arg1 didConfirmItemOfferForItemAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didDoubleTapCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)willAppearInContext:(id)arg1;

@end
