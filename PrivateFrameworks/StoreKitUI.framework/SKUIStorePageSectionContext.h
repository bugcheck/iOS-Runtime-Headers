/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIClientContext, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIResourceLoader, SKUIStorePageSectionsViewController, UICollectionView, UIColor;

@interface SKUIStorePageSectionContext : NSObject {
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    double _activePageWidth;
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    long long _defaultPinningTransitionStyle;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    double _landscapePageWidth;
    long long _layoutStyle;
    SKUIMetricsController *_metricsController;
    SKUIStorePageSectionsViewController *_parentViewController;
    UIColor *_placeholderColor;
    double _portraitPageWidth;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly) SKUIMetricsImpressionSession * activeMetricsImpressionSession;
@property(readonly) double activePageWidth;
@property(readonly) SKUIClientContext * clientContext;
@property(readonly) UICollectionView * collectionView;
@property(readonly) SKUIColorScheme * colorScheme;
@property(readonly) long long defaultPinningTransitionStyle;
@property(readonly) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(readonly) double landscapePageWidth;
@property(readonly) long long layoutStyle;
@property(readonly) SKUIMetricsController * metricsController;
@property(readonly) SKUIStorePageSectionsViewController * parentViewController;
@property(readonly) UIColor * placeholderColor;
@property(readonly) double portraitPageWidth;
@property(readonly) SKUIResourceLoader * resourceLoader;
@property(readonly) SKUILayoutCache * textLayoutCache;

- (void).cxx_destruct;
- (void)_setActiveMetricsImpressionSession:(id)arg1;
- (void)_setActivePageWidth:(double)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setDefaultPinningTransitionStyle:(long long)arg1;
- (void)_setLandscapePageWidth:(double)arg1;
- (void)_setLayoutStyle:(long long)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setParentViewController:(id)arg1;
- (void)_setPortraitPageWidth:(double)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setTextLayoutCache:(id)arg1;
- (id)activeMetricsImpressionSession;
- (double)activePageWidth;
- (id)clientContext;
- (id)collectionView;
- (id)colorScheme;
- (long long)defaultPinningTransitionStyle;
- (id)init;
- (id)itemOfferButtonAppearance;
- (double)landscapePageWidth;
- (long long)layoutStyle;
- (id)metricsController;
- (id)parentViewController;
- (id)placeholderColor;
- (double)portraitPageWidth;
- (id)resourceLoader;
- (id)textLayoutCache;

@end
