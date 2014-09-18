/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABPersonTableAction, NSString, UIButton, UIView;

@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate> {
    UIView *_accessoryView;
    UIButton *_attributionButton;
    ABPersonTableAction *_deleteAction;
    UIView *_deleteView;
    <ABStyleProvider> *_styleProvider;
    bool_editing;
}

@property(retain) UIView * accessoryView;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) bool attributionEnabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) Class superclass;
@property(getter=isEditing) bool tableEditing;

- (id)accessoryView;
- (id)attribution;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributionFrame;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deleteViewFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAttributionEnabled;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)removeDeleteAction;
- (void)setAccessoryView:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(bool)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(bool)arg4;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTableEditing:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styleProvider;

@end
