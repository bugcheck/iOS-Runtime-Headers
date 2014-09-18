/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKGlobeLineContainerDelegate>, <VKRouteMatchedAnnotationPresentation>, NSMutableArray, NSMutableSet, NSString, VKPolylineOverlay;

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
        struct __tree<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::less<VKPolylineOverlay *>, true>, std::__1::allocator<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> > > > { 
            struct __tree_node<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<VKPolylineOverlay *, std::__1::__value_type<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData> >, std::__1::less<VKPolylineOverlay *>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    <VKGlobeLineContainerDelegate> *_delegate;
    struct GlobeView { int (**x1)(); } *_globeView;
    NSMutableArray *_overlays;
    NSMutableSet *_persistentOverlays;
    } _polylinesToRoutes;
    <VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    struct VKGlobeRouteSplit { int (**x1)(); id x2; } *_routeSplit;
    struct VKGlobeRouteStyle { float x1; float x2; float x3; struct Color { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct Color { unsigned char x_5_1_1; unsigned char x_5_1_2; unsigned char x_5_1_3; unsigned char x_5_1_4; } x5; struct Color { unsigned char x_6_1_1; unsigned char x_6_1_2; unsigned char x_6_1_3; unsigned char x_6_1_4; } x6; struct Color { unsigned char x_7_1_1; unsigned char x_7_1_2; unsigned char x_7_1_3; unsigned char x_7_1_4; } x7; struct Color { unsigned char x_8_1_1; unsigned char x_8_1_2; unsigned char x_8_1_3; unsigned char x_8_1_4; } x8; float x9; float x10; float x11; float x12; float x13; int x14; struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x_15_1_1; struct __shared_weak_count {} *x_15_1_2; } x15; struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x_16_1_1; struct __shared_weak_count {} *x_16_1_2; } x16; } *_routeStyle;
    VKPolylineOverlay *_selectedPolyline;
    bool_trafficEnabled;
}

@property(copy,readonly) NSString * debugDescription;
@property <VKGlobeLineContainerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
- (void)addLine:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)clearLineSelection;
- (void)dealloc;
- (id)delegate;
- (id)initWithGlobeView:(struct GlobeView { int (**x1)(); }*)arg1 stylesheet:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlays;
- (id)persistentOverlays;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)removeLine:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setSelected:(id)arg1 selected:(bool)arg2;
- (void)setStylesheet:(id)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)updateWithContext:(id)arg1;

@end
