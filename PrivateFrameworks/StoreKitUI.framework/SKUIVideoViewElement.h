/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIImageViewElement;

@interface SKUIVideoViewElement : SKUIViewElement {
    BOOL _enabled;
    long long _itemIdentifier;
    long long _playbackStyle;
    SKUIImageViewElement *_thumbnailImage;
}

@property(readonly) NSArray * assets;
@property(readonly) long long itemIdentifier;
@property(readonly) long long playbackStyle;
@property(readonly) SKUIImageViewElement * thumbnailImage;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)assets;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)itemIdentifier;
- (long long)playbackStyle;
- (id)thumbnailImage;

@end
