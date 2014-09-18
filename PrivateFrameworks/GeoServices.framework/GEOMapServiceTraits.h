/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEOMapRegion, NSMutableArray, NSString;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        unsigned int sessionId : 1; 
        unsigned int carHeadunitPixelHeight : 1; 
        unsigned int carHeadunitPixelWidth : 1; 
        unsigned int mapZoomLevel : 1; 
        unsigned int action : 1; 
        unsigned int carHeadunitInteractionModel : 1; 
        unsigned int mode : 1; 
        unsigned int photosCount : 1; 
        unsigned int reviewUserPhotosCount : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int source : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int isAPICall : 1; 
    int _action;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    int _carHeadunitInteractionModel;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    NSString *_deviceDisplayLocale;
    NSMutableArray *_deviceInstalledKeyboardLocales;
    NSString *_deviceKeyboardLocale;
    GEOLocation *_deviceLocation;
    NSString *_deviceSpokenLocale;
    } _has;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    int _mode;
    NSMutableArray *_photoSizes;
    unsigned int _photosCount;
    NSMutableArray *_reviewUserPhotoSizes;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    } _sessionId;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    } _transportTypes;
    bool_isAPICall;
}

@property int action;
@property(retain) NSString * appIdentifier;
@property(retain) NSString * appMajorVersion;
@property(retain) NSString * appMinorVersion;
@property int carHeadunitInteractionModel;
@property(retain) NSString * carHeadunitManufacturer;
@property(retain) NSString * carHeadunitModel;
@property double carHeadunitPixelHeight;
@property double carHeadunitPixelWidth;
@property(retain) NSString * deviceDisplayLocale;
@property(retain) NSMutableArray * deviceInstalledKeyboardLocales;
@property(retain) NSString * deviceKeyboardLocale;
@property(retain) GEOLocation * deviceLocation;
@property(retain) NSString * deviceSpokenLocale;
@property bool hasAction;
@property(readonly) bool hasAppIdentifier;
@property(readonly) bool hasAppMajorVersion;
@property(readonly) bool hasAppMinorVersion;
@property bool hasCarHeadunitInteractionModel;
@property(readonly) bool hasCarHeadunitManufacturer;
@property(readonly) bool hasCarHeadunitModel;
@property bool hasCarHeadunitPixelHeight;
@property bool hasCarHeadunitPixelWidth;
@property(readonly) bool hasDeviceDisplayLocale;
@property(readonly) bool hasDeviceKeyboardLocale;
@property(readonly) bool hasDeviceLocation;
@property(readonly) bool hasDeviceSpokenLocale;
@property bool hasIsAPICall;
@property(readonly) bool hasMapRegion;
@property bool hasMapZoomLevel;
@property bool hasMode;
@property bool hasPhotosCount;
@property bool hasReviewUserPhotosCount;
@property bool hasSequenceNumber;
@property bool hasSessionId;
@property bool hasSource;
@property bool hasTimeSinceMapEnteredForeground;
@property bool hasTimeSinceMapViewportChanged;
@property bool isAPICall;
@property(retain) GEOMapRegion * mapRegion;
@property double mapZoomLevel;
@property int mode;
@property(retain) NSMutableArray * photoSizes;
@property unsigned int photosCount;
@property(retain) NSMutableArray * reviewUserPhotoSizes;
@property unsigned int reviewUserPhotosCount;
@property unsigned int sequenceNumber;
@property struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property int source;
@property unsigned int timeSinceMapEnteredForeground;
@property unsigned int timeSinceMapViewportChanged;
@property(readonly) int* transportTypes;
@property(readonly) unsigned long long transportTypesCount;

- (int)_uiActionType;
- (int)action;
- (void)addDeviceInstalledKeyboardLocale:(id)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (int)carHeadunitInteractionModel;
- (id)carHeadunitManufacturer;
- (id)carHeadunitModel;
- (double)carHeadunitPixelHeight;
- (double)carHeadunitPixelWidth;
- (void)clearDeviceInstalledKeyboardLocales;
- (void)clearPhotoSizes;
- (void)clearReviewUserPhotoSizes;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceDisplayLocale;
- (id)deviceInstalledKeyboardLocaleAtIndex:(unsigned long long)arg1;
- (id)deviceInstalledKeyboardLocales;
- (unsigned long long)deviceInstalledKeyboardLocalesCount;
- (id)deviceKeyboardLocale;
- (id)deviceLocation;
- (id)deviceSpokenLocale;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasCarHeadunitInteractionModel;
- (bool)hasCarHeadunitManufacturer;
- (bool)hasCarHeadunitModel;
- (bool)hasCarHeadunitPixelHeight;
- (bool)hasCarHeadunitPixelWidth;
- (bool)hasDeviceDisplayLocale;
- (bool)hasDeviceKeyboardLocale;
- (bool)hasDeviceLocation;
- (bool)hasDeviceSpokenLocale;
- (bool)hasIsAPICall;
- (bool)hasMapRegion;
- (bool)hasMapZoomLevel;
- (bool)hasMode;
- (bool)hasPhotosCount;
- (bool)hasReviewUserPhotosCount;
- (bool)hasSequenceNumber;
- (bool)hasSessionId;
- (bool)hasSource;
- (bool)hasTimeSinceMapEnteredForeground;
- (bool)hasTimeSinceMapViewportChanged;
- (unsigned long long)hash;
- (bool)isAPICall;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (double)mapZoomLevel;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)photoSizes;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (unsigned int)photosCount;
- (bool)readFrom:(id)arg1;
- (id)reviewUserPhotoSizes;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (unsigned int)reviewUserPhotosCount;
- (unsigned int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAction:(int)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setCarHeadunitInteractionModel:(int)arg1;
- (void)setCarHeadunitManufacturer:(id)arg1;
- (void)setCarHeadunitModel:(id)arg1;
- (void)setCarHeadunitPixelHeight:(double)arg1;
- (void)setCarHeadunitPixelWidth:(double)arg1;
- (void)setDeviceDisplayLocale:(id)arg1;
- (void)setDeviceInstalledKeyboardLocales:(id)arg1;
- (void)setDeviceKeyboardLocale:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceSpokenLocale:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasCarHeadunitInteractionModel:(bool)arg1;
- (void)setHasCarHeadunitPixelHeight:(bool)arg1;
- (void)setHasCarHeadunitPixelWidth:(bool)arg1;
- (void)setHasIsAPICall:(bool)arg1;
- (void)setHasMapZoomLevel:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasPhotosCount:(bool)arg1;
- (void)setHasReviewUserPhotosCount:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setIsAPICall:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapZoomLevel:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setPhotoSizes:(id)arg1;
- (void)setPhotosCount:(unsigned int)arg1;
- (void)setReviewUserPhotoSizes:(id)arg1;
- (void)setReviewUserPhotosCount:(unsigned int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSource:(int)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int)source;
- (unsigned int)timeSinceMapEnteredForeground;
- (unsigned int)timeSinceMapViewportChanged;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (unsigned long long)transportTypesCount;
- (void)writeTo:(id)arg1;

@end
