/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GEOVectorTile, NSString, UIView;

@interface VKLabelMarker : NSObject <MKCalloutSource> {
    struct shared_ptr<vk::LabelManager> { 
        struct LabelManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct shared_ptr<vk::InfoLabel> { 
        struct InfoLabel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct _retain_ptr<GEOVectorTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        GEOVectorTile *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    float _contentScale;
    unsigned long long _featureID;
    } _featureTile;
    int _featureType;
    } _label;
    } _manager;
    NSString *_subtitle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIView * detailCalloutAccessoryView;
@property(readonly) unsigned long long hash;
@property(retain) UIView * leftCalloutAccessoryView;
@property(retain) UIView * rightCalloutAccessoryView;
@property(copy,readonly) NSString * subtitle;
@property(copy) NSString * subtitle;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; double x4; })_bounds;
- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (struct CGPoint { double x1; double x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutAnchorRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)debugAnchorPointString;
- (id)detailCalloutAccessoryView;
- (id)featureHandles;
- (unsigned long long)featureID;
- (id)featureTile;
- (int)featureType;
- (bool)hasBusinessID;
- (id)iconName;
- (id)incident;
- (struct shared_ptr<vk::InfoLabel> { struct InfoLabel {} *x1; struct __shared_weak_count {} *x2; })infoLabel;
- (id)initWithManager:(const struct shared_ptr<vk::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; }*)arg1 infoLabel:(const struct shared_ptr<vk::InfoLabel> { struct InfoLabel {} *x1; struct __shared_weak_count {} *x2; }*)arg2 contentScale:(float)arg3 featureInfo:(const struct LabelFeatureInfo { unsigned long long x1; unsigned char x2; struct _retain_ptr<GEOVectorTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; }*)arg4;
- (bool)isFlyoverTour;
- (bool)isOneWayArrow;
- (bool)isSelectable;
- (bool)isTrafficIncident;
- (id)leftCalloutAccessoryView;
- (id)mapRegion;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2;
- (int)selectionType;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setLabelPressed:(bool)arg1;
- (void)setLabelSelected:(bool)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (bool)shouldActivateFeatureSelectionMode;
- (id)subtitle;
- (id)title;

@end
