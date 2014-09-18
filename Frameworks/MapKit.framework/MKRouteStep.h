/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOStep, MKPolyline, MKRouteStepPolyline, NSString;

@interface MKRouteStep : NSObject {
    GEOStep *_geoStep;
    NSString *_instructions;
    MKRouteStepPolyline *_polyline;
    unsigned long long _transportType;
}

@property(readonly) double distance;
@property(getter=_geoStep,readonly) GEOStep * geoStep;
@property(readonly) NSString * instructions;
@property(readonly) NSString * notice;
@property(readonly) MKPolyline * polyline;
@property(readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_geoStep;
- (id)_initWithGEOStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4;
- (double)distance;
- (id)instructions;
- (id)notice;
- (id)polyline;
- (unsigned long long)transportType;

@end
