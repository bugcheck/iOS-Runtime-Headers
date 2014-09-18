/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, NSMutableArray, NSSet;

@interface SGMicrodataItem : SGMicrodataItemScope {
    NSMutableArray *_itemRef;
    NSSet *_itemType;
}

@property(readonly) NSArray * itemRef;
@property(readonly) NSSet * itemType;

- (void).cxx_destruct;
- (id)initWithItemType:(id)arg1 itemRef:(id)arg2;
- (id)itemRef;
- (id)itemType;
- (void)resolveItemRefsWithDocument:(id)arg1;

@end
