/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSListController, UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
    PSListController *_controllerDelegate;
    id _delegate;
    id _realTarget;
    SEL _targetSetter;
    UIColor *_textColor;
    bool_delaySpecifierRelease;
    bool_forceFirstResponder;
    bool_returnKeyTapped;
    bool_valueChanged;
}

@property PSListController * controllerDelegate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) bool returnKeyTapped;
@property(readonly) Class superclass;

+ (long long)cellStyle;

- (bool)_cellIsEditing;
- (void)_saveForExit;
- (void)_setValueChanged;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canReload;
- (bool)canResignFirstResponder;
- (void)cellRemovedFromView;
- (void)controlChanged:(id)arg1;
- (id)controllerDelegate;
- (void)dealloc;
- (void)endEditingAndSave;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isTextFieldEditing;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (bool)resignFirstResponder;
- (bool)returnKeyTapped;
- (void)setCellEnabled:(bool)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)textField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)value;

@end
