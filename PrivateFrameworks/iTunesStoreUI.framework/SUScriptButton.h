/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    WebScriptObject *_target;
    bool_shouldPerformDefaultAction;
}

@property(retain) id action;
@property(retain) SUScriptCanvasContext * canvas;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool enabled;
@property(readonly) unsigned long long hash;
@property(retain) UIImage * image;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageEdgeInsets;
@property bool loading;
@property bool shouldPerformDefaultAction;
@property(readonly) id showingConfirmation;
@property(retain) NSString * style;
@property(retain) NSString * subtitle;
@property(readonly) Class superclass;
@property long long tag;
@property(retain) WebScriptObject * target;
@property(retain) NSString * title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_action;
- (id)_boxedNativeButton;
- (id)_className;
- (id)_initSUScriptButton;
- (id)_nativeButton;
- (id)_systemItemString;
- (id)action;
- (id)attributeKeys;
- (id)buttonItem;
- (id)canvas;
- (void)dealloc;
- (bool)enabled;
- (void)hideConfirmationAnimated:(bool)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageEdgeInsets;
- (id)init;
- (id)initWithSystemItemString:(id)arg1;
- (bool)loading;
- (id)nativeButtonOfType:(int)arg1;
- (void)performActionWithArguments:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setAction:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)setLoading:(bool)arg1;
- (void)setNativeButton:(id)arg1;
- (void)setShouldPerformDefaultAction:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (void)showConfirmationWithTitle:(id)arg1 animated:(bool)arg2;
- (id)showingConfirmation;
- (id)style;
- (id)subtitle;
- (long long)tag;
- (id)target;
- (id)title;

@end
