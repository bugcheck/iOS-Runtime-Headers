/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSAttributedString, NSString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent {
    struct SKUIEditorialStyle { 
        long long alignment; 
        long long bodyFontWeight; 
        float bodyFontSize; 
        float linkSpacing; 
        long long titleFontWeight; 
        float titleFontSize; 
        float titleSpacing; 
    NSAttributedString *_bodyAttributedText;
    NSString *_bodyText;
    NSArray *_links;
    long long _maximumBodyLines;
    } _style;
    NSString *_titleText;
    bool_usesLockupTitle;
}

@property(getter=_usesLockupTitle,readonly) bool _usesLockupTitle;
@property(readonly) NSAttributedString * bodyAttributedText;
@property(readonly) NSString * bodyText;
@property(readonly) struct SKUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; } editorialStyle;
@property(readonly) NSArray * links;
@property(readonly) long long maximumBodyLines;
@property(readonly) NSString * titleText;
@property(readonly) SKUILabelViewElement * viewElement;

- (void).cxx_destruct;
- (void)_setTitleText:(id)arg1;
- (bool)_usesLockupTitle;
- (id)bodyAttributedText;
- (id)bodyText;
- (long long)componentType;
- (struct SKUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; })editorialStyle;
- (id)initWithBrickRoomText:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)links;
- (long long)maximumBodyLines;
- (id)titleText;

@end
