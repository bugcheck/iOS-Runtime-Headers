/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class MKMapView;

@interface SiriUIMapCollectionViewCell : SiriUIContentCollectionViewCell {
    MKMapView *_mapView;
}

- (void).cxx_destruct;
- (void)_setCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setLatitude:(double)arg1 longitude:(double)arg2;

@end
