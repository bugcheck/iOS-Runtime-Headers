/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIPopoverController;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)initWithPopoverController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;

@end
