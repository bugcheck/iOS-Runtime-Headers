/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    long long _deferredClearButtonMode;
    id _deferredFont;
    } _deferredFrame;
    float _deferredPaddingLeft;
    float _deferredPaddingTop;
    NSString *_deferredPlaceholder;
    NSString *_deferredText;
    bool_isDeferringInterfaceUpdates;
}

@property(copy,readonly) NSString * debugDescription;
@property(getter=isDeferringInterfaceUpdates) bool deferringInterfaceUpdates;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (long long)clearButtonMode;
- (void)dealloc;
- (id)font;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)isDeferringInterfaceUpdates;
- (float)paddingLeft;
- (float)paddingTop;
- (id)placeholder;
- (void)setClearButtonMode:(long long)arg1;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
