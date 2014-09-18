/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLFloor, CLLocationMatchInfo, NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding, CKRecordValue> {
    id _internal;
}

@property(readonly) int _mapkit_source;
@property(readonly) double altitude;
@property(readonly) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; } clientLocation;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) double course;
@property(readonly) double courseAccuracy;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(copy,readonly) CLFloor * floor;
@property(readonly) bool hasMatch;
@property(readonly) unsigned long long hash;
@property(readonly) double horizontalAccuracy;
@property(readonly) NSString * iso6709Notation;
@property(readonly) bool legacyHasMatch;
@property(readonly) CLLocationMatchInfo * matchInfo;
@property(readonly) struct { double x1; double x2; } rawCoordinate;
@property(readonly) double rawCourse;
@property(readonly) double speed;
@property(readonly) double speedAccuracy;
@property(readonly) Class superclass;
@property(copy,readonly) NSDate * timestamp;
@property(readonly) int type;
@property(readonly) double verticalAccuracy;

+ (id)_mapKit_locationWithPlace:(id)arg1;
+ (id)_mapkit_stringWithType:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (int)_mapkit_source;
- (double)altitude;
- (id)cam_videoMetadataRepresentation;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; })clientLocation;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floor;
- (double)getDistanceFrom:(id)arg1;
- (bool)hasMatch;
- (bool)hasValidCourse;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; })arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 rawCoordinate:(struct { double x1; double x2; })arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 matchInfo:(id)arg13;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqualToLocationCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isStale;
- (id)iso6709Notation;
- (bool)legacyHasMatch;
- (id)locationDescription;
- (id)matchInfo;
- (int)pl_locationHash;
- (id)pl_newSurroundingLocationsHashes;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (struct { double x1; double x2; })rawCoordinate;
- (double)rawCourse;
- (id)routeMatch;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)shortDescription;
- (id)snapToResolution:(double)arg1;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (int)type;
- (double)verticalAccuracy;

@end
