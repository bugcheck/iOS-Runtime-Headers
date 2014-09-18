/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKOverlay>;

@interface MKOverlayRenderer : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    double _alpha;
    } _boundingMapRect;
    double _contentScaleFactor;
    <MKOverlay> *_overlay;
    id _renderer;
}

@property double alpha;
@property(readonly) double contentScaleFactor;
@property(readonly) <MKOverlay> * overlay;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_boundingMapRect;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (struct { double x1; double x2; })_originMapPoint;
- (id)_renderer;
- (double)alpha;
- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (double)contentScaleFactor;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)init;
- (id)initWithOverlay:(id)arg1;
- (struct { double x1; double x2; })mapPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)overlay:(id)arg1 canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2 inContext:(struct CGContext { }*)arg3;
- (id)overlay;
- (struct CGPoint { double x1; double x2; })pointForMapPoint:(struct { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlpha:(double)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_boundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_renderer:(id)arg1;

@end
