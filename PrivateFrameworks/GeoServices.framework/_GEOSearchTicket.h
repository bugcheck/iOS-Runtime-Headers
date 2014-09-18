/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOMapServiceTraits, GEOPlaceSearchResponse, GEOSearchRequest, NSString;

@interface _GEOSearchTicket : NSObject <GEOMapServiceSearchTicket, _GEOLegacyMapServiceTicket> {
    GEOPlaceSearchResponse *_response;
    GEOMapRegion *_resultBoundingRegion;
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) GEOPlaceSearchResponse * response;
@property(readonly) GEOMapRegion * resultBoundingRegion;
@property(readonly) NSString * searchQuery;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithSearchRequest:(id)arg1 traits:(id)arg2;
- (id)request;
- (id)response;
- (id)resultBoundingRegion;
- (id)searchQuery;
- (void)setResponse:(id)arg1;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (id)traits;

@end
