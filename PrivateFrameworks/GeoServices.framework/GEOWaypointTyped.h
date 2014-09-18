/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace;

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    struct { 
        unsigned int waypointType : 1; 
        unsigned int isCurrentLocation : 1; 
    } _has;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointPlace *_waypointPlace;
    int _waypointType;
    bool_isCurrentLocation;
}

@property bool hasIsCurrentLocation;
@property(readonly) bool hasWaypointId;
@property(readonly) bool hasWaypointLocation;
@property(readonly) bool hasWaypointPlace;
@property bool hasWaypointType;
@property bool isCurrentLocation;
@property(retain) GEOWaypointID * waypointId;
@property(retain) GEOWaypointLocation * waypointLocation;
@property(retain) GEOWaypointPlace * waypointPlace;
@property int waypointType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCurrentLocation;
- (bool)hasWaypointId;
- (bool)hasWaypointLocation;
- (bool)hasWaypointPlace;
- (bool)hasWaypointType;
- (unsigned long long)hash;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (id)locationForWaypoint;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCurrentLocation:(bool)arg1;
- (void)setHasWaypointType:(bool)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setWaypointId:(id)arg1;
- (void)setWaypointLocation:(id)arg1;
- (void)setWaypointPlace:(id)arg1;
- (void)setWaypointType:(int)arg1;
- (id)waypointId;
- (id)waypointLocation;
- (id)waypointPlace;
- (int)waypointType;
- (void)writeTo:(id)arg1;

@end
