/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoute, NSDictionary, NSString;

@interface MPAVRoute : NSObject {
    NSDictionary *_avRouteDescription;
    long long _displayRouteType;
    long long _pickableRouteType;
    NSString *_routeName;
    long long _routeSubtype;
    long long _routeType;
    NSString *_routeUID;
    MPAVRoute *_wirelessDisplayRoute;
    bool_picked;
    bool_requiresPassword;
}

@property(readonly) bool displayIsPicked;
@property(readonly) long long displayRouteType;
@property(readonly) long long passwordType;
@property(readonly) long long pickableRouteType;
@property(getter=isPicked,readonly) bool picked;
@property(readonly) long long rc_audioRouteType;
@property(readonly) bool rc_shouldExpectFaceContact;
@property(readonly) bool requiresPassword;
@property(readonly) NSString * routeName;
@property(readonly) long long routeSubtype;
@property(readonly) long long routeType;
@property(readonly) NSString * routeUID;
@property(readonly) MPAVRoute * wirelessDisplayRoute;

- (void).cxx_destruct;
- (id)_initWithAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (id)avRouteDescription;
- (void)dealloc;
- (id)description;
- (bool)displayIsPicked;
- (long long)displayRouteType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPicked;
- (long long)passwordType;
- (long long)pickableRouteType;
- (long long)rc_audioRouteType;
- (bool)rc_shouldExpectFaceContact;
- (bool)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (id)wirelessDisplayRoute;

@end
