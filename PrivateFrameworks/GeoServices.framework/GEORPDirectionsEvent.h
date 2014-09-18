/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSData, NSString;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int errorCode : 1; 
        unsigned int occurrenceResponseIndex : 1; 
        unsigned int occurrenceStepIndex : 1; 
        unsigned int switchedToResponseIndex : 1; 
        unsigned int synthesizedStepManeuverType : 1; 
        unsigned int type : 1; 
    long long _errorCode;
    NSString *_errorDomain;
    } _has;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteId;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
}

@property long long errorCode;
@property(retain) NSString * errorDomain;
@property bool hasErrorCode;
@property(readonly) bool hasErrorDomain;
@property(readonly) bool hasOccurrenceLatLng;
@property bool hasOccurrenceResponseIndex;
@property(readonly) bool hasOccurrenceRouteId;
@property bool hasOccurrenceStepIndex;
@property bool hasSwitchedToResponseIndex;
@property(readonly) bool hasSwitchedToRouteId;
@property(readonly) bool hasSynthesizedStepInstructions;
@property bool hasSynthesizedStepManeuverType;
@property bool hasType;
@property(retain) GEOLatLng * occurrenceLatLng;
@property unsigned int occurrenceResponseIndex;
@property(retain) NSData * occurrenceRouteId;
@property unsigned int occurrenceStepIndex;
@property unsigned int switchedToResponseIndex;
@property(retain) NSData * switchedToRouteId;
@property(retain) NSString * synthesizedStepInstructions;
@property int synthesizedStepManeuverType;
@property int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOccurrenceLatLng;
- (bool)hasOccurrenceResponseIndex;
- (bool)hasOccurrenceRouteId;
- (bool)hasOccurrenceStepIndex;
- (bool)hasSwitchedToResponseIndex;
- (bool)hasSwitchedToRouteId;
- (bool)hasSynthesizedStepInstructions;
- (bool)hasSynthesizedStepManeuverType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)occurrenceLatLng;
- (unsigned int)occurrenceResponseIndex;
- (id)occurrenceRouteId;
- (unsigned int)occurrenceStepIndex;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasOccurrenceResponseIndex:(bool)arg1;
- (void)setHasOccurrenceStepIndex:(bool)arg1;
- (void)setHasSwitchedToResponseIndex:(bool)arg1;
- (void)setHasSynthesizedStepManeuverType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOccurrenceLatLng:(id)arg1;
- (void)setOccurrenceResponseIndex:(unsigned int)arg1;
- (void)setOccurrenceRouteId:(id)arg1;
- (void)setOccurrenceStepIndex:(unsigned int)arg1;
- (void)setSwitchedToResponseIndex:(unsigned int)arg1;
- (void)setSwitchedToRouteId:(id)arg1;
- (void)setSynthesizedStepInstructions:(id)arg1;
- (void)setSynthesizedStepManeuverType:(int)arg1;
- (void)setType:(int)arg1;
- (unsigned int)switchedToResponseIndex;
- (id)switchedToRouteId;
- (id)synthesizedStepInstructions;
- (int)synthesizedStepManeuverType;
- (int)type;
- (void)writeTo:(id)arg1;

@end
