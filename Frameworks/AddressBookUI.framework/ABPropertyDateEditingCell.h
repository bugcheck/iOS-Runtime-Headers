/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIDatePicker, UIViewController;

@interface ABPropertyDateEditingCell : ABPropertySimpleEditingCell <UITextFieldDelegate, ABPickerControllerDelegate> {
    UIViewController *_contentViewController;
    UIDatePicker *_datePicker;
}

@property(retain) UIViewController * contentViewController;
@property(retain) UIDatePicker * datePicker;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (id)contentViewController;
- (void)dateChanged:(id)arg1;
- (id)datePicker;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)prepareForReuse;
- (void)setContentViewController:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end
