/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEOMapRegion, GEOPlaceSearchRequest, NSString;

@interface GEOMapQuery : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientImgFmt : 1; 
        unsigned int clientImgMaxHeight : 1; 
        unsigned int clientImgMaxWidth : 1; 
        unsigned int mapCenterX : 1; 
        unsigned int mapCenterY : 1; 
        unsigned int mapSpanX : 1; 
        unsigned int mapSpanY : 1; 
        unsigned int requestType : 1; 
        unsigned int tilesizeX : 1; 
        unsigned int tilesizeY : 1; 
        unsigned int zoomlevel : 1; 
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    } _has;
    int _mapCenterX;
    int _mapCenterY;
    GEOMapRegion *_mapRegion;
    int _mapSpanX;
    int _mapSpanY;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    int _requestType;
    } _sessionID;
    int _tilesizeX;
    int _tilesizeY;
    GEOLocation *_userLocation;
    int _zoomlevel;
}

@property int clientImgFmt;
@property int clientImgMaxHeight;
@property int clientImgMaxWidth;
@property bool hasClientImgFmt;
@property bool hasClientImgMaxHeight;
@property bool hasClientImgMaxWidth;
@property bool hasMapCenterX;
@property bool hasMapCenterY;
@property(readonly) bool hasMapRegion;
@property bool hasMapSpanX;
@property bool hasMapSpanY;
@property(readonly) bool hasPlaceSearchRequest;
@property(readonly) bool hasQuery;
@property bool hasRequestType;
@property bool hasSessionID;
@property bool hasTilesizeX;
@property bool hasTilesizeY;
@property(readonly) bool hasUserLocation;
@property bool hasZoomlevel;
@property int mapCenterX;
@property int mapCenterY;
@property(retain) GEOMapRegion * mapRegion;
@property int mapSpanX;
@property int mapSpanY;
@property(retain) GEOPlaceSearchRequest * placeSearchRequest;
@property(retain) NSString * query;
@property int requestType;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property int tilesizeX;
@property int tilesizeY;
@property(retain) GEOLocation * userLocation;
@property int zoomlevel;

- (int)clientImgFmt;
- (int)clientImgMaxHeight;
- (int)clientImgMaxWidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientImgFmt;
- (bool)hasClientImgMaxHeight;
- (bool)hasClientImgMaxWidth;
- (bool)hasMapCenterX;
- (bool)hasMapCenterY;
- (bool)hasMapRegion;
- (bool)hasMapSpanX;
- (bool)hasMapSpanY;
- (bool)hasPlaceSearchRequest;
- (bool)hasQuery;
- (bool)hasRequestType;
- (bool)hasSessionID;
- (bool)hasTilesizeX;
- (bool)hasTilesizeY;
- (bool)hasUserLocation;
- (bool)hasZoomlevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mapCenterX;
- (int)mapCenterY;
- (id)mapRegion;
- (int)mapSpanX;
- (int)mapSpanY;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchRequest;
- (id)query;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientImgFmt:(int)arg1;
- (void)setClientImgMaxHeight:(int)arg1;
- (void)setClientImgMaxWidth:(int)arg1;
- (void)setHasClientImgFmt:(bool)arg1;
- (void)setHasClientImgMaxHeight:(bool)arg1;
- (void)setHasClientImgMaxWidth:(bool)arg1;
- (void)setHasMapCenterX:(bool)arg1;
- (void)setHasMapCenterY:(bool)arg1;
- (void)setHasMapSpanX:(bool)arg1;
- (void)setHasMapSpanY:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasTilesizeX:(bool)arg1;
- (void)setHasTilesizeY:(bool)arg1;
- (void)setHasZoomlevel:(bool)arg1;
- (void)setMapCenterX:(int)arg1;
- (void)setMapCenterY:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapSpanX:(int)arg1;
- (void)setMapSpanY:(int)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTilesizeX:(int)arg1;
- (void)setTilesizeY:(int)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setZoomlevel:(int)arg1;
- (int)tilesizeX;
- (int)tilesizeY;
- (id)userLocation;
- (void)writeTo:(id)arg1;
- (int)zoomlevel;

@end
