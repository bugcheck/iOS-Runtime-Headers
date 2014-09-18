/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABSwellTextView, UIColor;

@interface ABUITextView : UITextView {
    struct CGSize { 
        double width; 
        double height; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    UIColor *_highlightedTextColor;
    double _lastContentHeight;
    ABSwellTextView *_parent;
    } _pinnedCursorPosition;
    UIColor *_savedTextColor;
    UIColor *_shadowColor;
    } _shadowOffset;
    bool_disallowsSetContentOffset;
    bool_informParentOfContentSizeChange;
    bool_isHighlighted;
}

@property bool disallowsSetContentOffset;
@property(getter=isHighlighted) bool highlighted;
@property(retain) UIColor * highlightedTextColor;
@property ABSwellTextView * parent;
@property(retain) UIColor * shadowColor;
@property struct CGSize { double x1; double x2; } shadowOffset;

- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (void)_secretSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateStylesheet;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (bool)disallowsSetContentOffset;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (id)parent;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisallowsSetContentOffset:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextColor:(id)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;

@end
