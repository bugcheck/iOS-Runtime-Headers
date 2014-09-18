/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class NSString, UIViewController;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <ABPeoplePickerNavigationControllerDelegate> {
    UIViewController *_presentingViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_abAssistantManager;
- (void)_dismissPicker;
- (void)_pickerButtonTapped:(id)arg1;
- (id)_pickerResponseForPerson:(void*)arg1;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)viewDidLoad;

@end
