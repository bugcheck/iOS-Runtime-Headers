/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MusicPickerOverlayDelegate>, NSString, UIBarButtonItem, UIViewController;

@interface MusicPickerOverlay : NSObject {
    <MusicPickerOverlayDelegate> *_delegate;
    UIViewController *_viewController;
    bool_allowsMultipleSelections;
}

@property bool allowsMultipleSelections;
@property <MusicPickerOverlayDelegate> * delegate;
@property(readonly) UIBarButtonItem * rightBarButtonItem;
@property(readonly) NSString * title;
@property(retain) UIViewController * viewController;

- (void).cxx_destruct;
- (bool)allowsMultipleSelections;
- (id)delegate;
- (void)finish;
- (void)loadViewController;
- (id)rightBarButtonItem;
- (void)setAllowsMultipleSelections:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldDisplayAddAllAsDisabledFromDataSource:(id)arg1;
- (bool)shouldDisplayEntityAsDisabled:(id)arg1;
- (id)title;
- (void)viewController:(id)arg1 didPickAllEntitiesFromDataSource:(id)arg2;
- (void)viewController:(id)arg1 didPickEntity:(id)arg2;
- (id)viewController;

@end
