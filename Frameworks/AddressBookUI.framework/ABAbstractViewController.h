/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABModel;

@interface ABAbstractViewController : UITableViewController {
    ABModel *_model;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) ABModel * model;
@property(retain) <ABStyleProvider> * styleProvider;

- (bool)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (int)behavior;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)model;
- (id)peoplePickerNavigationController;
- (void)setAddressBook:(void*)arg1;
- (void)setModel:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (bool)supportedInterfaceOrientation:(long long)arg1;
- (void)updateNavigationButtons;

@end
