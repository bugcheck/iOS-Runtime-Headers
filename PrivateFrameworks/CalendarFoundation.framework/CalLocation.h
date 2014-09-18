/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class CLLocation, CLPlacemark, NSString;

@interface CalLocation : NSObject <NSSecureCoding> {
    NSString *_abURLString;
    NSString *_address;
    NSString *_displayName;
    CLLocation *_location;
    CLPlacemark *_placemark;
    double _radius;
    NSString *_routeType;
    NSString *_title;
    int _type;
    bool_isCurrentLocation;
}

@property(copy) NSString * abURLString;
@property(copy) NSString * address;
@property(copy) NSString * displayName;
@property(readonly) bool isCurrentLocation;
@property(copy) CLLocation * location;
@property(retain) CLPlacemark * placemark;
@property double radius;
@property(copy) NSString * routeType;
@property(copy) NSString * title;
@property int type;

+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (id)routeTypeStringForCalLocationRoutingMode:(long long)arg1;
+ (long long)routingModeEnumForCalRouteType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abURLString;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)displayString;
- (double)distanceFromLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fullTitleAndAddressString;
- (id)geoURLString;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)placemark;
- (double)radius;
- (id)routeType;
- (void)setAbURLString:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setRouteType:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;
- (id)typeString;

@end
