/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SUActivityItemProvider, SUScriptFunction, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate> {
    id _item;
    id _itemBlock;
    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}

@property(readonly) NSString * MIMEType;
@property(readonly) NSString * activityType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) WebScriptObject * itemFunction;
@property(readonly) SUActivityItemProvider * nativeActivityItemProvider;
@property double progress;
@property(copy) NSString * status;
@property(readonly) Class superclass;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)MIMEType;
- (id)_className;
- (void)_finishItemWithItem:(id)arg1;
- (void)_finishPreviewWithImage:(id)arg1;
- (id)_newPlaceholderWithMIMEType:(id)arg1;
- (void)activityItemProvider:(id)arg1 provideItemUsingBlock:(id)arg2;
- (id)activitySupportsMIMEType:(id)arg1;
- (id)activityType;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithMIMEType:(id)arg1;
- (id)itemFunction;
- (id)nativeActivityItemProvider;
- (double)progress;
- (id)scriptAttributeKeys;
- (void)setItem:(id)arg1;
- (void)setItemFunction:(id)arg1;
- (void)setPreviewImageWithURLString:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
