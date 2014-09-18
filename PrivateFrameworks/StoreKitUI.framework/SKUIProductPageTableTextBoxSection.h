/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    long long _stringIndex;
    NSString *_subtitle;
    SKUILayoutCache *_textLayoutCache;
    NSString *_title;
    bool_isExpanded;
}

@property(retain) SKUIColorScheme * colorScheme;
@property long long stringIndex;
@property(copy) NSString * subtitle;
@property(retain) SKUILayoutCache * textLayoutCache;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)colorScheme;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (long long)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setStringIndex:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)stringIndex;
- (id)subtitle;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textLayoutCache;
- (id)title;

@end
