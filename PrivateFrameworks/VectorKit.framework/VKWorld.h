/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKWorldDelegate>, VKModelObject;

@interface VKWorld : NSObject {
    <VKWorldDelegate> *_delegate;
    VKModelObject *_modelRoot;
}

@property <VKWorldDelegate> * delegate;
@property(readonly) VKModelObject * modelRoot;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3 dispatchQueue:(id)arg4;
- (id)init;
- (id)modelRoot;
- (void)runAnimation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)worldDisplayDidChange;
- (void)worldLayoutDidChange;

@end
