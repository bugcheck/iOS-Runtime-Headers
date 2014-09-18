/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSData, NSHTTPURLResponse, NSString, NSURL, SKUIProductPageItem, SKUIProductPageProductInfo, SKUIReviewConfiguration, SKUIUber, SSMetricsConfiguration;

@interface SKUIProductPage : NSObject <NSCopying> {
    long long _defaultPageFragment;
    SKUIProductPageItem *_item;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    SKUIProductPageProductInfo *_productInformation;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property(retain) NSData * ITMLData;
@property(retain) NSHTTPURLResponse * ITMLResponse;
@property long long defaultPageFragment;
@property(retain) SKUIProductPageItem * item;
@property(retain) SSMetricsConfiguration * metricsConfiguration;
@property(copy) NSString * metricsPageDescription;
@property(copy) NSURL * pageURL;
@property(retain) SKUIProductPageProductInfo * productInformation;
@property(copy) NSArray * relatedContentSwooshes;
@property(retain) SKUIReviewConfiguration * reviewConfiguration;
@property(retain) SKUIUber * uber;

- (void).cxx_destruct;
- (id)ITMLData;
- (id)ITMLResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultPageFragment;
- (id)item;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageURL;
- (id)productInformation;
- (id)relatedContentSwooshes;
- (id)reviewConfiguration;
- (void)setDefaultPageFragment:(long long)arg1;
- (void)setITMLData:(id)arg1;
- (void)setITMLResponse:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setProductInformation:(id)arg1;
- (void)setRelatedContentSwooshes:(id)arg1;
- (void)setReviewConfiguration:(id)arg1;
- (void)setUber:(id)arg1;
- (id)uber;

@end
