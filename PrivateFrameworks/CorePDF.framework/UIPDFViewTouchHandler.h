/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    BOOL _allowMenu;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    BOOL _firstTouch;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIPDFMagnifierController *_magnifyController;
    UIMenuController *_menuController;
    UIPDFPageView *_pdfPageView;
    UIPDFSelectionController *_selectionController;
    BOOL _showLoupe;
    BOOL _showMagnifier;
    UITapGestureRecognizer *_singleTapRecognizer;
    BOOL _trackingSelection;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    BOOL _useDelegateForLinks;
}

@property BOOL allowMenu;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)releaseViewManager;

- (BOOL)allowMenu;
- (void)briefPressRecognized:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (BOOL)delegateGesture:(id)arg1 kind:(int)arg2;
- (void)disableRecognizers;
- (void)doubleTapRecognized:(id)arg1;
- (void)enableRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideMenu;
- (id)initWithView:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (id)nextResponder;
- (BOOL)resignFirstResponder;
- (void)selectAll:(id)arg1;
- (void)setAllowMenu:(BOOL)arg1;
- (void)setFirstTouch;
- (void)showMenu;
- (void)singleTapRecognized:(id)arg1;
- (void)twoFingerTapRecognized:(id)arg1;

@end
