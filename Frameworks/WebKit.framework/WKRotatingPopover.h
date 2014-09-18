/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class <WKRotatingPopoverDelegate>, NSString, UIPopoverController, WKContentView;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    <WKRotatingPopoverDelegate> *_dismissionDelegate;
    } _popoverController;
    } _presentationPoint;
    WKContentView *_view;
    bool_isRotating;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <WKRotatingPopoverDelegate> * dismissionDelegate;
@property(readonly) unsigned long long hash;
@property(retain) UIPopoverController * popoverController;
@property struct CGPoint { double x1; double x2; } presentationPoint;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)dismissionDelegate;
- (id)initWithView:(id)arg1;
- (unsigned long long)popoverArrowDirections;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (void)setDismissionDelegate:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willRotate:(id)arg1;

@end
